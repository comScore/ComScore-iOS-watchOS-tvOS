//
//  Copyright © 2016 comScore. All rights reserved.
//

#import <Foundation/Foundation.h>

@class SCORStreamingConfiguration;

/**
 *  Auxilary object used for configuring a <SCORStreamingConfiguration>.
 *  @warning This class is not thread-safe.
 */
@interface SCORStreamingConfigurationBuilder : NSObject

/**
 *  An array of strings that contains a list of publishers ids to which Streaming Analytics measurements will be sent to.
 */
@property(copy) NSArray *includedPublishers;

/** Enables or disables pauseOnBuffering */
@property(nonatomic) BOOL pauseOnBuffering;

/** Sets the pause on buffering interval. */
@property(nonatomic) long pauseOnBufferingInterval;

/** Sets the keep alive interval. */
@property(nonatomic) long keepAliveInterval;

/** Enables or disables keepAlive */
@property(nonatomic) BOOL keepAliveMeasurement;

/** Configures the intervals for the heartbeat */
@property(copy) NSArray *heartbeatIntervals;

/** Adds or update the given labels. Existent labels that are not present on the provided StringPairArray
 *  won't be modified.
 *
 *  @param labels Collection of labels to be set
 */
@property(copy) NSDictionary *labels;

@property(nonatomic) BOOL heartbeatMeasurement;

/** Configures the playback interval merge tolerance. */
@property(nonatomic) long playbackIntervalMergeTolerance;

/** Sets an 'Asset thresholded playback counter delta' label ns_st_dtpc for counting asset starts with at
    least X seconds of playing time. The value provided will be rounded to the nearest lower multiple of
    1000, i.e., if the value 4300 is provided, value 4000 should be used. Default value is 3000. */
@property(nonatomic) long customStartMinimumPlayback;

@property(nonatomic) BOOL autoResumeStateOnAssetChange;

/**
 *  Builds a SCORStreamingConfiguration with the current parameters.
 *
 *  @return SCORStreamingConfiguration
 */
- (SCORStreamingConfiguration *)build;

@end
