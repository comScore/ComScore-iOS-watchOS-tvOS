//
// Copyright (c) 2016 comScore. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SCORConfigurationType.h"

/**
 *  Protocol for SCORConfiguration delegates.
 */
@protocol SCORConfigurationDelegate <NSObject>
/**
 *  This method will be called every time the configuration changes.
 *
 *  @param configurationType <SCORConfigurationType>, the change type
 */
- (void)configurationChangedWithConfigurationType:(SCORConfigurationType)configurationType;
@end