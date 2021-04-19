//
// Copyright (c) 2016 comScore. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SCORLiveTransmissionMode.h"
#import "SCOROfflineCacheMode.h"
#import "SCORConfigurationDelegate.h"
#import "SCORLogLevel.h"
#import "SCORUsagePropertiesAutoUpdateMode.h"
#import "SCORCrossPublisherUniqueDeviceIdChangeDelegate.h"

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
@property(nonatomic) SCORLiveTransmissionMode liveTransmissionMode;

/**
 *  The configured offline cache mode.
 */
@property(nonatomic) SCOROfflineCacheMode offlineCacheMode;
/**
 *  Maximum number of measurements to keep on cache.
 */
@property(nonatomic) int cacheMaxMeasurements;
/**
 *  Maximum number of batch files that the SDK can generate.
 */
@property(nonatomic) int cacheMaxBatchFiles;
/**
 *  Maximum number of cahes flushes allowed in a row.
 */
@property(nonatomic) int cacheMaxFlushesInARow;
/**
 *  Number of minutes to wait before re-trying a flush.
 */
@property(nonatomic) int cacheMinutesToRetry;
/**
 *  Expiration time for the stored measurements.
 */
@property(nonatomic) int cacheMeasurementExpiry;

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
@property(nonatomic) int usagePropertiesAutoUpdateInterval;

/**
 *  The preferred label order.
 */
@property(copy) NSArray *labelOrder;

/**
 *  The configured endpoint where to dispatch the live measurements.
 */
@property(copy) NSString *liveEndpointURL;

/**
 *  The configured endpoint where to dispatch the stored measurements.
 */
@property(copy) NSString *offlineFlushEndpointURL;

/**
 *  The current application name.
 */
@property(copy) NSString *applicationName;

/**
 *  The current application version.
 */
@property(copy) NSString *applicationVersion;

/**
 *  If enabled we won't check for AdSupport presence on runtime. Disabled by default.
 */
@property(nonatomic) bool preventAdSupportUsage;

/** True if the System Clock Jump Detection is enabled. */
@property(nonatomic) BOOL systemClockJumpDetection;

@property(nonatomic) long systemClockJumpDetectionInterval;

@property(nonatomic) long systemClockJumpDetectionPrecision;

/**
 * Adds a group of start labels.
 */
- (void)addStartLabels:(NSDictionary *)startLabels;

/**
 * Sets a start label. If the label exist it will override it with the new value
 * and if the value is nil the label will be removed. Start labels are included
 * in the start event.
 *
 * @param name NSString
 * @param value NSString or *nil*
 */
- (void)setStartLabelWithName:(NSString *)name value:(NSString *)value;

/**
 *  Removes the start label with the given name. If the label doesn't exist this method
 *  has no effect, but will incur in a computation overhead.
 *
 *  @param name NSString
 */
- (void)removeStartLabelWithName:(NSString *)name;

/**
 *  Removes all start labels.
 */
- (void)removeAllStartLabels;

/**
 *  Enables or disables the keep alive measurements.
 */
@property BOOL keepAliveMeasurementEnabled;

/**
 *  The configured mode of usage properties auto-update.
 */
@property(nonatomic) SCORUsagePropertiesAutoUpdateMode usagePropertiesAutoUpdateMode;

/**
 *  If either the SDK is currently enabled or not.
 */
@property(readonly) BOOL enabled;

- (void)addIncludedPublisher:(NSString *)publisherId;

/**
 *  Adds or update the given persistent labels. If any of the provided labels have a *NSNull*
 *  value, that label will be removed from the persistent labels. Existent labels that are
 *  not present on the given dictionary won't be modified.
 *
 *  @param persistentLabels NSDictionary
 */
- (void)addPersistentLabels:(NSDictionary *)persistentLabels;

/**
 * Sets a persistent label. If the label exist it will override it with the new value
 * and if the value is nil the label will be removed. Persistent labels are included
 * in all further events. Persistent labels overrides sdk labels but they can be overridden
 * by event labels.
 *
 * @param name NSString
 * @param value NSString or *nil*
 */
- (void)setPersistentLabelWithName:(NSString *)name value:(NSString *)value;

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


- (void)enableImplementationValidationMode;

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

- (void)addCrossPublisherUniqueDeviceIdChangeDelegate:(id <SCORCrossPublisherUniqueDeviceIdChangeDelegate>)delegate;

- (void)removeCrossPublisherUniqueDeviceIdChangeDelegate:(id <SCORCrossPublisherUniqueDeviceIdChangeDelegate>)delegate;

- (void) enableChildDirectedApplicationMode;
- (void) disableTcfIntegration;

@end
