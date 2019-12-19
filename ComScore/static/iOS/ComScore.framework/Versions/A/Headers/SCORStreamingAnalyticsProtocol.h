//
//  Copyright © 2016 comScore. All rights reserved.
//

#import "SCORStreamingAssetMetadata.h"
#import "SCORStreamingConfiguration.h"
#import "SCORStreamingExtendedAnalytics.h"

/**
 Methods provided by the public API of Streaming Analytics and its plugins.
 */
@protocol SCORStreamingAnalyticsProtocol <NSObject>

#pragma mark - Events

- (void)startFromPosition:(long) position;

/**
 *  Notifies of a new Play event.
 *
 */
- (void)notifyPlay;

/**
 *  Notifies of a new Pause event.
 *
 */
- (void)notifyPause;

/**
 *  Notifies of a new End event.
 *
 */
- (void)notifyEnd;

/**
 *  Notifies of a new Buffer Start event.
 *
 */
- (void)notifyBufferStart;

/**
 *  Notifies of a new Buffer Stop event.
 *
 */
- (void)notifyBufferStop;

/**
 *  Notifies of a new Seek Start event.
 *
 */
- (void)notifySeekStart;

/**
 *  Notifies of a new Change of Playback Rate event with the given new rate (in percentage, with 100% being normal speed).
 *
 *  @param newRate   The new playback rate in percentage (Ex: Normal speed: 1.00, half-speed: 0.50, double-speed: 2.00)
 *
 */
- (void)notifyChangePlaybackRate:(float)newRate;

/**
 * Sets the DVR window length.
 */
- (void) setDVRWindowLength:(NSInteger)newDVRWindowLength;

/**
 * Sets the DVR window offset.
 */
- (void) startFromDvrWindowOffset:(NSInteger)newDVRWindowOffset;

- (void)setMediaPlayerName:(NSString *)mediaPlayerName;

- (void)setMediaPlayerVersion:(NSString *)mediaPlayerVersion;

- (void)setImplementationId:(NSString *)implementationId;

- (void)setProjectId:(NSString *)projectId;

/**
 * Sets the asset
 * @param assetMetadata the AssetMetadata instance with the new clip metadata.
 */
- (void)setMetadata:(SCORStreamingAssetMetadata *) metadata;

- (NSString *) playbackSessionId;

/**  Sets the segment number of the current asset. */
- (void)startFromSegment:(NSInteger) segmentNumber;

/**  Indicates the entire playback session is looping. */
- (void)loopPlaybackSession;

- (SCORStreamingConfiguration*)configuration;

- (SCORStreamingExtendedAnalytics*)extendedAnalytics;

@end
