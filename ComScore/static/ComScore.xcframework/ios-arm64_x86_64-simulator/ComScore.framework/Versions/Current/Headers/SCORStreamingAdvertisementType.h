//
// Copyright (c) 2016 comScore. All rights reserved.
//

/**
 *  Advertisement Types.
 */
typedef NS_ENUM(NSInteger, SCORStreamingAdvertisementType) {
    
    /**
     *  Linear, pre-roll. Linear ads delivered into a media player and presented before, in the middle of,
     *  or after content is consumed by the user. For video the ad completely takes over the full view of
     *  the media player.
     */
    SCORStreamingAdvertisementTypeOnDemandPreRoll = 211,
    
    /**
     *  Linear, mid-roll. Linear ads delivered into a media player and presented before, in the middle of,
     *  or after content is consumed by the user. For video the ad completely takes over the full view of
     *  the media player.
     */
    SCORStreamingAdvertisementTypeOnDemandMidRoll = 212,
    
    /**
     *  Linear, post-roll. Linear ads delivered into a media player and presented before, in the middle of,
     *  or after content is consumed by the user. For video the ad completely takes over the full view of
     *  the media player.
     */
    SCORStreamingAdvertisementTypeOnDemandPostRoll = 213,
    
    /**
     *  Linear, live/simulcast. Linear ads delivered before, in the middle of, or after a
     *  live/simulcast stream of content. For video the ad completely takes over the full view of the
     *  media player.
     */
    SCORStreamingAdvertisementTypeLive = 221,
    
    /** 
     *  Branded, pre-roll. Branded entertainment is media that a user may intentionally view (like content),
     *  or it may be served to a user during an ad break (like an advertisement).
     */
    SCORStreamingAdvertisementTypeBrandedOnDemandPreRoll = 231,
    
    /** 
     *  Branded, mid-roll. Branded entertainment is media that a user may intentionally view (like content),
     *  or it may be served to a user during an ad break (like an advertisement).
     */
    SCORStreamingAdvertisementTypeBrandedOnDemandMidRoll = 232,
    
    /** 
     *  Branded, post-roll. Branded entertainment is media that a user may intentionally view (like content),
     *  or it may be served to a user during an ad break (like an advertisement). 
     */
    SCORStreamingAdvertisementTypeBrandedOnDemandPostRoll = 233,
    
    /**
     *  Branded, content. Branded entertainment is media that a user may intentionally view (like content),
     *  or it may be served to a user during an ad break (like an advertisement). 
     */
    SCORStreamingAdvertisementTypeBrandedAsContent = 234,
    
    /** 
     *  Branded, live/simulcast. Branded entertainment is media that a user may intentionally view (like
     *  content), or it may be served to a user during an ad break (like an advertisement).
     */
    SCORStreamingAdvertisementTypeBrandedDuringLive = 235,
    
    /**
     *  Used if none of the above categories apply.
     */
    SCORStreamingAdvertisementTypeOther = 200
};
