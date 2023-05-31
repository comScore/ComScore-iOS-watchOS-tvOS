//
// Copyright (c) 2016 comScore. All rights reserved.
//
#import <Foundation/Foundation.h>
#import "SCORLiveTransmissionMode.h"
#import "SCOROfflineCacheMode.h"
#import "SCORClientConfigurationBuilder.h"
#import "SCORPublisherUniqueDeviceIdDelegate.h"


@class SCORPublisherConfiguration;

/**
 *  Auxilary object used for configuring a <SCORPublisherConfiguration>.
 *  @warning This class is not thread-safe.
 */
@interface SCORPublisherConfigurationBuilder : SCORClientConfigurationBuilder

/**
 *  Publisher Id.
 */
@property(copy) NSString *publisherId;

@property(nonatomic, weak) id<SCORPublisherUniqueDeviceIdDelegate> publisherUniqueDeviceIdDelegate;

/**
 *  Builds a SCORPublisherConfiguration with the current parameters.
 *
 *  @return SCORPublisherConfiguration
 */
- (SCORPublisherConfiguration *)build;

@end
