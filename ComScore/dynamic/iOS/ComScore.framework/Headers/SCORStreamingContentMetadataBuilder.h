//
//  Copyright © 2016 comScore. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SCORStreamingContentType.h"
#import "SCORStreamingContentFeedType.h"
#import "SCORStreamingBaseContentMetadataBuilder.h"
#import "SCORStreamingStackedContentMetadata.h"

@class SCORStreamingContentMetadata;

@interface SCORStreamingContentMetadataBuilder : NSObject<SCORStreamingBaseContentMetadataBuilder>

/**
 *  Builds a SCORStreamingContentMetadata with the current parameters.
 *
 *  @return SCORStreamingContentMetadata
 */
- (SCORStreamingContentMetadata *)build;

- (void)setStack:(SCORStreamingStackedContentMetadata *)stack forPublisher:(NSString *)publisherId;

/**
 * @param newMediaType - Used to populate labels ns_st_ct and ns_st_li.
 * */
- (void)setMediaType:(SCORStreamingContentType)newMediaType;

/**
 * Used to populate labels ns_st_ct and ns_st_ty.
 * @param classifiedAsAudioStrea
 * */
- (void)classifyAsAudioStream:(BOOL)classifiedAsAudioStream;

/**
 * Used to populate label ns_st_ce.
 * @param classifiedAsCompleteEpisode
 * */
- (void)classifyAsCompleteEpisode:(BOOL)classifiedAsCompleteEpisode;

/**
 * Used to populate label ns_st_ia.
 * @param carriesTvAdvertisementLoad
 * */
- (void)carryTvAdvertisementLoad:(BOOL)carriesTvAdvertisementLoad;

/**
 * Used to populate label ns_st_cl.
 * @param length
 * */
- (void)setLength:(NSInteger)length;

/**
 * Used to populate label ns_st_tp.
 * @param totalSegments
 * */
- (void)setTotalSegments:(NSInteger)totalSegments;

/**
 * Used to populate label ns_st_cu.
 * @param clipUrl
 **/
- (void)setClipUrl:(NSString *)clipUrl;

/**
 * @param feedType - Used to populate label ns_st_ft.
 * */
- (void)setFeedType:(SCORStreamingContentFeedType)feedType;

/**
 * Used to populate label ns_st_cs.
 * @param width
 * @param height
 * */
- (void)setVideoDimensionWidth:(NSInteger)width height: (NSInteger)height;

@end
