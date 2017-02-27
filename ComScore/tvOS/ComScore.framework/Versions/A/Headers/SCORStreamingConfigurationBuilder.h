//
//  Copyright © 2016 comScore. All rights reserved.
//

#import <Foundation/Foundation.h>

@class SCORStreamingConfiguration;

/**
 *  Auxilary object used for configuring a <SCORStreamingConfiguration>.
 *  @warning This class is not thread-safe.
 */
@interface SCORStreamingConfigurationBuilder : NSObject

/**
 *  An array of strings that contains a list of publishers ids to which Streaming Analytics measurements will be sent to.
 */
@property(copy) NSArray *restrictedPublishersList;

/** True if the System Clock Jump Detection is enabled. */
@property(nonatomic) BOOL systemClockJumpDetection;

/**
 *  Builds a SCORStreamingConfiguration with the current parameters.
 *
 *  @return SCORStreamingConfiguration
 */
- (SCORStreamingConfiguration *)build;

@end
