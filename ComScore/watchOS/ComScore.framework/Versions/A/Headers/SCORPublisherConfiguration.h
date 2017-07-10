//
// Copyright (c) 2016 comScore. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SCORClientConfiguration.h"

@class SCORPublisherConfigurationBuilder;

/**
 Configuration for a publisher. This object is immutable.
 
 For creating a SCORPublisherConfiguration use the <publisherConfigurationWithBuilderBlock:>
 method as follows:
 
 @code
     SCORPublisherConfiguration  publisherConfiguration =
     [SCORPublisherConfiguration publisherConfigurationWithBuilderBlock:^(SCORPublisherConfigurationBuilder  builder) {
         builder.publisherId = @"your_comscore_publisher_id";
         builder.publisherSecret = @"your_comscore_publisher_secret";
     }];
 @endcode
 
 @see <SCORAnalytics>
 @see <SCORConfiguration>
 */

@interface SCORPublisherConfiguration : SCORClientConfiguration
@property(readonly, nonatomic, copy) NSString *publisherId;
@property(readonly, nonatomic, copy) NSString *publisherSecret;
/** Returns the publisher unique device id. This value is set once the Analytics class has been configured. */
@property(readonly) NSString *publisherUniqueDeviceId;

/**
 *  Creates a new publisherConfiguration using the given <SCORPublisherConfigurationBuilder> block.
 *
 *  @param block You can use this block to change the publisherConfiguration settings
 *
 *  @return SCORPublisherConfiguration
 */
+ (SCORPublisherConfiguration *)publisherConfigurationWithBuilderBlock:(void (^)(SCORPublisherConfigurationBuilder *))block;

/**
 *  Initialize the current instance with the provided <SCORPublisherConfigurationBuilder>.
 *
 *  @param builder SCORPartnerConfigurationBuilder
 */
- (instancetype)initWithBuilder:(SCORPublisherConfigurationBuilder *)builder;

@end
