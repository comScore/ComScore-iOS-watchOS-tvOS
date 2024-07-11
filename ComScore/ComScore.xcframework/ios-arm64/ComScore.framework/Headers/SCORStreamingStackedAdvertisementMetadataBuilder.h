//
//  Copyright © 2016 comScore. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SCORStreamingBaseAdvertisementMetadataBuilder.h"

@class SCORStreamingStackedAdvertisementMetadata;

@interface SCORStreamingStackedAdvertisementMetadataBuilder : NSObject<SCORStreamingBaseAdvertisementMetadataBuilder>

/**
 *  Builds a SCORStreamingStackedAdvertisementMetadata with the current parameters.
 *
 *  @return SCORStreamingStackedAdvertisementMetadata
 */
- (SCORStreamingStackedAdvertisementMetadata *)build;

@end
