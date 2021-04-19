//
//  Copyright © 2016 comScore. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SCORStreamingAssetMetadata.h"
#import "SCORStreamingStackedAdvertisementMetadataBuilder.h"

@interface SCORStreamingStackedAdvertisementMetadata : NSObject

+ (SCORStreamingStackedAdvertisementMetadata *)stackedAdvertisementMetadataWithBuilderBlock:(void (^)(SCORStreamingStackedAdvertisementMetadataBuilder *))block;

+ (SCORStreamingStackedAdvertisementMetadata *)stackedAdvertisementMetadataWithBuilder:(SCORStreamingStackedAdvertisementMetadataBuilder *)builder;

@end
