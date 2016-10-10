//
// Copyright 2016 comScore, Inc. All right reserved.
//

/**
 *  Extensions types (>= iOS 8).
 */
typedef NS_ENUM(NSInteger, SCORExtensionType) {
    /**
     *  Today extension.
     */
            SCORExtensionTypeToday,
    /**
     *  Share extension.
     */
            SCORExtensionTypeShare,
    /**
     *  Action extension.
     */
            SCORExtensionTypeAction,
    /**
     *  Photo editing extension.
     */
            SCORExtensionTypePhotoEditing,
    /**
     *  Document Provider extension.
     */
            SCORExtensionTypeDocumentProvider,
    /**
     *  Custom Keyboard extension.
     */
            SCORExtensionTypeCustomKeyboard,
    /**
     *  Watch App Extension.
     */
            SCORExtensionTypeWatchApp,
    /**
     *  Audio Unit Extension.
     */
            SCORExtensionTypeAudioUnit,
    /**
     *  Unkonw extension.
     */
            SCORExtensionTypeUnknown
};

extern NSString *const SCORExtensionType_toString[9];