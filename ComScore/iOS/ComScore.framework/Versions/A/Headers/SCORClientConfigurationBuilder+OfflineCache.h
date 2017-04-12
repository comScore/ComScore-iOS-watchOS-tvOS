//
// Copyright (c) 2017 comScore. All rights reserved.
//

#import "SCORClientConfigurationBuilder.h"
#import "SCOROfflineCacheMode.h"

@interface SCORClientConfigurationBuilder()

/**
 *  The endpoint where to dispatch the stored measurements.
 *  If left unchanged or set to *nil*, the default address will be used.
 */
@property(copy) NSString *offlineFlushEndpointURL;

/**
 *  Cache policy.
 */
@property(nonatomic) SCOROfflineCacheMode offlineCacheMode;

/**
 *  Maximum number of measurements to keep on cache.
 */
@property(nonatomic) int cacheMaxMeasurements;

/**
 *  Maximum number of batch files that the SDK can generate.
 */
@property(nonatomic) int cacheMaxBatchFiles;

/**
 *  Maximum number of cahes flushes allowed in a row.
 */
@property(nonatomic) int cacheMaxFlushesInARow;

/**
 *  Number of minutes to wait before re-trying a flush.
 */
@property(nonatomic) int cacheMinutesToRetry;

/**
 *  Number of days before the stored measurements expire.
 */
@property(nonatomic) int cacheMeasurementExpiry;

/**
 *  The interval, in seconds, to wait for every measurements flush.
 */
@property(nonatomic) int cacheFlushingInterval;

@end
