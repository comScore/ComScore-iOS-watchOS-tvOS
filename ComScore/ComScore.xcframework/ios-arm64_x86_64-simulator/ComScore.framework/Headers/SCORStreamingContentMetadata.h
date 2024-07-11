//
//  Copyright © 2016 comScore. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SCORStreamingAssetMetadata.h"
#import "SCORStreamingContentMetadataBuilder.h"

@interface SCORStreamingContentMetadata : SCORStreamingAssetMetadata

+ (SCORStreamingContentMetadata *)contentMetadataWithBuilderBlock:(void (^)(SCORStreamingContentMetadataBuilder *))block;

+ (SCORStreamingContentMetadata *)contentMetadataWithBuilder:(SCORStreamingContentMetadataBuilder *)builder;

@end
