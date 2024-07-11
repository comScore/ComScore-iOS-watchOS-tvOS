//
//  Copyright © 2016 comScore. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SCORStreamingAssetMetadata.h"
#import "SCORStreamingAdvertisementMetadataBuilder.h"

@interface SCORStreamingAdvertisementMetadata : SCORStreamingAssetMetadata

+ (SCORStreamingAdvertisementMetadata *)advertisementMetadataWithBuilderBlock:(void (^)(SCORStreamingAdvertisementMetadataBuilder *))block;

+ (SCORStreamingAdvertisementMetadata *)advertisementMetadataWithBuilder:(SCORStreamingAdvertisementMetadataBuilder *)builder;

@end
