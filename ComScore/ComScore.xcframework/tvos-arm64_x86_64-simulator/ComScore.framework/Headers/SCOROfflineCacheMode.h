//
// Copyright (c) 2016 comScore. All rights reserved.
//

/**
 *  Online cache modes.
 */
typedef NS_ENUM(NSInteger, SCOROfflineCacheMode) {
    /**
     *  Offline cache is disabled.
     */
            SCOROfflineCacheModeDisabled = 20104,
    /**
     *  Offline cache is enabled, but it will flush only if connected to a high speed network (Wifi or LTE).
     */
            SCOROfflineCacheModeLan = 20103,
    /**
     *  Offline cache is enabled, but automatic flushing is disabled.
     */
            SCOROfflineCacheModeManualFlush = 20102,
    /**
     *  Offline cache is enabled.
     */
            SCOROfflineCacheModeEnabled = 20101
};