//
// Copyright (c) 2016 comScore. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SCORUsagePropertiesAutoUpdateMode.h"

@class SCORClientConfigurationBuilder;

/**
 *  Base class for clients configurations.
 *  Don´t use this class directly, please use one of the two provided subclasses:
 *  <SCORPartnerConfiguration> or <SCORPublisherConfiguration>
 */
@interface SCORClientConfiguration : NSObject

/**
 *  Labels to be sent on the start event.
 *  Empty dictionary by default.
 */
@property(nonatomic, copy) NSDictionary *startLabels;

/**
 *  Returns true if the there's a start label with the given name.
 *
 *  @param labelName Label to check if exists
 *
 *  @return BOOL
 */
- (BOOL)containsStartLabel:(NSString *)labelName;

/**
 *  Enables or disables the keep alive measurements.
 *  YES by default.
 */
@property(readonly) BOOL keepAliveMeasurementEnabled;

/**
 *  Enables or disables the secure transmission of measurements.
 *  YES by default for iOS 9.0 or greater.
 */
@property(readonly) BOOL secureTransmissionEnabled;

/**
 *  Enables or disables the caching of measurements that were redirected by the server (With status code 301 
 *  or 302).
 *  YES by default.
 */
@property(readonly) BOOL httpRedirectCachingEnabled;

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
- (void)addPersistentLabels:(NSDictionary *)persistentLabels;

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

@end
