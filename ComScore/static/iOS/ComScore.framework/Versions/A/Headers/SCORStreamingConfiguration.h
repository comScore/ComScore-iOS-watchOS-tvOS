//
//  Copyright © 2016 comScore. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SCORStreamingPublisherConfiguration.h"

@class SCORStreamingConfigurationBuilder;

@interface SCORStreamingConfiguration : NSObject

/**
 *  An array of strings that contains a list of publishers ids to which Streaming Analytics measurements will be sent to.
 */
@property(readonly) NSArray *includedPublishers;

/** Returns if PauseOnBufering is enabled or not. */
@property(readonly) BOOL pauseOnBufferingEnabled;

/** Returns the playback interval merge tolerance. */
@property(readonly) long playbackIntervalMergeTolerance;

/** Returns the pause on buffering interval. */
@property(readonly) long pauseOnBufferingInterval;

/** Returns the keep alive interval. */
@property(readonly) long keepAliveInterval;

@property(readonly) BOOL keepAliveMeasurement;

/** Returns the current heartbeat intervals. */
@property (nonatomic, copy) NSArray *heartbeatIntervals;

@property(readonly) BOOL heartbeatMeasurement;

@property(readonly) BOOL exitEndEventEnabled;

/** Returns the 'Asset thresholded playback counter delta' label ns_st_dtpc for counting asset starts with at
    least X seconds of playing time. */
@property(readonly) long customStartMinimumPlayback;

- (SCORStreamingPublisherConfiguration *)streamingPublisherConfigurationWithPublisherId:(NSString *)publisherId;

/**
 *  Labels to send with every measurement.
 */
- (NSDictionary *)labels;

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

/** Returns the current value of a label.
 
    @param name Label to return
    @return The value of the given label, or *NULL*, if there's no such label set
 */
- (NSString *)labelWithName:(NSString *)name;

/** Returns true if the labels was previously set. */
- (BOOL)containsPersistentLabel:(NSString *)labelName;

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
