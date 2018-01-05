/*
 *  Phusion Passenger - https://www.phusionpassenger.com/
 *  Copyright (c) 2010-2017 Phusion Holding B.V.
 *
 *  "Passenger", "Phusion Passenger" and "Union Station" are registered
 *  trademarks of Phusion Holding B.V.
 *
 *  Permission is hereby granted, free of charge, to any person obtaining a copy
 *  of this software and associated documentation files (the "Software"), to deal
 *  in the Software without restriction, including without limitation the rights
 *  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 *  copies of the Software, and to permit persons to whom the Software is
 *  furnished to do so, subject to the following conditions:
 *
 *  The above copyright notice and this permission notice shall be included in
 *  all copies or substantial portions of the Software.
 *
 *  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 *  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 *  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 *  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 *  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 *  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 *  THE SOFTWARE.
 */

/*
 * DirConfig/AutoGeneratedStruct.h is automatically generated from DirConfig/AutoGeneratedStruct.h.cxxcodebuilder,
 * using definitions from src/ruby_supportlib/phusion_passenger/apache2/config_options.rb.
 * Edits to DirConfig/AutoGeneratedStruct.h will be lost.
 *
 * To update DirConfig/AutoGeneratedStruct.h:
 *   rake apache2
 *
 * To force regeneration of DirConfig/AutoGeneratedStruct.h:
 *   rm -f src/apache2_module/DirConfig/AutoGeneratedStruct.h
 *   rake src/apache2_module/DirConfig/AutoGeneratedStruct.h
 */

struct AutoGeneratedDirConfig {

	/*
	 * Whether to support encoded slashes in the URL
	 */
	Threeway mAllowEncodedSlashes;

	/*
	 * Whether to enable extra response buffering inside Apache.
	 */
	Threeway mBufferResponse;

	/*
	 * Whether to buffer file uploads.
	 */
	Threeway mBufferUpload;

	/*
	 * Enable or disable Phusion Passenger.
	 */
	Threeway mEnabled;

	/*
	 * Allow Apache to handle error response.
	 */
	Threeway mErrorOverride;

	/*
	 * Whether to display friendly error pages when something goes wrong.
	 */
	Threeway mFriendlyErrorPages;

	/*
	 * Enable or disable Passenger's high performance mode.
	 */
	Threeway mHighPerformance;

	/*
	 * Whether to load environment variables from the shell before running the application.
	 */
	Threeway mLoadShellEnvvars;

	/*
	 * Whether to enable sticky sessions.
	 */
	Threeway mStickySessions;

	/*
	 * Force Passenger to believe that an application process can handle the given number of concurrent requests per process
	 */
	int mForceMaxConcurrentRequestsPerProcess;

	/*
	 * The maximum number of seconds that a preloader process may be idle before it is shutdown.
	 */
	int mMaxPreloaderIdleTime;

	/*
	 * The maximum number of queued requests.
	 */
	int mMaxRequestQueueSize;

	/*
	 * The maximum number of requests that an application instance may process.
	 */
	int mMaxRequests;

	/*
	 * The minimum number of application instances to keep when cleaning idle instances.
	 */
	int mMinInstances;

	/*
	 * A timeout for application startup.
	 */
	int mStartTimeout;

	/*
	 * The environment under which applications are run.
	 */
	StaticString mAppEnv;

	/*
	 * Application process group name.
	 */
	StaticString mAppGroupName;

	/*
	 * The application's root directory.
	 */
	StaticString mAppRoot;

	/*
	 * Force specific application type.
	 */
	StaticString mAppType;

	/*
	 * The group that Ruby applications must run as.
	 */
	StaticString mGroup;

	/*
	 * Settings file for (non-bundled) Meteor apps.
	 */
	StaticString mMeteorAppSettings;

	/*
	 * The Node.js command to use.
	 */
	StaticString mNodejs;

	/*
	 * The Python interpreter to use.
	 */
	StaticString mPython;

	/*
	 * The directory in which Phusion Passenger should look for restart.txt.
	 */
	StaticString mRestartDir;

	/*
	 * The Ruby interpreter to use.
	 */
	StaticString mRuby;

	/*
	 * The spawn method to use.
	 */
	StaticString mSpawnMethod;

	/*
	 * Force specific startup file.
	 */
	StaticString mStartupFile;

	/*
	 * The cookie name to use for sticky sessions.
	 */
	StaticString mStickySessionsCookieName;

	/*
	 * The user that Ruby applications must run as.
	 */
	StaticString mUser;

	/*
	 * Declare the given base URI as belonging to a web application.
	 */
	std::set<std::string> mBaseURIs;


	StaticString mAllowEncodedSlashesSourceFile;
	StaticString mBufferResponseSourceFile;
	StaticString mBufferUploadSourceFile;
	StaticString mEnabledSourceFile;
	StaticString mErrorOverrideSourceFile;
	StaticString mFriendlyErrorPagesSourceFile;
	StaticString mHighPerformanceSourceFile;
	StaticString mLoadShellEnvvarsSourceFile;
	StaticString mStickySessionsSourceFile;
	StaticString mForceMaxConcurrentRequestsPerProcessSourceFile;
	StaticString mMaxPreloaderIdleTimeSourceFile;
	StaticString mMaxRequestQueueSizeSourceFile;
	StaticString mMaxRequestsSourceFile;
	StaticString mMinInstancesSourceFile;
	StaticString mStartTimeoutSourceFile;
	StaticString mAppEnvSourceFile;
	StaticString mAppGroupNameSourceFile;
	StaticString mAppRootSourceFile;
	StaticString mAppTypeSourceFile;
	StaticString mGroupSourceFile;
	StaticString mMeteorAppSettingsSourceFile;
	StaticString mNodejsSourceFile;
	StaticString mPythonSourceFile;
	StaticString mRestartDirSourceFile;
	StaticString mRubySourceFile;
	StaticString mSpawnMethodSourceFile;
	StaticString mStartupFileSourceFile;
	StaticString mStickySessionsCookieNameSourceFile;
	StaticString mUserSourceFile;
	StaticString mBaseURIsSourceFile;

	unsigned int mAllowEncodedSlashesSourceLine;
	unsigned int mBufferResponseSourceLine;
	unsigned int mBufferUploadSourceLine;
	unsigned int mEnabledSourceLine;
	unsigned int mErrorOverrideSourceLine;
	unsigned int mFriendlyErrorPagesSourceLine;
	unsigned int mHighPerformanceSourceLine;
	unsigned int mLoadShellEnvvarsSourceLine;
	unsigned int mStickySessionsSourceLine;
	unsigned int mForceMaxConcurrentRequestsPerProcessSourceLine;
	unsigned int mMaxPreloaderIdleTimeSourceLine;
	unsigned int mMaxRequestQueueSizeSourceLine;
	unsigned int mMaxRequestsSourceLine;
	unsigned int mMinInstancesSourceLine;
	unsigned int mStartTimeoutSourceLine;
	unsigned int mAppEnvSourceLine;
	unsigned int mAppGroupNameSourceLine;
	unsigned int mAppRootSourceLine;
	unsigned int mAppTypeSourceLine;
	unsigned int mGroupSourceLine;
	unsigned int mMeteorAppSettingsSourceLine;
	unsigned int mNodejsSourceLine;
	unsigned int mPythonSourceLine;
	unsigned int mRestartDirSourceLine;
	unsigned int mRubySourceLine;
	unsigned int mSpawnMethodSourceLine;
	unsigned int mStartupFileSourceLine;
	unsigned int mStickySessionsCookieNameSourceLine;
	unsigned int mUserSourceLine;
	unsigned int mBaseURIsSourceLine;

	bool mAllowEncodedSlashesExplicitlySet: 1;
	bool mBufferResponseExplicitlySet: 1;
	bool mBufferUploadExplicitlySet: 1;
	bool mEnabledExplicitlySet: 1;
	bool mErrorOverrideExplicitlySet: 1;
	bool mFriendlyErrorPagesExplicitlySet: 1;
	bool mHighPerformanceExplicitlySet: 1;
	bool mLoadShellEnvvarsExplicitlySet: 1;
	bool mStickySessionsExplicitlySet: 1;
	bool mForceMaxConcurrentRequestsPerProcessExplicitlySet: 1;
	bool mMaxPreloaderIdleTimeExplicitlySet: 1;
	bool mMaxRequestQueueSizeExplicitlySet: 1;
	bool mMaxRequestsExplicitlySet: 1;
	bool mMinInstancesExplicitlySet: 1;
	bool mStartTimeoutExplicitlySet: 1;
	bool mAppEnvExplicitlySet: 1;
	bool mAppGroupNameExplicitlySet: 1;
	bool mAppRootExplicitlySet: 1;
	bool mAppTypeExplicitlySet: 1;
	bool mGroupExplicitlySet: 1;
	bool mMeteorAppSettingsExplicitlySet: 1;
	bool mNodejsExplicitlySet: 1;
	bool mPythonExplicitlySet: 1;
	bool mRestartDirExplicitlySet: 1;
	bool mRubyExplicitlySet: 1;
	bool mSpawnMethodExplicitlySet: 1;
	bool mStartupFileExplicitlySet: 1;
	bool mStickySessionsCookieNameExplicitlySet: 1;
	bool mUserExplicitlySet: 1;
	bool mBaseURIsExplicitlySet: 1;


	bool
	getAllowEncodedSlashes() const {
		if (mAllowEncodedSlashes == Apache2Module::UNSET) {
			return false;
		} else {
			return mAllowEncodedSlashes == Apache2Module::ENABLED;
		}
	}

	bool
	getBufferResponse() const {
		if (mBufferResponse == Apache2Module::UNSET) {
			return false;
		} else {
			return mBufferResponse == Apache2Module::ENABLED;
		}
	}

	bool
	getBufferUpload() const {
		if (mBufferUpload == Apache2Module::UNSET) {
			return true;
		} else {
			return mBufferUpload == Apache2Module::ENABLED;
		}
	}

	bool
	getEnabled() const {
		if (mEnabled == Apache2Module::UNSET) {
			return true;
		} else {
			return mEnabled == Apache2Module::ENABLED;
		}
	}

	bool
	getErrorOverride() const {
		if (mErrorOverride == Apache2Module::UNSET) {
			return false;
		} else {
			return mErrorOverride == Apache2Module::ENABLED;
		}
	}

	Threeway
	getFriendlyErrorPages() const {
		return mFriendlyErrorPages;
	}

	bool
	getHighPerformance() const {
		if (mHighPerformance == Apache2Module::UNSET) {
			return false;
		} else {
			return mHighPerformance == Apache2Module::ENABLED;
		}
	}

	bool
	getLoadShellEnvvars() const {
		if (mLoadShellEnvvars == Apache2Module::UNSET) {
			return true;
		} else {
			return mLoadShellEnvvars == Apache2Module::ENABLED;
		}
	}

	bool
	getStickySessions() const {
		if (mStickySessions == Apache2Module::UNSET) {
			return false;
		} else {
			return mStickySessions == Apache2Module::ENABLED;
		}
	}

	int
	getForceMaxConcurrentRequestsPerProcess() const {
		if (mForceMaxConcurrentRequestsPerProcess == UNSET_INT_VALUE) {
			return -1;
		} else {
			return mForceMaxConcurrentRequestsPerProcess;
		}
	}

	int
	getMaxPreloaderIdleTime() const {
		if (mMaxPreloaderIdleTime == UNSET_INT_VALUE) {
			return DEFAULT_MAX_PRELOADER_IDLE_TIME;
		} else {
			return mMaxPreloaderIdleTime;
		}
	}

	int
	getMaxRequestQueueSize() const {
		if (mMaxRequestQueueSize == UNSET_INT_VALUE) {
			return DEFAULT_MAX_REQUEST_QUEUE_SIZE;
		} else {
			return mMaxRequestQueueSize;
		}
	}

	int
	getMaxRequests() const {
		if (mMaxRequests == UNSET_INT_VALUE) {
			return 0;
		} else {
			return mMaxRequests;
		}
	}

	int
	getMinInstances() const {
		if (mMinInstances == UNSET_INT_VALUE) {
			return 1;
		} else {
			return mMinInstances;
		}
	}

	int
	getStartTimeout() const {
		if (mStartTimeout == UNSET_INT_VALUE) {
			return DEFAULT_START_TIMEOUT / 1000;
		} else {
			return mStartTimeout;
		}
	}

	StaticString
	getAppEnv() const {
		if (mAppEnv.empty()) {
			return P_STATIC_STRING("production");
		} else {
			return mAppEnv;
		}
	}

	StaticString
	getAppGroupName() const {
		return mAppGroupName;
	}

	StaticString
	getAppRoot() const {
		return mAppRoot;
	}

	StaticString
	getAppType() const {
		return mAppType;
	}

	StaticString
	getGroup() const {
		return mGroup;
	}

	StaticString
	getMeteorAppSettings() const {
		return mMeteorAppSettings;
	}

	StaticString
	getNodejs() const {
		if (mNodejs.empty()) {
			return DEFAULT_NODEJS;
		} else {
			return mNodejs;
		}
	}

	StaticString
	getPython() const {
		if (mPython.empty()) {
			return DEFAULT_PYTHON;
		} else {
			return mPython;
		}
	}

	StaticString
	getRestartDir() const {
		if (mRestartDir.empty()) {
			return P_STATIC_STRING("tmp");
		} else {
			return mRestartDir;
		}
	}

	StaticString
	getRuby() const {
		if (mRuby.empty()) {
			return StaticString();
		} else {
			return mRuby;
		}
	}

	StaticString
	getSpawnMethod() const {
		return mSpawnMethod;
	}

	StaticString
	getStartupFile() const {
		return mStartupFile;
	}

	StaticString
	getStickySessionsCookieName() const {
		if (mStickySessionsCookieName.empty()) {
			return DEFAULT_STICKY_SESSIONS_COOKIE_NAME;
		} else {
			return mStickySessionsCookieName;
		}
	}

	StaticString
	getUser() const {
		return mUser;
	}

	const std::set<std::string> &
	getBaseURIs() const {
		return mBaseURIs;
	}

};
