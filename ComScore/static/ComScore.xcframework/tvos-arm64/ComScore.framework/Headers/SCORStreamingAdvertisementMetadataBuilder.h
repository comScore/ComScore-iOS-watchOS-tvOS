//
//  Copyright © 2016 comScore. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SCORStreamingAdvertisementType.h"
#import "SCORStreamingContentMetadata.h"
#import "SCORStreamingAdvertisementDeliveryType.h"
#import "SCORStreamingAdvertisementOwner.h"
#import "SCORStreamingBaseAdvertisementMetadataBuilder.h"

@class SCORStreamingAdvertisementMetadata;
@class SCORStreamingStackedAdvertisementMetadata;

@interface SCORStreamingAdvertisementMetadataBuilder : NSObject<SCORStreamingBaseAdvertisementMetadataBuilder>

/**
 *  Builds a SCORStreamingAdvertisementMetadata with the current parameters.
 *
 *  @return SCORStreamingAdvertisementMetadata
 */
- (SCORStreamingAdvertisementMetadata *)build;

/**
 * @param stack - Stack
 * @param publisherId - Publisher ID
 */
- (void)setStack:(SCORStreamingStackedAdvertisementMetadata *)stack forPublisher:(NSString *)publisherId;

/**
 * @param newRelatedContentMetadata - New related content metadata
 */
- (void)setRelatedContentMetadata:(SCORStreamingContentMetadata *)newRelatedContentMetadata;

/**
 * Used to populate labels ns_st_ct, ns_st_li and ns_st_ad.
 * @param newMediaType - New media type
 */
- (void)setMediaType:(SCORStreamingAdvertisementType)newMediaType;

/**
 * Used to populate labels ns_st_ct and ns_st_ty.
 * @param classifiedAsAudioStream - Classified audio stream
 */
- (void)classifyAsAudioStream:(BOOL)classifiedAsAudioStream;

/**
 * Used to populate label ns_st_cs.
 * @param width - Width
 * @param height - Height
 */
- (void)setVideoDimensionWidth:(NSInteger)width height: (NSInteger)height;

/**
 * Used to populate label ns_st_cl.
 * @param length - Length
 */
- (void)setLength:(NSInteger)length;

/**
 * Used to populate label ns_st_cu.
 * @param clipUrl - Clip URL
 */
- (void)setClipUrl:(NSString *)clipUrl;

/**
 * @param advertisementBreakNumber - Used to populate label ns_st_bn.
 */
- (void)setBreakNumber:(NSInteger)advertisementBreakNumber;

/**
 * @param totalAdvertisementBreaks - Used to populate label ns_st_tb.
 */
- (void)setTotalBreaks:(NSInteger)totalAdvertisementBreaks;

/**
 * @param advertisementNumberInBreak - Used to populate label ns_st_an.
 */
- (void)setNumberInBreak:(NSInteger)advertisementNumberInBreak;

/**
 * @param totalAdvertisementsInBreak - Used to populate label ns_st_ta.
 */
- (void)setTotalInBreak:(NSInteger)totalAdvertisementsInBreak;

/**
 * Used to populate label ns_st_ams.
 * @param advertisementServer - Advertisement server
 */
- (void)setServer:(NSString *)advertisementServer;

/**
 * Used to populate label ns_st_amc.
 * @param advertisementCallToActionUrl - Advertisement call to action URL
 */
- (void)setCallToActionUrl:(NSString *)advertisementCallToActionUrl;

/**
 * @param advertisementDeliveryType - Advertisement delivery type
 */
- (void)setDeliveryType:(SCORStreamingAdvertisementDeliveryType) advertisementDeliveryType;

/**
 * @param advertisementOwner - Advertisement owner
 */
- (void)setOwner:(SCORStreamingAdvertisementOwner)advertisementOwner;

@end
