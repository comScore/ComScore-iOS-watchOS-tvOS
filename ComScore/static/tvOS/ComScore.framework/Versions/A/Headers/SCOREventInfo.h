#import <Foundation/Foundation.h>

/**
     EventInfo must be used when the event that needs to be send contains more than one publisher.
     The EventInfo object allows to send different information for different publishers in the same app.
     
     Usage:
     @code
     // If we configured 3 publishers and we only want to send some information for the publisher 1 and publisher 2
     SCOREventInfo *eventInfo = [[SCOREventInfo alloc] init];
     // We set one publisher
     [eventInfo setPublisher:@"100001" withLabel:@"label_name_11" value:@"hello world"];
     // We also specify that the second publisher must be there
     [eventInfo setPublisher:@"100002" withLabel:@"label_name_22" value:@"good morning"];
     // Some labels for all the publishers that we specified
     [eventInfo setLabels:myLabels];
     
     // The view event will be send only for the publisher 1 and publisher 2
     [SCORAnalytics viewWithEventInfo:eventInfo];
     @endcode
 */
@interface SCOREventInfo : NSObject

- (SCOREventInfo *)init;

- (void)dealloc;

- (SCOREventInfo *)copy;

/** Sets a dictionary as labels for the event. These labels will be sent for all the specified publishers. */
- (void)setLabels:(NSDictionary *)labels;

/** Sets a label for the event. This label will be sent for all the specified publishers. */
- (void)setLabelWithName:(NSString *) name value:(NSString *)value;

/** Returns the current value for the given label, or nil if not such label exist. */
- (NSString *)labelWithName:(NSString *)name;

/** Returns the current value for the given publisher label, or nil if not such label exist. */
- (NSString *)labelWithName:(NSString *)name publisherId:(NSString *) publisherId;

/** Removes a publisher from the EventInfo. */
- (void) removePublisherWithId:(NSString *) publisherId;

/** Removes a label. */
- (void) removeLabelWithName:(NSString *) name;

/** Sets a publisher specific labels. This labels will be only associated with the specified publisher. */
- (void) setLabels:(NSDictionary *) labels publisherId:(NSString *) publisherId;

/** Sets a publisher specific label. This labels will be only associated with the specified publisher. */
- (void) setLabelWithName:(NSString *) name value:(NSString *)value publisherId:(NSString *)publisherId;

/** Set a publisher if it doesn't exist. */
- (void) setPublisherWithId:(NSString *) publisherId;

/** Removes a publisher specific label. */
- (void) removeLabelWithName:(NSString *) name publisherId:(NSString *) publisherId;

/** Returns a copy of the labels for the event. */
- (NSDictionary *)labels;

/** Removes all the common labels in the EventInfo. */
- (void)removeAllLabels;

/** Removes all the labels for the specific publisher in the EventInfo. */
- (void)removeAllLabelsWithPublisherId:(NSString *)publisherId;

/** Returns a copy of the labels of a specific publisher for the event. */
- (NSDictionary *)labelsWithPublisherId: (NSString *) publisherId;

/**
 *  Returns true if the there's a publisher with the given publisher ID.
 *
 *  @param publisherId Label to check if exists
 *
 *  @return BOOL
 */
- (BOOL)containsPublisher:(NSString *) publisherId;

/**
 *  Returns true if the there's a label with the given name.
 *
 *  @param labelName Label to check if exists
 *
 *  @return BOOL
 */
- (BOOL)containsLabel:(NSString *) labelName;

/**
 *  Returns true if the there's a label with the given name for the specified publisher ID.
 *
 *  @param labelName Label to check if exists
 *  @param publisherId The ID of he publisher for whom to check if the specified label exists
 *
 *  @return BOOL
 */
- (BOOL)containsLabel:(NSString *) labelName publisherId:(NSString *)publisherId;

@end
