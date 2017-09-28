//
// Copyright (c) 2016 comScore. All rights reserved.
//

/**
 *  A list of possible tracking properties that are use internally by the SDK.
 *  To use them as keys, wrap the values in a NSNumber.
 */
typedef NS_ENUM(NSInteger, SCORTrackingProperty) {
    /**
     *  First install id.
     */
            SCORTrackingPropertyFirstInstallId = 20400,
    /**
     *  Current install id.
     */
            SCORTrackingPropertyCurrentInstallId = 20401,
    /**
     *  Device model.
     */
            SCORTrackingPropertyDeviceModel = 20402,
    /**
     *  Cross publisher device id.
     */
            SCORTrackingPropertyCrossPublisherDeviceId = 20403,
    /**
     *  Current application version.
     */
            SCORTrackingPropertyCurrentApplicationVersion = 20404,
    /**
     *  Previous application version.
     */
            SCORTrackingPropertyPreviousApplicationVersion = 20405,
    /**
     *  Run count.
     */
            SCORTrackingPropertyRunCount = 20406,
    /**
     *  Is jail broken.
     */
            SCORTrackingPropertyIsJailbroken = 20407,
    /**
     *  Cold start id.
     */
            SCORTrackingPropertyColdStartId = 20408,
    /**
     *  Cold start count.
     */
            SCORTrackingPropertyColdStartCount = 20409
};