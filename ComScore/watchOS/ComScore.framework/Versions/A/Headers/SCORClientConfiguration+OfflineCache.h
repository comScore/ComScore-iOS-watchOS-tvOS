//
// Copyright (c) 2017 comScore. All rights reserved.
//

#import "SCORClientConfiguration.h"
#import "SCOROfflineCacheMode.h"

@interface SCORClientConfiguration ()

/**
 *  The endpoint where to dispatch the stored measurements.
 *  Defaults to main comScore offline endpoint.
 */
@property(readonly) NSString *offlineFlushEndpointURL;

/**
 *  Cache policy.
 *  Defaults to SCOROfflineCacheModeEnabled for iOS and SCOROfflineCacheModeDisabled for tvOS.
 */
@property(readonly) SCOROfflineCacheMode offlineCacheMode;

/**
 *  Maximum number of measurements to keep on cache.
 *  2000 by default.
 */
@property(readonly) int cacheMaxMeasurements;

/**
 *  Maximum number of batch files that the SDK can generate.
 *  100 by default.
 */
@property(readonly) int cacheMaxBatchFiles;

/**
 *  Maximum number of cahes flushes allowed in a row.
 *  10 by default.
 */
@property(readonly) int cacheMaxFlushesInARow;

/**
 *  Number of minutes to wait before re-trying a flush.
 *  30 min. by default.
 */
@property(readonly) int cacheMinutesToRetry;

/**
 *  Number of days before the stored measurements expire.
 *  31 days by default.
 */
@property(readonly) int cacheMeasurementExpiry;

/**
 *  The interval in seconds to wait for every measurements flush.
 *  0 by default.
 */
@property(readonly) long cacheFlushingInterval;

@end
