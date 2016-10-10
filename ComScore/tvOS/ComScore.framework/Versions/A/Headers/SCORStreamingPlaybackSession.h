#import <Foundation/Foundation.h>
#import "SCORStreamingState.h"

@class SCORStreamingAsset;

/**
    This component handles all the Asset instances, and also stores and retrieves all the
    Playback session related labels, like the Playback session play event counter label. 
    This class also filters and combines all the grouping Asset labels. For example, this 
    component is in charge of grouping assets into episodes based in each Asset's Episode 
    title and Program title properties.
 */
@interface SCORStreamingPlaybackSession : NSObject

@property (readonly) NSDictionary                   * labels;
@property (readonly) SCORStreamingAsset             * asset;

/**
 *  Sets a label. If the label already exists it will be overridden with the new value
 *  and if the provided value is nil the label will be removed.
 *
 *  @param labelName Label to set
 *  @param value     Value to give
 */
- (void)setLabelWithName:(NSString *)labelName value:(NSString *)value;

/**
 *  Adds or update the given labels. If any of the provided labels have a *NSNull*  value, that
 *  label will be removed from the labels. Existent labels that are not present on the given
 *  dictionary won't be modified.
 *
 *  @param labels NSDictionary of labels
 */
- (void)setLabels:(NSDictionary *)labels;


/**
 *  Removes the label with the given name. If the label doesn't exist this method
 *  has no effect, but will incur in a computation overhead.
 *
 *  @param name NSString
 */
- (void)removeLabelWithName:(NSString *)name;

/**
 *  Returns the current value of a label.
 *
 *  @param labelName Label to return
 *
 *  @return The value of the given label, or nil, if there's no such label set
 */
- (NSString *)label:(NSString *)labelName;

/**
 *  Returns true if the there's a label with the given name.
 *
 *  @param labelName Label to check if exists
 *
 *  @return BOOL
 */
- (BOOL)containsLabel:(NSString *)labelName;

/**
 *  Returns the current playback session id.
 *
 *  @return The current playback session id.
 */
- (NSString *)playbackSessionID;

/**
 *  Sets a new Asset with the given labels. If the current status it's not idle, the state machine will be
 *  forced into the idle state.
 *
 *  @param labels   NSDictionary
 */
- (void)setAssetWithLabels:(NSDictionary *)labels;

/**
 *  Sets a new Asset with the given labels. If *loop* is YES, then a new play (and playback) will be counted.
 *
 *  @param labels   NSDictionary
 *  @param loop     The playlist loop flag. Should be set to YES if the playlist has looped.
 */
- (void)setAssetWithLabels:(NSDictionary *)labels loop:(BOOL)loop;

@end