//
//  Copyright © 2016 comScore. All rights reserved.
//

#import <Foundation/Foundation.h>

@class SCORStreamingBaseAdvertisementMetadata;

@protocol SCORStreamingBaseAdvertisementMetadataBuilder

- (void)setCustomLabels:(NSDictionary *)customLabels;

/**
 * Used to populate label ns_st_fee.
 * @param fee
 **/
- (void)setFee:(NSInteger)fee;

/**
 * Used to populate label ns_st_ami.
 * @param advertisementUniqueId
 * */
- (void)setUniqueId:(NSString *)advertisementUniqueId;

/**
 * Used to populate label ns_st_amt.
 * @param advertisementTitle
 * */
- (void)setTitle:(NSString *)advertisementTitle;

/**
 * @param advertisementServerCampaignId - Used to populate label ns_st_amg.
 * */
- (void)setServerCampaignId:(NSString *)advertisementServerCampaignId;

/**
 * @param advertisementPlacementId - Used to populate label ns_st_amp.
 * */
- (void)setPlacementId:(NSString *)advertisementPlacementId;

/**
 * @param siteId - Used to populate label ns_st_amw.
 **/
- (void)setSiteId:(NSString *) siteId;

@end
