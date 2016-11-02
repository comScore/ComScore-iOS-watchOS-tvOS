//
//  Copyright © 2016 comScore. All rights reserved.
//

@class SCORStreamingPlaybackSession;

/**
 Methods provided by the public API of Streaming Analytics and its plugins.
 */
@protocol SCORStreamingAnalyticsProtocol <NSObject>

@property (readonly)  NSDictionary                     * labels;
@property (readonly)  SCORStreamingPlaybackSession     * playbackSession;

#pragma mark - Events

/**
 *  Notifies of a new Play event with the given position of playback (in milliseconds) and associated labels.
 *
 *  @param position  (OPTIONAL) Playback position, if you don't want to specify a position set the position to -1
 *  @param labels    (OPTIONAL) NSDictionary of labels associated with the current event
 *
 *  @return YES if it was possible to notify the event
 */
- (BOOL)notifyPlayWithPosition:(long)position labels:(NSDictionary *)labels;

/**
 *  Notifies of a new Play event with the given position of playback (in milliseconds).
 *
 *  @param position  (OPTIONAL) Playback position, if you don't want to specify a position set the position to -1
 *
 *  @return YES if it was possible to notify the event
 */
- (BOOL)notifyPlayWithPosition:(long)position;

/**
 *  Notifies of a new Play event with the associated labels.
 *
 *  @param labels    (OPTIONAL) NSDictionary of labels associated with the current event
 *
 *  @return YES if it was possible to notify the event
 */
- (BOOL)notifyPlayWithLabels:(NSDictionary *)labels;

/**
 *  Notifies of a new Play event.
 *
 *  @return YES if it was possible to notify the event
 */
- (BOOL)notifyPlay;

/**
 *  Notifies of a new Pause event with the given position of playback (in milliseconds) and associated labels.
 *
 *  @param position  (OPTIONAL) Playback position, if you don't want to specify a position set the position to -1
 *  @param labels    (OPTIONAL) NSDictionary of labels associated with the current event
 *
 *  @return YES if it was possible to notify the event
 */
- (BOOL)notifyPauseWithPosition:(long)position labels:(NSDictionary *)labels;

/**
 *  Notifies of a new Pause event with the given position of playback (in milliseconds).
 *
 *  @param position  (OPTIONAL) Playback position, if you don't want to specify a position set the position to -1
 *
 *  @return YES if it was possible to notify the event
 */
- (BOOL)notifyPauseWithPosition:(long)position;

/**
 *  Notifies of a new Pause event with the associated labels.
 *
 *  @param labels    (OPTIONAL) NSDictionary of labels associated with the current event
 *
 *  @return YES if it was possible to notify the event
 */
- (BOOL)notifyPauseWithLabels:(NSDictionary *)labels;

/**
 *  Notifies of a new Pause event.
 *
 *  @return YES if it was possible to notify the event
 */
- (BOOL)notifyPause;

/**
 *  Notifies of a new End event with the given position of playback (in milliseconds) and associated labels.
 *
 *  @param position  (OPTIONAL) Playback position, if you don't want to specify a position set the position to -1
 *  @param labels    (OPTIONAL) NSDictionary of labels associated with the current event
 *
 *  @return YES if it was possible to notify the event
 */
- (BOOL)notifyEndWithPosition:(long)position labels:(NSDictionary *)labels;

/**
 *  Notifies of a new End event with the given position of playback (in milliseconds).
 *
 *  @param position  (OPTIONAL) Playback position, if you don't want to specify a position set the position to -1
 *
 *  @return YES if it was possible to notify the event
 */
- (BOOL)notifyEndWithPosition:(long)position;

/**
 *  Notifies of a new End event with the associated labels.
 *
 *  @param labels    (OPTIONAL) NSDictionary of labels associated with the current event
 *
 *  @return YES if it was possible to notify the event
 */
- (BOOL)notifyEndWithLabels:(NSDictionary *)labels;

/**
 *  Notifies of a new End event.
 *
 *  @return YES if it was possible to notify the event
 */
- (BOOL)notifyEnd;

/**
 *  Notifies of a new Buffer Start event with the given position of playback (in milliseconds) and associated labels.
 *
 *  @param position  (OPTIONAL) Playback position, if you don't want to specify a position set the position to -1
 *  @param labels    (OPTIONAL) NSDictionary of labels associated with the current event
 *
 *  @return YES if it was possible to notify the event
 */
- (BOOL)notifyBufferStartWithPosition:(long)position labels:(NSDictionary *)labels;

/**
 *  Notifies of a new Buffer Start event with the given position of playback (in milliseconds).
 *
 *  @param position  (OPTIONAL) Playback position, if you don't want to specify a position set the position to -1
 *
 *  @return YES if it was possible to notify the event
 */
- (BOOL)notifyBufferStartWithPosition:(long)position;

/**
 *  Notifies of a new Buffer Start event with the associated labels.
 *
 *  @param labels    (OPTIONAL) NSDictionary of labels associated with the current event
 *
 *  @return YES if it was possible to notify the event
 */
- (BOOL)notifyBufferStartWithLabels:(NSDictionary *)labels;

/**
 *  Notifies of a new Buffer Start event.
 *
 *  @return YES if it was possible to notify the event
 */
- (BOOL)notifyBufferStart;

/**
 *  Notifies of a new Buffer End event with the given position of playback (in milliseconds) and associated labels.
 *
 *  @param position  (OPTIONAL) Playback position, if you don't want to specify a position set the position to -1
 *  @param labels    (OPTIONAL) NSDictionary of labels associated with the current event
 *
 *  @return YES if it was possible to notify the event
 */
- (BOOL)notifyBufferEndWithPosition:(long)position labels:(NSDictionary *)labels;

/**
 *  Notifies of a new Buffer End event with the given position of playback (in milliseconds).
 *
 *  @param position  (OPTIONAL) Playback position, if you don't want to specify a position set the position to -1
 *
 *  @return YES if it was possible to notify the event
 */
- (BOOL)notifyBufferEndWithPosition:(long)position;

/**
 *  Notifies of a new Buffer End event with the associated labels.
 *
 *  @param labels    (OPTIONAL) NSDictionary of labels associated with the current event
 *
 *  @return YES if it was possible to notify the event
 */
- (BOOL)notifyBufferEndWithLabels:(NSDictionary *)labels;

/**
 *  Notifies of a new Buffer End event.
 *
 *  @return YES if it was possible to notify the event
 */
- (BOOL)notifyBufferEnd;

/**
 *  Notifies of a new Load event with the given position of playback (in milliseconds) and associated labels.
 *
 *  @param position  (OPTIONAL) Playback position, if you don't want to specify a position set the position to -1
 *  @param labels    (OPTIONAL) NSDictionary of labels associated with the current event
 *
 *  @return YES if it was possible to notify the event
 */
- (BOOL)notifyLoadWithPosition:(long)position labels:(NSDictionary *)labels;

/**
 *  Notifies of a new Load event with the given position of playback (in milliseconds).
 *
 *  @param position  (OPTIONAL) Playback position, if you don't want to specify a position set the position to -1
 *
 *  @return YES if it was possible to notify the event
 */
- (BOOL)notifyLoadWithPosition:(long)position;

/**
 *  Notifies of a new Load event with the associated labels.
 *
 *  @param labels    (OPTIONAL) NSDictionary of labels associated with the current event
 *
 *  @return YES if it was possible to notify the event
 */
- (BOOL)notifyLoadWithLabels:(NSDictionary *)labels;

/**
 *  Notifies of a new Load event.
 *
 *  @return YES if it was possible to notify the event
 */
- (BOOL)notifyLoad;

/**
 *  Notifies of a new Engage event with the given position of playback (in milliseconds) and associated labels.
 *
 *  @param position  (OPTIONAL) Playback position, if you don't want to specify a position set the position to -1
 *  @param labels    (OPTIONAL) NSDictionary of labels associated with the current event
 *
 *  @return YES if it was possible to notify the event
 */
- (BOOL)notifyEngageWithPosition:(long)position labels:(NSDictionary *)labels;

/**
 *  Notifies of a new Engage event with the given position of playback (in milliseconds).
 *
 *  @param position  (OPTIONAL) Playback position, if you don't want to specify a position set the position to -1
 *
 *  @return YES if it was possible to notify the event
 */
- (BOOL)notifyEngageWithPosition:(long)position;

/**
 *  Notifies of a new Engage event with the associated labels.
 *
 *  @param labels    (OPTIONAL) NSDictionary of labels associated with the current event
 *
 *  @return YES if it was possible to notify the event
 */
- (BOOL)notifyEngageWithLabels:(NSDictionary *)labels;

/**
 *  Notifies of a new Engage event.
 *
 *  @return YES if it was possible to notify the event
 */
- (BOOL)notifyEngage;

/**
 *  Notifies of a new Seek Start event with the given position of playback (in milliseconds) and associated labels.
 *
 *  @param position  (OPTIONAL) Playback position, if you don't want to specify a position set the position to -1
 *  @param labels    (OPTIONAL) NSDictionary of labels associated with the current event
 *
 *  @return YES if it was possible to notify the event
 */
- (BOOL)notifySeekStartWithPosition:(long)position labels:(NSDictionary *)labels;

/**
 *  Notifies of a new Seek Start event with the given position of playback (in milliseconds).
 *
 *  @param position  (OPTIONAL) Playback position, if you don't want to specify a position set the position to -1
 *
 *  @return YES if it was possible to notify the event
 */
- (BOOL)notifySeekStartWithPosition:(long)position;

/**
 *  Notifies of a new Seek Start event with the associated labels.
 *
 *  @param labels    (OPTIONAL) NSDictionary of labels associated with the current event
 *
 *  @return YES if it was possible to notify the event
 */
- (BOOL)notifySeekStartWithLabels:(NSDictionary *)labels;

/**
 *  Notifies of a new Seek Start event.
 *
 *  @return YES if it was possible to notify the event
 */
- (BOOL)notifySeekStart;

/**
 *  Notifies of a new Skip Ad event with the given position of playback (in milliseconds) and associated labels.
 *
 *  @param position  (OPTIONAL) Playback position, if you don't want to specify a position set the position to -1
 *  @param labels    (OPTIONAL) NSDictionary of labels associated with the current event
 *
 *  @return YES if it was possible to notify the event
 */
- (BOOL)notifySkipAdWithPosition:(long)position labels:(NSDictionary *)labels;

/**
 *  Notifies of a new Skip Ad event with the given position of playback (in milliseconds).
 *
 *  @param position  (OPTIONAL) Playback position, if you don't want to specify a position set the position to -1
 *
 *  @return YES if it was possible to notify the event
 */
- (BOOL)notifySkipAdWithPosition:(long)position;

/**
 *  Notifies of a new Skip Ad event with the associated labels.
 *
 *  @param labels    (OPTIONAL) NSDictionary of labels associated with the current event
 *
 *  @return YES if it was possible to notify the event
 */
- (BOOL)notifySkipAdWithLabels:(NSDictionary *)labels;

/**
 *  Notifies of a new Skip Ad event.
 *
 *  @return YES if it was possible to notify the event
 */
- (BOOL)notifySkipAd;

/**
 *  Notifies of a new Call to Action event with the given position of playback (in milliseconds) and associated labels.
 *
 *  @param position  (OPTIONAL) Playback position, if you don't want to specify a position set the position to -1
 *  @param labels    (OPTIONAL) NSDictionary of labels associated with the current event
 *
 *  @return YES if it was possible to notify the event
 */
- (BOOL)notifyCallToActionWithPosition:(long)position labels:(NSDictionary *)labels;

/**
 *  Notifies of a new Call to Action event with the given position of playback (in milliseconds).
 *
 *  @param position  (OPTIONAL) Playback position, if you don't want to specify a position set the position to -1
 *
 *  @return YES if it was possible to notify the event
 */
- (BOOL)notifyCallToActionWithPosition:(long)position;

/**
 *  Notifies of a new Call to Action event with the associated labels.
 *
 *  @param labels    (OPTIONAL) NSDictionary of labels associated with the current event
 *
 *  @return YES if it was possible to notify the event
 */
- (BOOL)notifyCallToActionWithLabels:(NSDictionary *)labels;

/**
 *  Notifies of a new Call to Action event.
 *
 *  @return YES if it was possible to notify the event
 */
- (BOOL)notifyCallToAction;

/**
 *  Notifies of a new Error event with the given position of playback (in milliseconds) and associated labels.
 *
 *  @param position  (OPTIONAL) Playback position, if you don't want to specify a position set the position to -1
 *  @param labels    (OPTIONAL) NSDictionary of labels associated with the current event
 *
 *  @return YES if it was possible to notify the event
 */
- (BOOL)notifyErrorWithPosition:(long)position labels:(NSDictionary *)labels;

/**
 *  Notifies of a new Error event with the given position of playback (in milliseconds).
 *
 *  @param position  (OPTIONAL) Playback position, if you don't want to specify a position set the position to -1
 *
 *  @return YES if it was possible to notify the event
 */
- (BOOL)notifyErrorWithPosition:(long)position;

/**
 *  Notifies of a new Error event with the associated labels.
 *
 *  @param labels    (OPTIONAL) NSDictionary of labels associated with the current event
 *
 *  @return YES if it was possible to notify the event
 */
- (BOOL)notifyErrorWithLabels:(NSDictionary *)labels;

/**
 *  Notifies of a new Error event.
 *
 *  @return YES if it was possible to notify the event
 */
- (BOOL)notifyError;

/**
 *  Notifies of a new Transfer Playback event with the given position of playback (in milliseconds) and associated labels.
 *
 *  @param position  (OPTIONAL) Playback position, if you don't want to specify a position set the position to -1
 *  @param labels    (OPTIONAL) NSDictionary of labels associated with the current event
 *
 *  @return YES if it was possible to notify the event
 */
- (BOOL)notifyTransferPlaybackWithPosition:(long)position labels:(NSDictionary *)labels;

/**
 *  Notifies of a new Transfer Playback event with the given position of playback (in milliseconds).
 *
 *  @param position  (OPTIONAL) Playback position, if you don't want to specify a position set the position to -1
 *
 *  @return YES if it was possible to notify the event
 */
- (BOOL)notifyTransferPlaybackWithPosition:(long)position;

/**
 *  Notifies of a new Transfer Playback event with the associated labels.
 *
 *  @param labels    (OPTIONAL) NSDictionary of labels associated with the current event
 *
 *  @return YES if it was possible to notify the event
 */
- (BOOL)notifyTransferPlaybackWithLabels:(NSDictionary *)labels;

/**
 *  Notifies of a new Transfer Playback event.
 *
 *  @return YES if it was possible to notify the event
 */
- (BOOL)notifyTransferPlayback;

/**
 *  Notifies of a new DRM Fail event with the given position of playback (in milliseconds) and associated labels.
 *
 *  @param position  (OPTIONAL) Playback position, if you don't want to specify a position set the position to -1
 *  @param labels    (OPTIONAL) NSDictionary of labels associated with the current event
 *
 *  @return YES if it was possible to notify the event
 */
- (BOOL)notifyDRMFailWithPosition:(long)position labels:(NSDictionary *)labels;

/**
 *  Notifies of a new DRM Fail event with the given position of playback (in milliseconds).
 *
 *  @param position  (OPTIONAL) Playback position, if you don't want to specify a position set the position to -1
 *
 *  @return YES if it was possible to notify the event
 */
- (BOOL)notifyDRMFailWithPosition:(long)position;

/**
 *  Notifies of a new DRM Fail event with the associated labels.
 *
 *  @param labels    (OPTIONAL) NSDictionary of labels associated with the current event
 *
 *  @return YES if it was possible to notify the event
 */
- (BOOL)notifyDRMFailWithLabels:(NSDictionary *)labels;

/**
 *  Notifies of a new DRM Fail event.
 *
 *  @return YES if it was possible to notify the event
 */
- (BOOL)notifyDRMFail;


/**
 *  Notifies of a new DRM Approve event with the given position of playback (in milliseconds) and associated labels.
 *
 *  @param position  (OPTIONAL) Playback position, if you don't want to specify a position set the position to -1
 *  @param labels    (OPTIONAL) NSDictionary of labels associated with the current event
 *
 *  @return YES if it was possible to notify the event
 */
- (BOOL)notifyDRMApproveWithPosition:(long)position labels:(NSDictionary *)labels;

/**
 *  Notifies of a new DRM Approve event with the given position of playback (in milliseconds).
 *
 *  @param position  (OPTIONAL) Playback position, if you don't want to specify a position set the position to -1
 *
 *  @return YES if it was possible to notify the event
 */
- (BOOL)notifyDRMApproveWithPosition:(long)position;

/**
 *  Notifies of a new DRM Approve event with the associated labels.
 *
 *  @param labels    (OPTIONAL) NSDictionary of labels associated with the current event
 *
 *  @return YES if it was possible to notify the event
 */
- (BOOL)notifyDRMApproveWithLabels:(NSDictionary *)labels;

/**
 *  Notifies of a new DRM Approve event.
 *
 *  @return YES if it was possible to notify the event
 */
- (BOOL)notifyDRMApprove;


/**
 *  Notifies of a new DRM Deny event with the given position of playback (in milliseconds) and associated labels.
 *
 *  @param position  (OPTIONAL) Playback position, if you don't want to specify a position set the position to -1
 *  @param labels    (OPTIONAL) NSDictionary of labels associated with the current event
 *
 *  @return YES if it was possible to notify the event
 */
- (BOOL)notifyDRMDenyWithPosition:(long)position labels:(NSDictionary *)labels;

/**
 *  Notifies of a new DRM Deny event with the given position of playback (in milliseconds).
 *
 *  @param position  (OPTIONAL) Playback position, if you don't want to specify a position set the position to -1
 *
 *  @return YES if it was possible to notify the event
 */
- (BOOL)notifyDRMDenyWithPosition:(long)position;

/**
 *  Notifies of a new DRM Deny event with the associated labels.
 *
 *  @param labels    (OPTIONAL) NSDictionary of labels associated with the current event
 *
 *  @return YES if it was possible to notify the event
 */
- (BOOL)notifyDRMDenyWithLabels:(NSDictionary *)labels;

/**
 *  Notifies of a new DRM Deny event.
 *
 *  @return YES if it was possible to notify the event
 */
- (BOOL)notifyDRMDeny;

/**
 *  Notifies of a new Change of Bitrate event with the given new rate (in bps), position of playback (in milliseconds) and associated labels.
 *
 *  @param newBitrate   The new bitrate in bps
 *  @param position  (OPTIONAL) Playback position, if you don't want to specify a position set the position to -1
 *  @param labels    (OPTIONAL) NSDictionary of labels associated with the current event
 *
 *  @return YES if it was possible to notify the event
 */
- (BOOL)notifyChangeBitrate:(NSInteger)newBitrate position:(long)position labels:(NSDictionary *)labels;

/**
 *  Notifies of a new Change Bitrate event with the given position of playback (in milliseconds).
 *
 *  @param newBitrate   The new bitrate in bps
 *  @param position  (OPTIONAL) Playback position, if you don't want to specify a position set the position to -1
 *
 *  @return YES if it was possible to notify the event
 */
- (BOOL)notifyChangeBitrate:(NSInteger)newBitrate position:(long)position;

/**
 *  Notifies of a new Change Bitrate event with the associated labels.
 *
 *  @param newBitrate   The new bitrate in bps
 *  @param labels    (OPTIONAL) NSDictionary of labels associated with the current event
 *
 *  @return YES if it was possible to notify the event
 */
- (BOOL)notifyChangeBitrate:(NSInteger)newBitrate labels:(NSDictionary *)labels;

/**
 *  Notifies of a new Change of Bitrate event with the given new rate (in bps).
 *
 *  @param newRate   The new bitrate in bps
 *
 *  @return YES if it was possible to notify the event
 */
- (BOOL)notifyChangeBitrate:(NSInteger)newBitrate;

/**
 *  Notifies of a new Change of Playback Rate event with the given new rate (in percentage, with 100% being normal speed), position of playback (in milliseconds) and associated labels.
 *
 *  @param newPlaybackRate   The new playback rate in percentage (Ex: Normal speed: 100, half-speed: 50, double-speed: 200)
 *  @param position  (OPTIONAL) Playback position, if you don't want to specify a position set the position to -1
 *  @param labels    (OPTIONAL) NSDictionary of labels associated with the current event
 *
 *  @return YES if it was possible to notify the event
 */
- (BOOL)notifyChangePlaybackRate:(NSInteger)newPlaybackRate withPosition:(long)position labels:(NSDictionary *)labels;

/**
 *  Notifies of a new Change Playback Rate event with the given position of playback (in milliseconds).
 *
 *  @param newPlaybackRate   The new playback rate in percentage (Ex: Normal speed: 100, half-speed: 50, double-speed: 200)
 *  @param position  (OPTIONAL) Playback position, if you don't want to specify a position set the position to -1
 *
 *  @return YES if it was possible to notify the event
 */
- (BOOL)notifyChangePlaybackRate:(NSInteger)newPlaybackRate position:(long)position;

/**
 *  Notifies of a new Change Playback Rate event with the associated labels.
 *
 *  @param newPlaybackRate   The new playback rate in percentage (Ex: Normal speed: 100, half-speed: 50, double-speed: 200)
 *  @param labels    (OPTIONAL) NSDictionary of labels associated with the current event
 *
 *  @return YES if it was possible to notify the event
 */
- (BOOL)notifyChangePlaybackRate:(NSInteger)newPlaybackRate labels:(NSDictionary *)labels;

/**
 *  Notifies of a new Change of Playback Rate event with the given new rate (in percentage, with 100% being normal speed).
 *
 *  @param newRate   The new playback rate in percentage (Ex: Normal speed: 100, half-speed: 50, double-speed: 200)
 *
 *  @return YES if it was possible to notify the event
 */
- (BOOL)notifyChangePlaybackRate:(NSInteger)newRate;

/**
 *  Notifies of a new Change Volume event with the given new rate (in percentage, with 100% being max. volume), position of playback (in milliseconds) and associated labels.
 *
 *  @param newVolume The new volume in percentage 0-100
 *  @param position  (OPTIONAL) Playback position, if you don't want to specify a position set the position to -1
 *  @param labels    (OPTIONAL) NSDictionary of labels associated with the current event
 *
 *  @return YES if it was possible to notify the event
 */
- (BOOL)notifyChangeVolume:(NSInteger)newVolume withPosition:(long)position labels:(NSDictionary *)labels;

/**
 *  Notifies of a new Change Volume event with the given position of playback (in milliseconds).
 *
 *  @param newVolume The new volume in percentage 0-100
 *  @param position  (OPTIONAL) Playback position, if you don't want to specify a position set the position to -1
 *
 *  @return YES if it was possible to notify the event
 */
- (BOOL)notifyChangeVolume:(NSInteger)newVolume position:(long)position;

/**
 *  Notifies of a new Change Volume event with the associated labels.
 *
 *  @param newVolume The new volume in percentage 0-100
 *  @param labels    (OPTIONAL) NSDictionary of labels associated with the current event
 *
 *  @return YES if it was possible to notify the event
 */
- (BOOL)notifyChangeVolume:(NSInteger)newVolume labels:(NSDictionary *)labels;

/**
 *  Notifies of a new Change Volume event with the given new rate (in percentage, with 100% being max. volume).
 *
 *  @param newVolume The new volume in percentage 0-100
 *
 *  @return YES if it was possible to notify the event
 */
- (BOOL)notifyChangeVolume:(NSInteger)newVolume;

/**
 *  Notifies of a new Change Window State event with the given new state, position of playback (in milliseconds) and associated labels.
 *
 *  @param newState One of these: "full", "norm", "min" or " max"
 *  @param position Playback position
 *  @param labels   NSDictionary of labels associated with the current event
 *
 *  @return YES if it was possible to notify the event
 */
- (BOOL)notifyChangeWindowState:(NSString *)newState withPosition:(long)position labels:(NSDictionary *)labels;

/**
 *  Notifies of a new Change Window State event with the given position of playback (in milliseconds).
 *
 *  @param newState One of these: "full", "norm", "min" or " max"
 *  @param position  (OPTIONAL) Playback position, if you don't want to specify a position set the position to -1
 *
 *  @return YES if it was possible to notify the event
 */
- (BOOL)notifyChangeWindowState:(NSString *)newState position:(long)position;

/**
 *  Notifies of a new Change Window State event with the associated labels.
 *
 *  @param newState One of these: "full", "norm", "min" or " max"
 *  @param labels    (OPTIONAL) NSDictionary of labels associated with the current event
 *
 *  @return YES if it was possible to notify the event
 */
- (BOOL)notifyChangeWindowState:(NSString *)newState labels:(NSDictionary *)labels;

/**
 *  Notifies of a new Change Window State event with the given new state.
 *
 *  @param newState One of these: "full", "norm", "min" or " max"
 *
 *  @return YES if it was possible to notify the event
 */
- (BOOL)notifyChangeWindowState:(NSString *)newState;

/**
 *  Notifies of a new Change Audio Track event with the given new audio, position of playback (in milliseconds) and associated labels.
 *
 *  @param newAudioTrack  New audio track/name/language
 *  @param position  (OPTIONAL) Playback position, if you don't want to specify a position set the position to -1
 *  @param labels    (OPTIONAL) NSDictionary of labels associated with the current event
 *
 *  @return YES if it was possible to notify the event
 */
- (BOOL)notifyChangeAudioTrack:(NSString *)newAudioTrack withPosition:(long)position labels:(NSDictionary *)labels;

/**
 *  Notifies of a new Change Audio Track event with the given position of playback (in milliseconds).
 *
 *  @param newAudioTrack  New audio track/name/language
 *  @param position  (OPTIONAL) Playback position, if you don't want to specify a position set the position to -1
 *
 *  @return YES if it was possible to notify the event
 */
- (BOOL)notifyChangeAudioTrack:(NSString *)newAudioTrack position:(long)position;

/**
 *  Notifies of a new Change Audio Track event with the associated labels.
 *
 *  @param newAudioTrack  New audio track/name/language
 *  @param labels    (OPTIONAL) NSDictionary of labels associated with the current event
 *
 *  @return YES if it was possible to notify the event
 */
- (BOOL)notifyChangeAudioTrack:(NSString *)newAudioTrack labels:(NSDictionary *)labels;

/**
 *  Notifies of a new Change Audio Track event with the given new audio.
 *
 *  @param newAudioTrack  New audio track/name/language
 *
 *  @return YES if it was possible to notify the event
 */
- (BOOL)notifyChangeAudioTrack:(NSString *)newAudioTrack;

/**
 *  Notifies of a new Change Video Track event with the given new video, position of playback (in milliseconds) and associated labels.
 *
 *  @param newVideoTrack  New video track/name
 *  @param position  (OPTIONAL) Playback position, if you don't want to specify a position set the position to -1
 *  @param labels    (OPTIONAL) NSDictionary of labels associated with the current event
 *
 *  @return YES if it was possible to notify the event
 */
- (BOOL)notifyChangeVideoTrack:(NSString *)newVideoTrack withPosition:(long)position labels:(NSDictionary *)labels;

/**
 *  Notifies of a new Change Video Track event with the given position of playback (in milliseconds).
 *
 *  @param newVideoTrack  New video track/name
 *  @param position  (OPTIONAL) Playback position, if you don't want to specify a position set the position to -1
 *
 *  @return YES if it was possible to notify the event
 */
- (BOOL)notifyChangeVideoTrack:(NSString *)newVideoTrack position:(long)position;

/**
 *  Notifies of a new Change Video Track event with the associated labels.
 *
 *  @param newVideoTrack  New video track/name
 *  @param labels    (OPTIONAL) NSDictionary of labels associated with the current event
 *
 *  @return YES if it was possible to notify the event
 */
- (BOOL)notifyChangeVideoTrack:(NSString *)newVideoTrack labels:(NSDictionary *)labels;

/**
 *  Notifies of a new Change Video Track event with the given new video.
 *
 *  @param newVideoTrack  New video track/name
 *
 *  @return YES if it was possible to notify the event
 */
- (BOOL)notifyChangeVideoTrack:(NSString *)newVideoTrack;

/**
 *  Notifies of a new Change Subtitle Track event with the given new subtitle, position of playback (in milliseconds) and associated labels.
 *
 *  @param newSubtitle  New subtitle track/name/language
 *  @param position     Playback position
 *  @param labels       NSDictionary of labels associated with the current event
 *
 *  @return YES if it was possible to notify the event
 */
- (BOOL)notifyChangeSubtitleTrack:(NSString *)newSubtitle withPosition:(long)position labels:(NSDictionary *)labels;

/**
 *  Notifies of a new Change Subtitle Track event with the given position of playback (in milliseconds).
 *
 *  @param newSubtitle  New subtitle track/name/language
 *  @param position  (OPTIONAL) Playback position, if you don't want to specify a position set the position to -1
 *
 *  @return YES if it was possible to notify the event
 */
- (BOOL)notifyChangeSubtitleTrack:(NSString *)newSubtitle position:(long)position;

/**
 *  Notifies of a new Change Subtitle Track event with the associated labels.
 *
 *  @param newSubtitle  New subtitle track/name/language
 *  @param labels    (OPTIONAL) NSDictionary of labels associated with the current event
 *
 *  @return YES if it was possible to notify the event
 */
- (BOOL)notifyChangeSubtitleTrack:(NSString *)newSubtitle labels:(NSDictionary *)labels;

/**
 *  Notifies of a new Change Subtitle Track event with the given new subtitle.
 *
 *  @param newSubtitle  New subtitle track/name/language
 *
 *  @return YES if it was possible to notify the event
 */
- (BOOL)notifyChangeSubtitleTrack:(NSString *)newSubtitle;

/**
 *  Notifies of a new Change CDN event with the given new CDN, position of playback (in milliseconds) and associated labels.
 *
 *  @param newCDN    New CDN name or server details
 *  @param position  (OPTIONAL) Playback position, if you don't want to specify a position set the position to -1
 *  @param labels    (OPTIONAL) NSDictionary of labels associated with the current event
 *
 *  @return YES if it was possible to notify the event
 */
- (BOOL)notifyChangeCDN:(NSString *)newCDN withPosition:(long)position labels:(NSDictionary *)labels;

/**
 *  Notifies of a new Change CDN event with the given position of playback (in milliseconds).
 *
 *  @param newCDN    New CDN name or server details
 *  @param position  (OPTIONAL) Playback position, if you don't want to specify a position set the position to -1
 *
 *  @return YES if it was possible to notify the event
 */
- (BOOL)notifyChangeCDN:(NSString *)newCDN position:(long)position;

/**
 *  Notifies of a new Change CDN event with the associated labels.
 *
 *  @param newCDN    New CDN name or server details
 *  @param labels    (OPTIONAL) NSDictionary of labels associated with the current event
 *
 *  @return YES if it was possible to notify the event
 */
- (BOOL)notifyChangeCDN:(NSString *)newCDN labels:(NSDictionary *)labels;

/**
 *  Notifies of a new Change CDN event with the given new CDN.
 *
 *  @param newCDN    New CDN name or server details
 *
 *  @return YES if it was possible to notify the event
 */
- (BOOL)notifyChangeCDN:(NSString *)newCDN ;


#pragma mark - Labels

/**
 *  Adds the given label, with the specified value.
 *
 *  @param name  Name
 *  @param value Value
 */
- (void)setLabelWithName:(NSString *)name value:(NSString *)value;

/**
 *  Will add all the labels contained on the given NSDictionary.
 *
 *  @param labels The keys will be used as names, and the values as values
 */
- (void)setLabels:(NSDictionary *)labels;

/**
 *  Returns the current value of the given label.
 *
 *  @param name NSString
 *
 *  @return NSString
 */
- (NSString *)valueForLabel:(NSString *)name;

/**
 *  Returns true if the there's a label with the given name.
 *
 *  @param labelName Label to check if exists
 *
 *  @return BOOL
 */
- (BOOL)containsLabel:(NSString *)labelName;

@end
