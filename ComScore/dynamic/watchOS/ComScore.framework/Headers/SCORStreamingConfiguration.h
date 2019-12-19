//
//  Copyright © 2016 comScore. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SCORStreamingPublisherConfiguration.h"

@class SCORStreamingConfigurationBuilder;

@interface SCORStreamingConfiguration : NSObject

- (SCORStreamingPublisherConfiguration *)streamingPublisherConfigurationWithPublisherId:(NSString *)publisherId;

/** Sets a label. If the label already exists it will be overridden with the new value.
 
    @param name  Label to set
    @param value Value to give
 */
- (void)setLabelWithName:(NSString *)name value:(NSString *)value;

/** Adds or update the given labels. Existent labels that are not present on the provided StringPairArray
    won't be modified.
 
    @param labels Collection of labels to be set
 */
- (void)addLabels:(NSDictionary *)labels;

/** Removes the label with the given name. If the label doesn't exist this method
    has no effect, but will incur in a computation overhead.

    @param name Label to remove
 */
- (void)removeLabelWithName:(NSString *)name;

/** Removes all stored labels */
- (void)removeAllLabels;

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
