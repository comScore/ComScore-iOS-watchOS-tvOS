//
//  Copyright © 2016 comScore. All rights reserved.
//

#import <Foundation/Foundation.h>

/** This object sets all the properties of the Media Asset, and handles its state changes,
    like the Pause event counter.
 */
@interface SCORStreamingAsset : NSObject

@property (readonly) NSDictionary                        * labels;
@property (readonly) NSInteger                           clipNumber;
@property (nonatomic) bool                               autoCalculatePositions;


/**
 *  Sets a label. If the label already exists it will be overridden with the new value
 *  and if the provided value is nil the label will be removed.
 *
 *  @param labelName Label to set
 *  @param value     Value to give
 */
- (void)setLabelWithName:(NSString *)labelName withValue:(NSString *)value;

/**
 *  Adds or update the given labels. If any of the provided labels have a *NSNull*  value, that
 *  label will be removed from the labels. Existent labels that are not present on the given
 *  dictionary won't be modified.
 *
 *  @param labels NSDictionary of labels
 */
- (void)setLabels:(NSDictionary *)labels;


/**
 *  Removes the label with the given name. If the label doesn't exist this method
 *  has no effect, but will incur in a computation overhead.
 *
 *  @param name NSString
 */
- (void)removeLabelWithName:(NSString *)name;

/**
 *  Returns the current value of a label.
 *
 *  @param labelName Label to return
 *
 *  @return The value of the given label, or nil, if there's no such label set
 */
- (NSString *)label:(NSString *)labelName;

/**
 *  Returns true if the there's a label with the given name.
 *
 *  @param labelName Label to check if exists
 *
 *  @return BOOL
 */
- (BOOL)containsLabel:(NSString *)labelName;

- (void)addStackWithPublisherId:(NSString *)publisherId labels:(NSDictionary *)labels;

- (void)removeStackWithPublisherId:(NSString *)publisherId;

@end
