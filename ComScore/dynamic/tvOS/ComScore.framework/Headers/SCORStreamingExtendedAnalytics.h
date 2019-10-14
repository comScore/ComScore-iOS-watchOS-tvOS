//
//  Copyright © 2016 comScore. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SCORStreamingWindowState.h"

@interface SCORStreamingExtendedAnalytics : NSObject

/**
 * Expected total playback session length in milliseconds (sum of asset lengths in playback session).
 */
- (void)setPlaybackSessionExpectedLength:(NSInteger)expectedTotalLength;

/**
 * Expected total number of assets in playback session (count of individual assets).
 */
- (void)setPlaybackSessionExpectedNumberOfItems:(NSInteger)expectedNumberOfItems;


/** Sets the load time offset. */
- (void)setLoadTimeOffset:(long) loadTimeOffset;


/**
 *  Notifies of a new Load event with the associated labels.
 *
 *  @param labels    (OPTIONAL) NSDictionary of labels associated with the current event
 *
 */
- (void)notifyLoadWithLabels:(NSDictionary *)labels;

/**
 *  Notifies of a new Load event.
 *
 */
- (void)notifyLoad;


/**
 *  Notifies of a new Custom streaming event with the associated labels.
 *
 *  @param labels    (OPTIONAL) NSDictionary of labels associated with the current event
 *
 */
- (void)notifyCustomEvent:(NSString*)eventName labels:(NSDictionary *)labels;

/**
 *  Notifies of a new Custom streaming event.
 *
 */
- (void)notifyCustomEvent:(NSString*) eventName;

/**
 *  Notifies of a new Call to Action event with the associated labels.
 *
 *  @param labels    (OPTIONAL) NSDictionary of labels associated with the current event
 *
 */
- (void)notifyCallToActionWithLabels:(NSDictionary *)labels;

/**
 *  Notifies of a new Call to Action event.
 *
 */
- (void)notifyCallToAction;

/**
 *  Notifies of a new Error event with the associated labels.
 *
 *  @param errorIdentifier Used to populate label ns_st_er
 *  @param labels    (OPTIONAL) NSDictionary of labels associated with the current event
 *
 */
- (void)notifyError: (NSString*) errorIdentifier labels:(NSDictionary *)labels;


/**
 *  Notifies of a new Error event with the associated labels.
 *
 *  @param errorIdentifier Used to populate label ns_st_er
 *  @param labels    (OPTIONAL) NSDictionary of labels associated with the current event
 *
 */
- (void)notifyError: (NSString*) errorIdentifier;

/**
 *  Notifies of a new Skip Ad event with the associated labels.
 *
 *  @param labels    (OPTIONAL) NSDictionary of labels associated with the current event
 *
 */
- (void)notifySkipAdWithLabels:(NSDictionary *)labels;

/**
 *  Notifies of a new Skip Ad event.
 *
 */
- (void)notifySkipAd;

/**
 *  Notifies of a new Engage event with the associated labels.
 *
 *  @param labels    (OPTIONAL) NSDictionary of labels associated with the current event
 *
 */
- (void)notifyEngageWithLabels:(NSDictionary *)labels;

/**
 *  Notifies of a new Engage event.
 *
 */
- (void)notifyEngage;

/**
 *  Notifies of a new Transfer Playback event.
 *
 */
- (void)notifyTransferPlayback:(NSString *) targetDevice;

/** Notifies of a new Transfer Playback event with associated labels.
 *
 *  @param targetDevice Used to populate label ns_st_rp on the measurement event
 *  @param labels    StringArray of labels associated with the current event
 *
 */
- (void)notifyTransferPlayback:(NSString *) targetDevice labels:(NSDictionary *)labels;

/**
 *  Notifies of a new DRM Fail event with the associated labels.
 *
 *  @param labels    (OPTIONAL) NSDictionary of labels associated with the current event
 *
 */
- (void)notifyDrmFailWithLabels:(NSDictionary *)labels;

/**
 *  Notifies of a new DRM Fail event.
 *
 */
- (void)notifyDrmFail;

/**
 *  Notifies of a new DRM Approve event with the associated labels.
 *
 *  @param labels    (OPTIONAL) NSDictionary of labels associated with the current event
 *
 */
- (void)notifyDrmApproveWithLabels:(NSDictionary *)labels;

/**
 *  Notifies of a new DRM Approve event.
 *
 */
- (void)notifyDrmApprove;

/**
 *  Notifies of a new DRM Deny event with the associated labels.
 *
 *  @param labels    (OPTIONAL) NSDictionary of labels associated with the current event
 *
 */
- (void)notifyDrmDenyWithLabels:(NSDictionary *)labels;

/**
 *  Notifies of a new DRM Deny event.
 *
 */
- (void)notifyDrmDeny;

/**
 *  Notifies of a new Change Bitrate event with the associated labels.
 *
 *  @param newBitrate   The new bitrate in bps
 *  @param labels    (OPTIONAL) NSDictionary of labels associated with the current event
 *
 */
- (void)notifyChangeBitrate:(NSInteger)newBitrate labels:(NSDictionary *)labels;

/**
 *  Notifies of a new Change of Bitrate event with the given new rate (in bps).
 *
 *  @param newBitrate   The new bitrate in bps
 *
 */
- (void)notifyChangeBitrate:(NSInteger)newBitrate;

/**
 *  Notifies of a new Change Volume event with the associated labels.
 *
 *  @param newVolume The new volume rate 0.0-1.0
 *  @param labels    (OPTIONAL) NSDictionary of labels associated with the current event
 *
 */
- (void)notifyChangeVolume:(float)newVolume labels:(NSDictionary *)labels;

/**
 *  Notifies of a new Change Volume event with the given new rate (in percentage, with 100% being max. volume).
 *
 *  @param newVolume The new volume rate 0.0-1.0
 *
 */
- (void)notifyChangeVolume:(float)newVolume;

/**
 *  Notifies of a new Change Window State event with the associated labels.
 *
 *  @param newState One of these: SCORWindowStateNormal, SCORWindowStateFullScreen, SCORWindowStateMinimized or SCORWindowStateMaximized
 *  @param labels    (OPTIONAL) NSDictionary of labels associated with the current event
 *
 */
- (void)notifyChangeWindowState:(SCORStreamingWindowState)newState labels:(NSDictionary *)labels;

/**
 *  Notifies of a new Change Window State event with the given new state.
 *
 *  @param newState One of these: SCORWindowStateNormal, SCORWindowStateFullScreen, SCORWindowStateMinimized or SCORWindowStateMaximized
 *
 */
- (void)notifyChangeWindowState:(SCORStreamingWindowState)newState;

/**
 *  Notifies of a new Change Audio Track event with the associated labels.
 *
 *  @param newAudioTrack  New audio track/name/language
 *  @param labels    (OPTIONAL) NSDictionary of labels associated with the current event
 *
 */
- (void)notifyChangeAudioTrack:(NSString *)newAudioTrack labels:(NSDictionary *)labels;

/**
 *  Notifies of a new Change Audio Track event with the given new audio.
 *
 *  @param newAudioTrack  New audio track/name/language
 *
 */
- (void)notifyChangeAudioTrack:(NSString *)newAudioTrack;

/**
 *  Notifies of a new Change Video Track event with the associated labels.
 *
 *  @param newVideoTrack  New video track/name
 *  @param labels    (OPTIONAL) NSDictionary of labels associated with the current event
 *
 */
- (void)notifyChangeVideoTrack:(NSString *)newVideoTrack labels:(NSDictionary *)labels;

/**
 *  Notifies of a new Change Video Track event with the given new video.
 *
 *  @param newVideoTrack  New video track/name
 *
 */
- (void)notifyChangeVideoTrack:(NSString *)newVideoTrack;

/**
 *  Notifies of a new Change Subtitle Track event with the associated labels.
 *
 *  @param newSubtitle  New subtitle track/name/language
 *  @param labels    (OPTIONAL) NSDictionary of labels associated with the current event
 *
 */
- (void)notifyChangeSubtitleTrack:(NSString *)newSubtitle labels:(NSDictionary *)labels;

/**
 *  Notifies of a new Change Subtitle Track event with the given new subtitle.
 *
 *  @param newSubtitle  New subtitle track/name/language
 *
 */
- (void)notifyChangeSubtitleTrack:(NSString *)newSubtitle;

/**
 *  Notifies of a new Change CDN event with the associated labels.
 *
 *  @param newCDN    New CDN name or server details
 *  @param labels    (OPTIONAL) NSDictionary of labels associated with the current event
 *
 */
- (void)notifyChangeCdn:(NSString *)newCDN labels:(NSDictionary *)labels;

/**
 *  Notifies of a new Change CDN event with the given new CDN.
 *
 *  @param newCDN    New CDN name or server details
 *
 */
- (void)notifyChangeCdn:(NSString *)newCDN ;

@end

