//
//  Copyright © 2016 comScore. All rights reserved.
//

#import <Foundation/Foundation.h>

@class SCORStreamingBaseAdvertisementMetadata;

@protocol SCORStreamingBaseAdvertisementMetadataBuilder

/**
 * Used to populate custom labels
 * @param customLabels - Custom labels
 */
- (void)setCustomLabels:(NSDictionary *)customLabels;

/**
 * Used to populate label ns_st_fee.
 * @param fee - Fee
 */
- (void)setFee:(NSInteger)fee;

/**
 * Used to populate label ns_st_ami.
 * @param advertisementUniqueId - Advertisement unique ID
 */
- (void)setUniqueId:(NSString *)advertisementUniqueId;

/**
 * Used to populate label ns_st_amt.
 * @param advertisementTitle - Advertisement title
 */
- (void)setTitle:(NSString *)advertisementTitle;

/**
 * @param advertisementServerCampaignId - Used to populate label ns_st_amg.
 */
- (void)setServerCampaignId:(NSString *)advertisementServerCampaignId;

/**
 * @param advertisementPlacementId - Used to populate label ns_st_amp.
 */
- (void)setPlacementId:(NSString *)advertisementPlacementId;

/**
 * @param siteId - Used to populate label ns_st_amw.
 */
- (void)setSiteId:(NSString *) siteId;

@end
