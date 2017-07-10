//
// Copyright (c) 2016 comScore. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SCORLiveTransmissionMode.h"
#import "SCOROfflineCacheMode.h"
#import "SCORConfigurationDelegate.h"
#import "SCORLogLevel.h"
#import "SCORUsagePropertiesAutoUpdateMode.h"

@class SCORTaskExecutor;
@class SCORKeepAlive;
@class SCOROfflineCache;
@class SCORPartnerConfiguration;
@class SCORPublisherConfiguration;
@class SCORClientConfiguration;

/**
 * Encapsulates the basic information of a client, and keeps partners and publishers 
 * configurations.
 *
 * @see SCORPartnerConfiguration
 * @see SCORPublisherConfiguration
 */
@interface SCORConfiguration : NSObject

/**
 *  The configured transmission mode.
 */
@property SCORLiveTransmissionMode liveTransmissionMode;

/**
 *  The configured offline cache mode.
 */
@property SCOROfflineCacheMode offlineCacheMode;
/**
 *  Maximum number of measurements to keep on cache.
 */
@property(readonly) int cacheMaxMeasurements;
/**
 *  Maximum number of batch files that the SDK can generate.
 */
@property(readonly) int cacheMaxBatchFiles;
/**
 *  Maximum number of cahes flushes allowed in a row.
 */
@property(readonly) int cacheMaxFlushesInARow;
/**
 *  Number of minutes to wait before re-trying a flush.
 */
@property(readonly) int cacheMinutesToRetry;
/**
 *  Expiration time for the stored measurements.
 */
@property(readonly) int cacheMeasurementExpiry;
/**
 *  The interval, in seconds, to wait for every measurements flush.
 */
@property(readonly) long cacheFlushingInterval;

/**
 *  All <SCORPartnerConfiguration> instances currently added.
 */
@property(readonly) NSArray *partnerConfigurations;

/**
 *  All <SCORPublisherConfiguration> instances currently added.
 */
@property(readonly) NSArray *publisherConfigurations;

/**
 *  The interval, in seconds, to calculate the usage properties.
 */
@property(readonly) int usagePropertiesAutoUpdateInterval;

/**
 *  The preferred label order.
 */
@property(readonly) NSArray *labelOrder;

/**
 *  The configured endpoint where to dispatch the live measurements.
 */
@property(readonly) NSString *liveEndpointURL;

/**
 *  The configured endpoint where to dispatch the stored measurements.
 */
@property(readonly) NSString *offlineFlushEndpointURL;

/**
 *  The current application name.
 */
@property(copy) NSString *applicationName;

/**
 *  The current application version.
 */
@property(copy) NSString *applicationVersion;

/**
 *  The auto start labels currently in use.
 */
@property(copy) NSDictionary *startLabels;

/**
 *  Enables or disables the keep alive measurements.
 */
@property BOOL keepAliveMeasurement;

/**
 *  Either if the secure transmission of measurements is enabled or not.
 */
@property(readonly) BOOL secureTransmission;

/**
 *  Enables or disables the caching of measurements that were redirected by the server (With status code 301
 *  or 302).
 *  YES by default.
 */
@property(readonly) BOOL httpRedirectCaching;

/**
 *  The configured mode of usage properties auto-update.
 */
@property(readonly) SCORUsagePropertiesAutoUpdateMode usagePropertiesAutoUpdateMode;

/**
 *  Either if the the auto generation of the start event is enabled or not.
 */
@property(readonly) BOOL uncaughtExceptionTracking;

/**
 *  If either the SDK is currently enabled or not.
 */
@property(readonly) BOOL enabled;

/**
 *  Dictionary of all the set persistent labels.
 */
- (NSDictionary *)persistentLabels;

/**
 *  Adds or update the given persistent labels. If any of the provided labels have a *NSNull*
 *  value, that label will be removed from the persistent labels. Existent labels that are
 *  not present on the given dictionary won't be modified.
 *
 *  @param persistentLabels NSDictionary
 */
- (void)setPersistentLabels:(NSDictionary *)persistentLabels;

/**
 * Sets a persistent label. If the label exist it will override it with the new value
 * and if the value is nil the label will be removed. Persistent labels are included
 * in all further events. Persistent labels overrides sdk labels but they can be overridden
 * by event labels. Once the <SCORClientConfiguration> is added to the <SCORConfiguration>
 * this method will be asynchronous. Use the <addDelegate> in order to get notified when 
 * this change is completed.
 *
 * @param name NSString
 * @param value NSString or *nil*
 */
- (void)setPersistentLabelWithName:(NSString *)name value:(NSString *)value;

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
 *  Adds a new publisher or partner with the given configuration, every measurement will
 *  include the information of every publisher or partner that is added.
 *
 *  @param clientConfiguration SCORClientConfiguration
 */
- (void)addClientWithConfiguration:(SCORClientConfiguration *)clientConfiguration;

/**
 *  Returns the partner stored with the given id, if any.
 *
 *  @param partnerId NSString
 *  @see <addPartnerWithConfiguration:>
 *
 *  @return SCORPartnerConfiguration or *nil*
 */
- (SCORPartnerConfiguration *)partnerConfigurationWithPartnerId:(NSString *)partnerId;

/**
 *  Returns the publisher stored with the given id, if any.
 *
 *  @param publisherId NSString
 *  @see <addPublisherWithConfiguration:>
 *
 *  @return SCORPublisherConfiguration or *nil*
 */
- (SCORPublisherConfiguration *)publisherConfigurationWithPublisherId:(NSString *)publisherId;

/**
 *  Will disable tracking for the current configuration.
 */
- (void)disable;

/**
 *  Adds a new delegate to be notified of every change of this configuration. 
 *  @warning SCORConfiguration will keep a weak reference to the provided delegate.
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
