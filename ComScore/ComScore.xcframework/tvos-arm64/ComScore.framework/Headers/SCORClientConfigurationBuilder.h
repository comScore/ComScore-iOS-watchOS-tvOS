//
// Copyright (c) 2016 comScore. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SCORLiveTransmissionMode.h"
#import "SCOROfflineCacheMode.h"
#import "SCORUsagePropertiesAutoUpdateMode.h"

/**
 *  Default builder for client configurations.
 *  @warning This class is not thread-safe.
 */

@interface SCORClientConfigurationBuilder : NSObject

/**
 *  Preconfigured persistent labels.
 */
@property(copy) NSDictionary *persistentLabels;

/**
 *  Labels to send with the auto start event.
 */
@property(copy) NSDictionary *startLabels;

/**
 *  Enables or disables the keep alive measurements.
 */
@property(nonatomic) BOOL keepAliveMeasurementEnabled;

/**
 *  Enables or disables the secure transmission of measurements.
 */
@property(nonatomic) BOOL secureTransmissionEnabled;

/**
 *  Enables or disables the caching of measurements that were redirected by the server (With status code 301
 *  or 302).
 */
@property(nonatomic) BOOL httpRedirectCachingEnabled;

@end
