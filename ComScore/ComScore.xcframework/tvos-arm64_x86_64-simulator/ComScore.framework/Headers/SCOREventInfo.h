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

/** Adds a dictionary as labels for the event. These labels will be sent for all the specified publishers. */
- (void)addLabels:(NSDictionary *)labels;

/** Sets a label for the event. This label will be sent for all the specified publishers. */
- (void)setLabelWithName:(NSString *) name value:(NSString *)value;

/** Adds a publisher specific labels. This labels will be only associated with the specified publisher. */
- (void)addLabels:(NSDictionary *) labels publisherId:(NSString *) publisherId;

/** Sets a publisher specific label. This labels will be only associated with the specified publisher. */
- (void)setLabelWithName:(NSString *) name value:(NSString *)value publisherId:(NSString *)publisherId;

/** Set a publisher if it doesn't exist. */
- (void)addIncludedPublisher:(NSString *) publisherId;

@end
