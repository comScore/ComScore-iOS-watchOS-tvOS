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

- (void)setCustomLabels:(NSDictionary *)newCustomLabels;

/**
 * Used to populate label ns_st_ci.
 * @param contentUniqueId
 * */
- (void)setUniqueId:(NSString *)contentUniqueId;

/**
 * Used to populate label ns_st_pu.
 * @param publisherName
 * */
- (void)setPublisherName:(NSString *)publisherName;

/**
 * Used to populate label ns_st_pr.
 * @param programTitle
 * */
- (void)setProgramTitle:(NSString *)programTitle;

/**
 * Used to populate label ns_st_ep.
 * @param episodeTitle
 * */
- (void)setEpisodeTitle:(NSString *)episodeTitle;

/**
 * Used to populate label ns_st_sn.
 * @param episodeSeasonNumber
 */
- (void)setEpisodeSeasonNumber:(NSString *)episodeSeasonNumber;

/**
 * Used to populate label ns_st_en.
 * @param episodeNumber
 **/
- (void)setEpisodeNumber:(NSString *)episodeNumber;

/**
 * Used to populate label ns_st_ge.
 * @param genre
 **/
- (void)setGenreName:(NSString *)genreName;

/**
 * Used to populate label ns_st_tge.
 * @param genre
 **/
- (void)setGenreId:(NSString *)genreId;

/**
 * Used to populate label ns_st_dt.
 * @param dateOfProduction
 **/
- (void)setDateOfProductionYear:(NSInteger)year month:(NSInteger)month day:(NSInteger)day;

/**
 * Used to populate label ns_st_tm.
 * @param timeOfProduction
 **/
- (void)setTimeOfProductionHours:(NSInteger)hours minutes:(NSInteger)minutes;

/**
 *  Used to populate label ns_st_ddt.
 * @param dateOfDigitalAiring
 **/
- (void)setDateOfDigitalAiringYear:(NSInteger)year month:(NSInteger)month day:(NSInteger)day;

/**
 * Used to populate label ns_st_dtm.
 * @param timeOfDigitalAiring
 **/
- (void)setTimeOfDigitalAiringHours:(NSInteger)hours minutes:(NSInteger)minutes;

/**
 * Used to populate label ns_st_tdt.
 * @param dateOfTvAiring
 **/
- (void)setDateOfTvAiringYear:(NSInteger)year month:(NSInteger)month day:(NSInteger)day;

/**
 * Used to populate label ns_st_ttm.
 * @param timeOfTvAiring
 **/
- (void)setTimeOfTvAiringHours:(NSInteger)hours minutes:(NSInteger)minutes;

/**
 * Used to populate label ns_st_st.
 * @param stationTitle
 **/
- (void)setStationTitle:(NSString *)stationTitle;

/**
 * Used to populate label ns_st_stc.
 * @param stationCode
 **/
- (void)setStationCode:(NSString *)stationCode;

/**
 * Used to populate label ns_st_tpr.
 * @param programId
 **/
- (void)setProgramId:(NSString *)programId;

/**
 * Used to populate label ns_st_tep.
 * @param episodeId
 **/
- (void)setEpisodeId:(NSString *)episodeId;

/**
 * Used to populate label ns_st_fee.
 * @param fee
 * */
- (void)setFee:(NSInteger)fee;

/**
 * Used to populate label ns_st_pl.
 * @param playlistTitle
 **/
- (void)setPlaylistTitle:(NSString *)playlistTitle;

/**
 * Used to populate label ns_st_sta.
 * @param networkAffiliate
 * */
- (void) setNetworkAffiliate:(NSString *) networkAffiliate;

/**
 * @param dictionaryClassificationC3
 * */
- (void)setDictionaryClassificationC3:(NSString *)dictionaryClassificationC3;

/**
 * @param dictionaryClassificationC4
 * */
- (void)setDictionaryClassificationC4:(NSString *)dictionaryClassificationC4;

/**
 * @param dictionaryClassificationC6
 * */
- (void)setDictionaryClassificationC6:(NSString *)dictionaryClassificationC6;

- (void)setDeliveryMode:(SCORStreamingContentDeliveryMode) deliveryMode;

- (void)setDeliverySubscriptionType:(SCORStreamingContentDeliverySubscriptionType) contentDeliverySubscriptionType;

- (void)setDeliveryComposition:(SCORStreamingContentDeliveryComposition) contentDeliveryComposition;

- (void)setDeliveryAdvertisementCapability:(SCORStreamingContentDeliveryAdvertisementCapability) contentDeliveryAdvertisementCapability;

- (void)setDistributionModel:(SCORStreamingContentDistributionModel) contentDistributionModel;

- (void)setMediaFormat:(SCORStreamingContentMediaFormat) contentMediaFormat;

@end
