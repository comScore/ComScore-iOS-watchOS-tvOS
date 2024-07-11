//
// Copyright (c) 2016 comScore. All rights reserved.
//

/** Available content media format. */
typedef NS_ENUM(NSInteger, SCORStreamingContentMediaFormat) {
    SCORStreamingContentMediaFormatFullContentGeneric = 1001,
    SCORStreamingContentMediaFormatFullContentEpisode = 1002,
    SCORStreamingContentMediaFormatFullContentMovie = 1003,
    SCORStreamingContentMediaFormatPartialContentGeneric = 1004,
    SCORStreamingContentMediaFormatPartialContentEpisode = 1005,
    SCORStreamingContentMediaFormatPartialContentMovie = 1006,
    SCORStreamingContentMediaFormatPreviewGeneric = 1007,
    SCORStreamingContentMediaFormatPreviewEpisode = 1008,
    SCORStreamingContentMediaFormatPreviewMovie = 1009,
    SCORStreamingContentMediaFormatExtraGeneric = 1010,
    SCORStreamingContentMediaFormatExtraEpisode = 1012,
    SCORStreamingContentMediaFormatExtraMovie = 1013,
    SCORStreamingContentMediaFormatFullContentPodcast = 1014,
    SCORStreamingContentMediaFormatPartialContentPodcast = 1015
};
