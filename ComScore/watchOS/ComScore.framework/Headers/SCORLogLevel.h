//
// Copyright (c) 2016 comScore. All rights reserved.
//

/**
 *  Logging level, log levels are incremental.
 */
typedef NS_ENUM(NSInteger, SCORLogLevel) {
    /**
     * No logging.
     */
            SCORLogLevelNone = 30000,
    /**
     *  Log errors.
     */
            SCORLogLevelError = 30001,
    /**
     *  Log potential problems.
     */
            SCORLogLevelWarning = 30002,
    /**
     *  Log major changes or actions.
     */
            SCORLogLevelDebug = 30003,
    /**
     *  Log minor changes and actions.
     */
            SCORLogLevelVerbose = 30004
};