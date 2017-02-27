//
//  Copyright © 2016 comScore. All rights reserved.
//

#import <Foundation/Foundation.h>

@class SCORStreamingConfigurationBuilder;

@interface SCORStreamingConfiguration : NSObject

/**
 *  An array of strings that contains a list of publishers ids to which Streaming Analytics measurements will be sent to.
 */
@property(readonly) NSArray *restrictedPublishersList;

/** True if the System Clock Jump Detection is enabled. */
@property(readonly) BOOL systemClockJumpDetection;

/**
 *  Creates a new streamingConfiguration using the given <SCORStreamingConfigurationBuilder> block.
 *
 *  @param block You can use this block to change the streamingConfiguration settings
 *
 *  @return SCORStreamingConfiguration
 */
+ (SCORStreamingConfiguration *)streamingConfigurationWithBuilderBlock:(void (^)(SCORStreamingConfigurationBuilder *))block;

/**
 *  Initialize the current instance with the provided <SCORStreamingConfigurationBuilder>.
 *
 *  @param builder SCORStreamingConfigurationBuilder
 */
- (instancetype)initWithBuilder:(SCORStreamingConfigurationBuilder *)builder;

@end
