//
// Copyright (c) 2016 comScore. All rights reserved.
//

/**
 *  Notification types for changes in the SDK configuration.
 */
typedef NS_ENUM(NSInteger, SCORConfigurationType) {
    /**
     *  Notifies of a change in the persistent labels.
     */
            SCORConfigurationTypePersistentLabels __attribute__((deprecated)) = 20300,
    /**
     *  Notifies of a change in the partner configuration.
     */
            SCORConfigurationTypePartner = 20301,
    /**
     *  Notifies of a change in the publisher configuration.
     */
            SCORConfigurationTypePublisher = 20302,
    /**
     *  Notifies of a change in the keep alive measurement configuration.
     */
            SCORConfigurationTypeKeepAliveMeasurement = 20303,
    /**
     *  Notifies of a change in the live transmission configuration.
     */
            SCORConfigurationTypeLiveTransmissionMode = 20304,
    /**
     *  Notifies of a change in the offline cache configuration.
     */
            SCORConfigurationTypeOfflineCacheMode = 20305,
    /**
     *  Notifies that the current configuration was disabled.
     */
            SCORConfigurationTypeDisable = 20306,
    /**
     *  Notifies that the current configuration was applied.
     */
            SCORConfigurationTypeTimeWindowElapsed = 20307,
    /**
     *  When the start labels has been changed.
     */
            SCORConfigurationTypeStartLabels __attribute__((deprecated)) = 20308,
    /**
     *  When the label order has been changed.
     */
            SCORConfigurationTypeLabelOrder = 20309
};
