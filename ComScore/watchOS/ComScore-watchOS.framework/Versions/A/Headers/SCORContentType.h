//
// Copyright (c) 2016 comScore. All rights reserved.
//

/**
 *  Content Types.
 */
typedef NS_ENUM(NSInteger, SCORContentType) {
    /** On demand, long form. Content with strong brand equity or brand recognition, usually created or
     produced by media and entertainment companies using professional-grade equipment, talent, and
     production crews that hold or maintain the rights for distribution and syndication. */
    SCORContentTypeLongFormOnDemand = 112,
    
    /** On demand, short form. Content with strong brand equity or brand recognition, usually created or
     produced by media and entertainment companies using professional-grade equipment, talent, and
     production crews that hold or maintain the rights for distribution and syndication. */
    SCORContentTypeShortFormOnDemand = 111,
    
    /** Live/simulcast. Content with strong brand equity or brand recognition, usually created or
     produced by media and entertainment companies using professional-grade equipment, talent, and
     production crews that hold or maintain the rights for distribution and syndication. */
    SCORContentTypeLive = 113,
    
    /** On demand, long form. Content with little-to-no brand equity or brand recognition. User-generated
     content (UGC) has minimal production value, and is uploaded to the Internet by non-media
     professionals. */
    SCORContentTypeUserGeneratedLongFormOnDemand = 122,
    
    /** On demand, short form. Content with little-to-no brand equity or brand recognition. User-generated
     content (UGC) has minimal production value, and is uploaded to the Internet by non-media
     professionals. */
    SCORContentTypeUserGeneratedShortFormOnDemand = 121,
    
    /** Live/simulcast. Content with little-to-no brand equity or brand recognition. User-generated
     content (UGC) has minimal production value, and is uploaded to the Internet by non-media
     professionals. */
    SCORContentTypeUserGeneratedLive = 123,
    
    /** Bumpers – also known as "billboards" or “slates” – are static promotional images usually run
     before video content and usually lasting fewer than 5 seconds with or without a voiceover. They
     are frequently not true video streams in the technical sense.
     Ideally, these would not be tagged due to their nature. This value can be used in cases where the
     bumpers have to be tagged. */
    SCORContentTypeBumper = 199,
    
    /** Used if none of the above categories apply. */
    SCORContentTypeOther = 100
};
