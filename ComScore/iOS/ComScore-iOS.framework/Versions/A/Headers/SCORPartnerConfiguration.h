//
// Copyright (c) 2016 comScore. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SCORClientConfiguration.h"

@class SCORPartnerConfigurationBuilder;

/**
 Configuration for a partner. This object is immutable.
 
 For creating a SCORPartnerConfiguration use the <partnerConfigurationWithBuilderBlock:>
 method as follows:
 
 @code
 SCORPartnerConfiguration  partnerConfiguration =
 [SCORPartnerConfiguration partnerConfigurationWithBuilderBlock:^(SCORPartnerConfigurationBuilder  builder) {
 builder.partnerId = @"your_comscore_partner_id";
 builder.externalClientID = @"your_comscore_external_partner_ID";
 }];
 @endcode
 
 @see <SCORAnalytics>
 @see <SCORConfiguration>
 */

@interface SCORPartnerConfiguration : SCORClientConfiguration
@property(readonly, nonatomic, copy) NSString *partnerId;
@property(readonly, nonatomic, copy) NSString *externalClientId;

/**
 *  Creates a new partnerConfiguration using the given <SCORPartnerConfigurationBuilder> block.
 *
 *  @param block You can use this block to change the partnerConfiguration settings
 *
 *  @return SCORPartnerConfiguration
 */
+ (SCORPartnerConfiguration *)partnerConfigurationWithBuilderBlock:(void (^)(SCORPartnerConfigurationBuilder *))block;

/**
 *  Initialize the current instance with the provided <SCORPartnerConfigurationBuilder>.
 *
 *  @param builder SCORPartnerConfigurationBuilder
 */
- (instancetype)initWithBuilder:(SCORPartnerConfigurationBuilder *)builder;

@end