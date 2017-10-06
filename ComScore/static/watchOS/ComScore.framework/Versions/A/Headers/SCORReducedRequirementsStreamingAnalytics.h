//
//  Copyright © 2016 comScore. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SCORAdType.h"
#import "SCORContentType.h"

/** StreamingAnalytics wrapper for managing Media content and advertisement. */
@interface SCORReducedRequirementsStreamingAnalytics : NSObject

/** This method will notify a play event with the corresponding video advertisement labels. */
- (void) playVideoAdvertisementWithMetadata:(NSDictionary *)metadata andMediaType:(SCORAdType) mediaType;

/** This method will notify a play event with the corresponding audio advertisement labels. */
- (void) playAudioAdvertisementWithMetadata:(NSDictionary *)metadata andMediaType:(SCORAdType) mediaType;

/** This method will notify a play event with the corresponding video content part labels. */
- (void) playVideoContentPartWithMetadata:(NSDictionary *)metadata andMediaType:(SCORContentType) mediaType;

/** This method will notify a play event with the corresponding audio content part labels. */
- (void) playAudioContentPartWithMetadata:(NSDictionary *)metadata andMediaType:(SCORContentType) mediaType;

/** This method will notify a pause event with the corresponding labels. */
- (void) stop;

@end
