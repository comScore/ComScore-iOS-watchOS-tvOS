//
//  Copyright © 2016 comScore. All rights reserved.
//

#import "SCORStreamingState.h"

/** Delegate to get notified when the state is changed. */
@protocol SCORStreamingDelegate<NSObject>

@optional
/** Called when the sate is changed.
 *
 * @param oldState - Old state
 * @param newState - New state
 * @param eventLabels - Event labels
 */
- (void)onStateChanged:(SCORStreamingState)oldState
              newState:(SCORStreamingState)newState
           eventLabels:(NSDictionary *)eventLabels;

@end
