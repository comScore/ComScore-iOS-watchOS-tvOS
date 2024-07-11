//
// Copyright (c) 2016 comScore. All rights reserved.
//

/** Available content delivery subscription type. */
typedef NS_ENUM(NSInteger, SCORStreamingContentDeliverySubscriptionType) {
    SCORStreamingContentDeliverySubscriptionTypeTraditionalMvpd = 601,
    SCORStreamingContentDeliverySubscriptionTypeVirtualMvpd = 602,
    SCORStreamingContentDeliverySubscriptionTypeSubscription = 603,
    SCORStreamingContentDeliverySubscriptionTypeAdvertising = 604,
    SCORStreamingContentDeliverySubscriptionTypeTransactional = 605,
    SCORStreamingContentDeliverySubscriptionTypePremium = 606
};
