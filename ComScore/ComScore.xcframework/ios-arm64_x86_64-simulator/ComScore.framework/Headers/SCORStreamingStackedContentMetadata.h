//
//  Copyright © 2016 comScore. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SCORStreamingStackedContentMetadataBuilder.h"

@interface SCORStreamingStackedContentMetadata : NSObject

+ (SCORStreamingStackedContentMetadata *)stackedContentMetadataWithBuilderBlock:(void (^)(SCORStreamingStackedContentMetadataBuilder *))block;

+ (SCORStreamingStackedContentMetadata *)stackedContentMetadataWithBuilder:(SCORStreamingStackedContentMetadataBuilder *)builder;

@end
