//
//  Copyright © 2016 comScore. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SCORStreamingAnalyticsProtocol.h"
#import "SCORStreamingState.h"
#import "SCORStreamingDelegate.h"

@class SCORStreamingConfiguration;

/**
 This class initializes the interface that the media component will use. It also attaches
 listeners to the media component interface in order to read playback actions. Those actions
 will be notified to the dispatcher.

 This component is the handler of playback session, measurement, dispatcher and media component
 instances. The communication in between components follows an structure of parent-children,
 where the parent is this class.
 */
@interface SCORStreamingAnalytics : NSObject<SCORStreamingAnalyticsProtocol>
@property (readonly)  SCORStreamingState               state;

@property (nonatomic) BOOL                             pauseOnBufferingEnabled;
@property (nonatomic) BOOL                             throttlingEnabled;
@property (nonatomic) NSTimeInterval                   playbackIntervalMergeTolerance;
@property (nonatomic) NSTimeInterval                   throttlingDelay;
@property (nonatomic) NSTimeInterval                   pauseOnBufferingInterval;
@property (nonatomic) NSTimeInterval                   keepAliveInterval;
@property (nonatomic) NSTimeInterval                   loadTimeOffset;
@property (nonatomic, copy) NSArray                    * heartbeatIntervals;

/**
 Designated initializer.
 
 @param streamingConfiguration SCORStreamingConfiguration, required.
 
 @return SCORStreamingAnalytics instance.
 */
- (instancetype)initWithConfiguration:(SCORStreamingConfiguration *)streamingConfiguration;

/**
 *  Resets Streaming to the default values.
 */
- (void)reset;

/**
 *  Creates a new playback session with the given labels.
 *
 *  @param labels   NSDictionary
 */
- (void)createPlaybackSessionWithLabels:(NSDictionary *)labels;

/**
 *  Creates a new playback session.
 */
- (void)createPlaybackSession;

#pragma mark - Delegates

/**
 *  Adds a new listener to be notified of changes of states. Streaming won't keep a strong reference to this
 *  object.
 *
 *  @param listener Must comply with <SCORStreamingDelegate>
 */
- (void)addListener:(id<SCORStreamingDelegate>)listener;

/**
 *  Removes the given listener, the object won't recieve more notifications from Streaming.
 *
 *  @param listener Must comply with <SCORStreamingDelegate>
 */
- (void)removeListener:(id<SCORStreamingDelegate>)listener;



@end

