//
// Copyright (c) 2016 comScore. All rights reserved.
//

/**
 *  Usage properties auto update modes.
 */
typedef NS_ENUM(NSInteger, SCORUsagePropertiesAutoUpdateMode) {
    /**
     *  Usage properties will not auto update.
     */
            SCORUsagePropertiesAutoUpdateModeDisabled = 20502,
    /**
     *  Usage properties will auto update in foreground and background.
     */
            SCORUsagePropertiesAutoUpdateModeForegroundAndBackground = 20501,
    /**
     *  Usage propertoes will auto update only while in foreground.
     */
            SCORUsagePropertiesAutoUpdateModeForegroundOnly = 20500
};