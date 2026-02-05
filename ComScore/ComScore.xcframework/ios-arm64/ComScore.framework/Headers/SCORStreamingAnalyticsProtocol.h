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

/**
 * Starts from the position
 *
 *  @param position - Start position
 */
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
 *
 *  @param newDVRWindowLength - New DVR window length
 */
- (void) setDVRWindowLength:(NSInteger)newDVRWindowLength;

/**
 * Sets the DVR window offset.
 *
 *  @param newDVRWindowOffset - New DVR window offset
 */
- (void) startFromDvrWindowOffset:(NSInteger)newDVRWindowOffset;

/**
 * Sets the Media player name
 *
 *  @param mediaPlayerName - Media player name
 */
- (void)setMediaPlayerName:(NSString *)mediaPlayerName;

/**
 * Sets the Media player version
 *
 *  @param mediaPlayerVersion - Media player version
 */
- (void)setMediaPlayerVersion:(NSString *)mediaPlayerVersion;

/**
 * Sets the Implementation ID
 *
 *  @param implementationId - Implementation ID
 */
- (void)setImplementationId:(NSString *)implementationId;

/**
 * Sets the Project ID
 *
 *  @param projectId - Project ID
 */
- (void)setProjectId:(NSString *)projectId;

/**
 * Sets the asset metadata
 *
 * @param metadata The metadata instance
 */
- (void)setMetadata:(SCORStreamingAssetMetadata *) metadata;

- (NSString *) playbackSessionId;

/**  Sets the segment number of the current asset.
 *
 * @param segmentNumber - Segment number
 */
- (void)startFromSegment:(NSInteger) segmentNumber;

/**  Indicates the entire playback session is looping. */
- (void)loopPlaybackSession;

- (SCORStreamingConfiguration*)configuration;

- (SCORStreamingExtendedAnalytics*)extendedAnalytics;

/**
 * Sets whether the child-directed playback session flag should be enabled.
 * This change takes effect on the next transition to IDLE state.
 * If called while not in IDLE state, the change will be queued and applied
 * when the state machine next enters IDLE. Multiple calls while not in IDLE
 * will result in only the last call taking effect.
 *
 * @param enabled YES to enable child-directed mode, NO to disable
 */
- (void)setChildDirectedPlaybackSessionEnabled:(BOOL)enabled;

/**
 * Returns whether the CURRENT playback session is marked as child-directed.
 * This returns the actual value the playback session sends in measurements,
 * not any pending configured value.
 *
 * @return YES if current playback session is child-directed, NO otherwise
 */
- (BOOL)isChildDirectedPlaybackSessionEnabled;

@end
