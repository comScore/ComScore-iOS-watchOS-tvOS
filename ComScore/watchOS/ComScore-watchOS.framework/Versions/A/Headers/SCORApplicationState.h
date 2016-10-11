//
// Copyright 2016 comScore, Inc. All right reserved.
//

/**
 *  Possible Application states.
 */
typedef NS_ENUM(NSInteger, SCORApplicationState) {
    /**
     *  Application is in foreground.
     */
            SCORApplicationStateForeground,
    /**
     *  Application is in background but there's an active ux.
     */
            SCORApplicationStateBackgroundUxActive,
    /**
     *  Application is inactive.
     */
            SCORApplicationStateInactive
};