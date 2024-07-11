//
//  Copyright © 2016 comScore. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SCORStreamingContentDeliveryMode.h"
#import "SCORStreamingContentDeliverySubscriptionType.h"
#import "SCORStreamingContentDeliveryComposition.h"
#import "SCORStreamingContentDeliveryAdvertisementCapability.h"
#import "SCORStreamingContentDistributionModel.h"
#import "SCORStreamingContentMediaFormat.h"

@class SCORStreamingBaseContentMetadata;

@protocol SCORStreamingBaseContentMetadataBuilder

/**
 * Used to populate custom labels.
 *
 * @param newCustomLabels - New custom labels
 */
- (void)setCustomLabels:(NSDictionary *)newCustomLabels;

/**
 * Used to populate label ns_st_ci.
 *
 * @param contentUniqueId - Content unique ID
 */
- (void)setUniqueId:(NSString *)contentUniqueId;

/**
 * Used to populate label ns_st_pu.
 *
 * @param publisherName - Publisher name
 */
- (void)setPublisherName:(NSString *)publisherName;

/**
 * Used to populate label ns_st_pr.
 *
 * @param programTitle - Program title
 */
- (void)setProgramTitle:(NSString *)programTitle;

/**
 * Used to populate label ns_st_ep.
 *
 * @param episodeTitle - Episode title
 */
- (void)setEpisodeTitle:(NSString *)episodeTitle;

/**
 * Used to populate label ns_st_sn.
 *
 *  @param episodeSeasonNumber - Episode season number
 */
- (void)setEpisodeSeasonNumber:(NSString *)episodeSeasonNumber;

/**
 * Used to populate label ns_st_en.
 *
 *  @param episodeNumber - Episode number
 */
- (void)setEpisodeNumber:(NSString *)episodeNumber;

/**
 * Used to populate label ns_st_ge.
 *
 *  @param genreName - Genre name
 */
- (void)setGenreName:(NSString *)genreName;

/**
 * Used to populate label ns_st_tge.
 *
 *  @param genreId - Genre ID
 */
- (void)setGenreId:(NSString *)genreId;

/**
 * Used to populate label ns_st_dt.
 *
 *  @param year - Year
 *  @param month - Month
 *  @param day - Day
 */
- (void)setDateOfProductionYear:(NSInteger)year month:(NSInteger)month day:(NSInteger)day;

/**
 * Used to populate label ns_st_tm.
 *
 *  @param hours - Hours
 *  @param minutes - Minutes
 */
- (void)setTimeOfProductionHours:(NSInteger)hours minutes:(NSInteger)minutes;

/**
 *  Used to populate label ns_st_ddt.
 *
 *  @param year - Year
 *  @param month - Month
 *  @param day - Day
 */
- (void)setDateOfDigitalAiringYear:(NSInteger)year month:(NSInteger)month day:(NSInteger)day;

/**
 * Used to populate label ns_st_dtm.
 *
 *  @param hours - Hours
 *  @param minutes - Minutes
 */
- (void)setTimeOfDigitalAiringHours:(NSInteger)hours minutes:(NSInteger)minutes;

/**
 * Used to populate label ns_st_tdt.
 *
 *  @param year - Year
 *  @param month - Month
 *  @param day - Day
 */
- (void)setDateOfTvAiringYear:(NSInteger)year month:(NSInteger)month day:(NSInteger)day;

/**
 * Used to populate label ns_st_ttm.
 *
 *  @param hours - Hours
 *  @param minutes - Minutes
 */
- (void)setTimeOfTvAiringHours:(NSInteger)hours minutes:(NSInteger)minutes;

/**
 * Used to populate label ns_st_st.
 *
 *  @param stationTitle - Station title
 */
- (void)setStationTitle:(NSString *)stationTitle;

/**
 * Used to populate label ns_st_stc.
 *
 *  @param stationCode : Station code
 */
- (void)setStationCode:(NSString *)stationCode;

/**
 * Used to populate label ns_st_tpr.
 * @param programId - Program ID
 */
- (void)setProgramId:(NSString *)programId;

/**
 * Used to populate label ns_st_tep.
 * @param episodeId - Episode ID
 */
- (void)setEpisodeId:(NSString *)episodeId;

/**
 * Used to populate label ns_st_fee.
 * @param fee - Fee
 */
- (void)setFee:(NSInteger)fee;

/**
 * Used to populate label ns_st_pl.
 * @param playlistTitle - Play list title
 */
- (void)setPlaylistTitle:(NSString *)playlistTitle;

/**
 * Used to populate label ns_st_sta.
 * @param networkAffiliate - Network affiliate
 */
- (void) setNetworkAffiliate:(NSString *) networkAffiliate;

/**
 * @param dictionaryClassificationC3 - Classification for C3
 */
- (void)setDictionaryClassificationC3:(NSString *)dictionaryClassificationC3;

/**
 * @param dictionaryClassificationC4 - Classification for C4
 */
- (void)setDictionaryClassificationC4:(NSString *)dictionaryClassificationC4;

/**
 * @param dictionaryClassificationC6 - Classification for C6
 */
- (void)setDictionaryClassificationC6:(NSString *)dictionaryClassificationC6;

/**
 * @param deliveryMode - Delivery mode
 */
- (void)setDeliveryMode:(SCORStreamingContentDeliveryMode) deliveryMode;

/**
 * @param contentDeliverySubscriptionType - Content Delivery Subscription Type
 */
- (void)setDeliverySubscriptionType:(SCORStreamingContentDeliverySubscriptionType) contentDeliverySubscriptionType;

/**
 * @param contentDeliveryComposition - Content delivery composition
 */
- (void)setDeliveryComposition:(SCORStreamingContentDeliveryComposition) contentDeliveryComposition;

/**
 * @param contentDeliveryAdvertisementCapability - Content delivery advertisement capability
 */
- (void)setDeliveryAdvertisementCapability:(SCORStreamingContentDeliveryAdvertisementCapability) contentDeliveryAdvertisementCapability;

/**
 * @param contentDistributionModel - Content distribution model
 */
- (void)setDistributionModel:(SCORStreamingContentDistributionModel) contentDistributionModel;

/**
 * @param contentMediaFormat - Content media format
 */
- (void)setMediaFormat:(SCORStreamingContentMediaFormat) contentMediaFormat;

@end
