# encoding: utf-8
#  Phusion Passenger - https://www.phusionpassenger.com/
#  Copyright (c) 2013 Phusion
#
#  "Phusion Passenger" is a trademark of Hongli Lai & Ninh Bui.
#
#  See LICENSE file for license information.

module PhusionPassenger
module Utils

class TerminalChoiceMenu
	class Choice
		attr_reader :name
		attr_accessor :checked

		alias checked? checked

		def self.create(choice)
			if choice.is_a?(Choice)
				return choice
			else
				return Choice.new(choice)
			end
		end

		def initialize(name, checked = false)
			@name = name
			@checked = checked
		end

		def toggle!
			@checked = !@checked
		end
	end

	def initialize(choices)
		@choices = choices.map { |choice| Choice.create(choice) }
		@pointer = 0
		@index   = index_choices
		initialize_terminal_control
	end

	def display_choices
		display(render_to_string)
	end

	def query
		if STDIN.tty?
			done = false
			begin
				raw_no_echo_mode
				hide_cursor
				while !done
					display_choices
					done = process_input
					clear_screen if !done
				end
			ensure
				restore_mode
				show_cursor
				puts
			end
		else
			display_choices
			puts
		end
	end

	def [](name)
		return @index[name]
	end

	def selected_choices
		@choices.find_all{ |c| c.checked? }.map{ |c| c.name }
	end

private
	JRUBY = defined?(RUBY_ENGINE) && RUBY_ENGINE == 'jruby'

	def index_choices
		index = {}
		@choices.each do |choice|
			index[choice.name] = choice
		end
		return index
	end

	def process_input
		case STDIN.getc
		when "\x1b"
			process_cursor_move
			return false
		when " "
			process_toggle
			return false
		when "\r"
			return true
		else
			return false
		end
	end

	def process_cursor_move
		if STDIN.getc == "["
			case STDIN.getc
			when "A" # up
				@pointer = [@pointer - 1, 0].max
			when "B" # down
				@pointer = [@pointer + 1, @choices.size - 1].min
			end
		end
	end

	def process_toggle
		@choices[@pointer].toggle!
	end

	def render_to_string
		str = ""
		@choices.each_with_index do |choice, i|
			pointer = render_pointer(i)
			checkbox = render_checkbox(choice.checked)
			str << " #{pointer} #{checkbox}  #{choice.name}\r\n"
		end
		str.chomp!
		return str
	end

	def render_pointer(index)
		return @pointer == index ? "‣" : " "
	end

	def render_checkbox(checked)
		return checked ? "⬢" : "⬡"
	end

	def display(str)
		STDOUT.write(str)
		STDOUT.flush
	end

	def clear_screen
		number_of_lines = render_to_string.split("\n").size
		display("\r")
		(number_of_lines - 1).times do
			display(move_up)
		end
	end

	def hide_cursor
		display("\x1b[?25l")
	end

	def show_cursor
		display("\x1b[?25h")
	end

	def move_up
		return "\x1b[0A"
	end

	if JRUBY
		require 'java'
		require 'readline'
		java_import 'jline.console.ConsoleReader'

		def initialize_terminal_control
			input = STDIN.to_inputstream
			output = STDOUT.to_outputstream
			@console = ConsoleReader.new(input, output)
			@console.set_history_enabled(false)
			@console.set_bell_enabled(true)
			@console.set_pagination_enabled(false)
		end

		def raw_no_echo_mode
			@terminal_state = @console.getEchoCharacter
            @console.setEchoCharacter(0)
		end

		def restore_mode
			@console.setEchoCharacter(@terminal_state)
		end
	else
		def initialize_terminal_control
		end

		def raw_no_echo_mode
			@terminal_state = `stty -g`
			system("stty raw -echo -icanon isig")
		end

		def restore_mode
			system("stty #{@terminal_state}")
		end
	end
end

end # module Utils
end # module PhusionPassenger