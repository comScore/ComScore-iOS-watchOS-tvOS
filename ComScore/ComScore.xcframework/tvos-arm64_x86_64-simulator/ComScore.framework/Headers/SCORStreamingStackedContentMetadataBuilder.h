//
//  Copyright © 2016 comScore. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SCORStreamingBaseContentMetadataBuilder.h"

@class SCORStreamingStackedContentMetadata;

@interface SCORStreamingStackedContentMetadataBuilder : NSObject<SCORStreamingBaseContentMetadataBuilder>

/**
 *  Builds a SCORStreamingStackedContentMetadata with the current parameters.
 *
 *  @return SCORStreamingStackedContentMetadata
 */
- (SCORStreamingStackedContentMetadata *)build;

@end
