//
// Copyright (c) 2016 comScore. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SCORLogLevel.h"

@class SCOREventInfo;
@class SCORConfiguration;
@class SCORPublisherConfiguration;

/**
 Static class exposing all the public methods to use the ComScore Tagging library.
 
 All the internal tasks are executed asynchronously  to
 avoid blocking the calling thread.
 
 <b>Configuring the library as a publisher</b>
 
 For publishers prior to sending any measurement the Analytics class needs to be configured. To do
 this we need to following steps:
 
 <ol>
 <li> Set up the publisher configuration using the SCORPublisherConfiguration class</li>
 <li> Add the PublisherConfiguration to the Configuration</li>
 <li> Start the library</li>
 </ol>
 
 The following code shows how to follow these steps:
 
    @code
     SCORPublisherConfiguration  publisherConfiguration =
     [SCORPublisherConfiguration publisherConfigurationWithBuilderBlock:^(SCORPublisherConfigurationBuilder  builder) {
        builder.publisherId = @"your_comscore_publisher_id";
        builder.publisherSecret = @"your_comscore_publisher_secret";
        builder.vce = NO;
        builder.liveTransmissionMode = SCORLiveTransmissionModeLan;
     }];
 
     [[SCORAnalytics configuration] addPublisherWithConfiguration:publisherConfiguration];
     
     [SCORAnalytics start]; // Start the SDK asynchronously
    @endcode
 
 <b>Configuring the library as a partner</b>
 
 To configure the library as a partner follow the next steps:
 
 <ol>
 <li> Set up the partner configuration using the SCORPartnerConfiguration class</li>
 <li> Add the PartnerConfiguration to the Configuration</li>
 <li> Start the library</li>
 </ol>
 
 The following code shows how to follow these steps:
 
    @code
     // Always give the option to the publishers to initialize themselves the ComScore configuration
     SCORPartnerConfiguration  partnerConfiguration =
     [SCORPartnerConfiguration partnerConfigurationWithBuilderBlock:^(SCORPartnerConfigurationBuilder  builder) {
        builder.partnerId = @"your_comscore_partner_id";
        builder.externalClientId = @"your_external_client_id";
        builder.vce = NO;
        builder.liveTransmissionMode = SCORLiveTransmissionModeLan;
     }];
 
 
     [SCORAnalytics start];
    @endcode
 
 */

@interface SCORAnalytics : NSObject
/**
 *  Returns the version of the SDK.
 *
 *  @return NSString
 */
+ (NSString *)version;

/**
 *  Returns the current configured log level.
 *
 *  @return <SCORLogLevel>
 */
+ (SCORLogLevel)logLevel;

/**
 *  Sets the log level.
 *
 *  @param level <SCORLogLevel>
 */
+ (void)setLogLevel:(SCORLogLevel)level;

/**
 *  Notifies of a view event.
 */
+ (void)notifyViewEvent;

/**
 *  Notifies of a view event using the *eventInfo* object.
 *  The labels passed in the *eventInfo* will override any sdk or persistent
 *  label.
 *
 *  @param eventInfo <SCOREventInfo>, information to send in the event
 */
+ (void)notifyViewEventWithEventInfo:(SCOREventInfo *)eventInfo;

/**
 *  Notifies of a view event. The labels passed as parameter will override any
 *  sdk or persistent label.
 *
 *  @param labels NSDictionary, labels that should be added to the event
 */
+ (void)notifyViewEventWithLabels:(NSDictionary *)labels;

/**
 *  Notifies of a hidden event.
 */
+ (void)notifyHiddenEvent;

/**
 *  Notifies of a hidden event using the *eventInfo* object.
 *  The labels passed in the *eventInfo* will override any sdk or persistent
 *  label.
 *
 *  @param eventInfo <SCOREventInfo>, information to send in the event
 */
+ (void)notifyHiddenEventWithEventInfo:(SCOREventInfo *)eventInfo;

/**
 *  Notifies of a hidden event. The labels passed as parameter will override 
 *  any sdk or persistent label.
 *
 *  @param labels NSDictionary, labels that should be added to the event
 */
+ (void)notifyHiddenEventWithLabels:(NSDictionary *)labels;

/**
 *  Notifies of an aggregate event. The labels passed as parameter will override
 *  any sdk or persistent label.
 *
 *  @param labels NSDictionary, labels that should be added to the event
 */
+ (void)aggregateWithLabels:(NSDictionary *)labels;

/**
 *  Notifies of an aggregate eventusing the EventInfo object.
 *  The labels passed in the EventInfo will override any sdk or persistent
 *  label.
 *
 *  @param eventInfo <SCOREventInfo>, information to send in the event
 */
+ (void)aggregateWithEventInfo:(SCOREventInfo *)eventInfo;

/**
 *  Returns a copy of some tracking properties used internally.
 *  Please refer to <SCORTrackingProperty> for a list of possible keys.
 *
 *  @return NSDictionary, internal tracking properties
 */
+ (NSDictionary *)trackingProperties;

/**
 *  Call this method to notify that the user interacted with the application (e.g. pressing a
 *  button or skipping a song).
 */
+ (void)notifyUserInteraction;

/**
 *  Call this method to notify that the application is executing a task that provides a user
 *  experience (e.g. playing music). When the user experience is over you should call
 *  <notifyUxInactive> to notify it.
 */
+ (void)notifyUxActive;

/**
 *  Call this method to notify that the application finished executing a task that provides a
 *  user experience (e.g. playing music). If no user experience task was notified using 
 *  <notifyUxActive>, calling this method has no effect.
 */
+ (void)notifyUxInactive;

/**
 *  Call this method to notify that the application appears on the device screen.
 */
+ (void)notifyEnterForeground;

/**
 *  Call this method to notify that the application no longer appears on the device screen.
 */
+ (void)notifyExitForeground;

/**
 *  Accumulates the current timer registers, so that data won't be lost on crash.
 *  Triggers IO operations in a separate thread so please use it wisely.
 */
+ (void)updateUsageProperties;

/**
 *  Flushes offline cached measurements.
 */
+ (void)flushOfflineCache;

/**
 *  Returns the current <SCORConfiguration> object.
 *
 *  @return <SCORConfiguration>, the using Configuration object
 */
+ (SCORConfiguration *)configuration;

/**
 *  Starts the ComScore SDK with the default configuration. The startup logic will take place in
 *  a background thread. Use <[SCORConfiguration addDelegate:]> to get notified when the settings
 *  are finally set.
 */
+ (void)start;

/**
 *  Clears offline cached measurements without transmitting them.
 */
+ (void)clearOfflineCache;

/**
 *  Clears internally stored registers from disk.
 */
+ (void)clearInternalData;

/**
 *  Requests the categories associated with the provided Page URL and, upon receipt
 *  of the data, executes a block with all categories as its parameters.
 *
 *  @param key                      Client identifier assigned by comScore
 *  @param url                      URL of the page needing categorization
 *  @param publisherConfiguration   SCORPublisherConfiguration instance to use
 *  @param callback                 Block to be called with the result of the operation
 */
+ (void) getActivationCategoriesWithKey:(NSString *)key
                          url:(NSString *)url
       publisherConfiguration:(SCORPublisherConfiguration *)publisherConfiguration
                        block:(void (^)(NSArray *data))callback;

@end
