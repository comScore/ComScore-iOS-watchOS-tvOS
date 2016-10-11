//
// Copyright 2016 comScore, Inc. All right reserved.
//

/**
 *  Application events.
 */
typedef NS_ENUM(NSInteger, SCORApplicationEvent) {
    /**
     *  Application started.
     */
            SCORApplicationEventStart,
    /**
     *  View event.
     */
            SCORApplicationEventView,
    /**
     *  Close event.
     */
            SCORApplicationEventClose,
    /**
     *  Aggregate event.
     */
            SCORApplicationEventAggregate,
    /**
     *  Hidden event.
     */
            SCORApplicationEventHidden,
    /**
     *  Keep Alive event (Used internally).
     */
            SCORApplicationEventKeepAlive,
    /**
     *  Hand Shake event (Used internally).
     */
            SCORApplicationEventHandShake
};

extern NSString *const ApplicationEvent_toString[7];