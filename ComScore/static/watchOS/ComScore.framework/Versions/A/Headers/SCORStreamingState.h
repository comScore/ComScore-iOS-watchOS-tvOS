//
//  Copyright (c) 2016 comScore. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 *  StreamingAnalytics states.
 */
typedef NS_ENUM(NSInteger, SCORStreamingState) {
    /**
     *  Undefined State (Error state).
     */
    SCORStreamingStateUndefined = -1,
    /**
     *  Idle.
     */
    SCORStreamingStateIdle = 0,
    /**
     *  Playback not started state.
     */
    SCORStreamingStatePlaybackNotStarted,
    /**
     *  Playing.
     */
    SCORStreamingStatePlaying,
    /**
     *  Paused.
     */
    SCORStreamingStatePaused,
    /**
     *  Buffering before playback.
     */
    SCORStreamingStateBufferingBeforePlayback,
    /**
     *  Buffering during playback.
     */
    SCORStreamingStateBufferingDuringPlayback,
    /**
     *  Buffering during seeking.
     */
    SCORStreamingStateBufferingDuringSeeking,
    /**
     *  Buffering during pause.
     */
    SCORStreamingStateBufferingDuringPause,
    /**
     *  Seeking before playback.
     */
    SCORStreamingStateSeekingBeforePlayback,
    /**
     *  Seeking during playback.
     */
    SCORStreamingStateSeekingDuringPlayback,
    /**
     *  Seeking during buffering.
     */
    SCORStreamingStateSeekingDuringBuffering,
    /**
     *  Seeking during pause.
     */
    SCORStreamingStateSeekingDuringPause,
    /**
     *  Paused during buffering.
     */
    SCORStreamingStatePausedDuringBuffering
};

