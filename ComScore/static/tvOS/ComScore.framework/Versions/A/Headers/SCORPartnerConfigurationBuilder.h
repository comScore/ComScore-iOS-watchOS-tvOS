//
// Copyright (c) 2016 comScore. All rights reserved.
//
#import <Foundation/Foundation.h>
#import "SCORLiveTransmissionMode.h"
#import "SCOROfflineCacheMode.h"
#import "SCORClientConfigurationBuilder.h"


@class SCORPartnerConfiguration;

/**
 *  Auxilary object used for configuring a <SCORPartnerConfiguration>.
 *  @warning This class is not thread-safe.
 */
@interface SCORPartnerConfigurationBuilder : SCORClientConfigurationBuilder

/**
 *  Partner Id.
 */
@property(copy) NSString *partnerId;

/**
 *  External client ID.
 */
@property(copy) NSString *externalClientId;

/**
 *  Builds a SCORPartnerConfiguration with the current parameters.
 *
 *  @return SCORPartnerConfiguration
 */
- (SCORPartnerConfiguration *)build;

@end
