//
// Copyright (c) 2019 comScore. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SCORConfigurationType.h"

/**
 *  Protocol for SCORCrossPublisherUniqueDeviceIdChangeDelegate delegates.
 */
@protocol SCORCrossPublisherUniqueDeviceIdChangeDelegate <NSObject>

/**
 *  This method will be called every time the crospublisherId changes.
 */
- (void)crossPublisherUniqueDeviceIdChanged:(NSString*)crospublisherId;
@end
