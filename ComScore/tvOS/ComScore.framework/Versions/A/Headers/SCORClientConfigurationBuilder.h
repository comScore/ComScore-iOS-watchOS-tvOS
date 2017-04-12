//
// Copyright (c) 2016 comScore. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SCORLiveTransmissionMode.h"
#import "SCORConfigurationDelegate.h"
#import "SCORUsagePropertiesAutoUpdateMode.h"

/**
 *  Default builder for client configurations.
 *  @warning This class is not thread-safe.
 */

@interface SCORClientConfigurationBuilder : NSObject

/**
 *  The endpoint where to dispatch the live measurements.
 *  If left unchanged or set to *nil*, the default address will be used.
 */
@property(copy) NSString *liveEndpointURL;

/**
 *  Live transmission mode.
 */
@property(nonatomic) SCORLiveTransmissionMode liveTransmissionMode;

/**
 *  Preconfigured persistent labels.
 */
@property(copy) NSDictionary *persistentLabels;

/**
 *  Labels to send with the auto start event.
 */
@property(copy) NSDictionary *startLabels;

/**
 *  The preferred order for the labels.
 */
@property(copy) NSArray *labelOrder;

/**
 *  Application Name.
 */
@property(copy) NSString *applicationName;

/**
 *  Application Version.
 */
@property(copy) NSString *applicationVersion;

/**
 *  The auto update mode for the usage properties.
 */
@property(nonatomic) SCORUsagePropertiesAutoUpdateMode usagePropertiesAutoUpdateMode;

/**
 *  The auto update interval for the usage properties.
 */
@property(nonatomic) int usagePropertiesAutoUpdateInterval;

/**
 *  Enables or disables the keep alive measurements.
 */
@property(nonatomic) BOOL keepAliveMeasurement;

/**
 *  Enables or disables the secure transmission of measurements.
 */
@property(nonatomic) BOOL secureTransmission;

/**
 *  Enables or disables the tracking of uncaught exceptions.
 */
@property(nonatomic) BOOL uncaughtExceptionTracking;

@end
