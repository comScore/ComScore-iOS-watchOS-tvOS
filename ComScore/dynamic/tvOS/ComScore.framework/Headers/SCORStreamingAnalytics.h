//
//  Copyright © 2016 comScore. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SCORStreamingAnalyticsProtocol.h"
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

/**
 Designated initializer.
 
 @param streamingConfiguration SCORStreamingConfiguration, required.
 
 @return SCORStreamingAnalytics instance.
 */
- (instancetype)initWithConfiguration:(SCORStreamingConfiguration *)streamingConfiguration;

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

