//
// Copyright (c) 2017 comScore. All rights reserved.
//

#import "SCOROfflineCacheMode.h"
#import "SCORConfiguration.h"


@interface SCORConfiguration()

/**
 *  The configured endpoint where to dispatch the stored measurements.
 */
@property(readonly) NSString *offlineFlushEndpointURL;

/**
 *  The configured offline cache mode.
 */
@property SCOROfflineCacheMode offlineCacheMode;

/**
 *  Maximum number of measurements to keep on cache.
 */
@property(readonly) int cacheMaxMeasurements;

/**
 *  Maximum number of batch files that the SDK can generate.
 */
@property(readonly) int cacheMaxBatchFiles;

/**
 *  Maximum number of cahes flushes allowed in a row.
 */
@property(readonly) int cacheMaxFlushesInARow;

/**
 *  Number of minutes to wait before re-trying a flush.
 */
@property(readonly) int cacheMinutesToRetry;

/**
 *  Expiration time for the stored measurements.
 */
@property(readonly) int cacheMeasurementExpiry;

/**
 *  The interval, in seconds, to wait for every measurements flush.
 */
@property(readonly) long cacheFlushingInterval;


@end
