//
// Copyright (c) 2016 comScore. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SCORLiveTransmissionMode.h"
#import "SCORUsagePropertiesAutoUpdateMode.h"
#import "SCORConfigurationDelegate.h"

@class SCORClientConfigurationBuilder;

/**
 *  Base class for clients configurations.
 *  Don´t use this class directly, please use one of the two provided subclasses:
 *  <SCORPartnerConfiguration> or <SCORPublisherConfiguration>
 */
@interface SCORClientConfiguration : NSObject

/** Returns the publisher unique device id of the client. This value is set once the Analytics class has been configured. */
@property(readonly) NSString *publisherUniqueDeviceId;

/**
 *  The current application name.
 *  Value returned by CFBundleName from the main bundle if not nil, "none" otherwise.
 */
@property(readonly) NSString *applicationName;

/**
 *  The current application version.
 *  Value returned by CFBundleVersion from the main bundle by default.
 */
@property(readonly) NSString *applicationVersion;

/**
 *  Labels to be sent on the start event.
 *  Empty dictionary by default.
 */
@property(nonatomic, copy) NSDictionary *startLabels;

/**
 *  The endpoint where to dispatch the live measurements.
 *  Defaults to main comScore live endpoint.
 */
@property(readonly) NSString *liveEndpointURL;

/**
 *  Live transmission mode.
 *  SCORLiveTransmissionModeStandard by default.
 */
@property(readonly) SCORLiveTransmissionMode liveTransmissionMode;

/**
 *  The preferred order for the labels.
 *  Default order.
 */
@property(readonly) NSArray *labelOrder;

/**
 *  The auto update mode for the usage properties.
 *  SCORUsagePropertiesAutoUpdateModeForegroundOnly by default.
 */
@property(readonly) SCORUsagePropertiesAutoUpdateMode usagePropertiesAutoUpdateMode;

/**
 *  The auto update interval for the usage properties.
 */
@property(readonly) int usagePropertiesAutoUpdateInterval;

/**
 *  Enables or disables the keep alive measurements.
 *  YES by default.
 */
@property(readonly) BOOL keepAliveMeasurement;

/**
 *  Enables or disables the secure transmission of measurements.
 *  YES by default for iOS 9.0 or greater.
 */
@property(readonly) BOOL secureTransmission;

/**
 *  Enables or disables the caching of measurements that were redirected by the server (With status code 301 
 *  or 302).
 *  YES by default.
 */
@property(readonly) BOOL httpRedirectCaching;

/**
 *  Enables or disables the tracking of uncaught exceptions.
 *  NO by default.
 */
@property(readonly) BOOL uncaughtExceptionTracking;

#if COMSCORE_MAC
// TODO: Improve this part for MACOS
/** Full path to a directory assigned to the package for its persistent data. */
@property(readonly) NSString applicationDataDirectory;
#endif

/**
 *  Labels to send with every measurement.
 */
- (NSDictionary *)persistentLabels;

/**
 *  Sets a persistent label. If the label exist it will override it with the new value
 *  and if the value is nil the label will be removed. Persistent labels are included
 *  in all further events. Persistent labels overrides sdk labels but they can be overridden
 *  by event labels.
 *
 *  @param name NSString
 *  @param value NSString or *nil*
 */
- (void)setPersistentLabelWithName:(NSString *)name value:(NSString *)value;

/**
 *  Adds or update the given persistent labels. If any of the provided labels have a *NSNull*
 *  value, that label will be removed from the persistent labels. Existent labels that are
 *  not present on the given dictionary won't be modified.
 *
 *  @param persistentLabels NSDictionary
 */
- (void)setPersistentLabels:(NSDictionary *)persistentLabels;

/**
 *  Removes the persistent label with the given name. If the label doesn't exist this method
 *  has no effect, but will incur in a computation overhead.
 *
 *  @param name NSString
 */
- (void)removePersistentLabelWithName:(NSString *)name;

/**
 *  Removes all stored persistent labels.
 */
- (void)removeAllPersistentLabels;

/**
 * Returns the value of the specified label.
 *
 * @param name NSString
 * @return NSString or *nil*
 */
- (NSString *)persistentLabelWithName:(NSString *)name;

/**
 *  Returns true if the there's a label with the given name.
 *
 *  @param labelName Label to check if exists
 *
 *  @return BOOL
 */
- (BOOL)containsPersistentLabel:(NSString *)labelName;

/**
 *  Adds a new delegate to be notified of every change of this configuration.
 *  @warning SCORClientConfiguration will keep a weak reference to the provided delegate.
 *
 *  @param delegate An object that responds to <SCORConfigurationDelegate> protocol
 */
- (void)addDelegate:(id <SCORConfigurationDelegate>)delegate;

/**
 *  Removes the provided delegate from the notification list. If the object is
 *  not in the notification list, this method has no effect (but it will produce
 *  a computation overhead).
 *
 *  @param delegate An object that responds to <SCORConfigurationDelegate>
 */
- (void)removeDelegate:(id <SCORConfigurationDelegate>)delegate;

@end
