//
// Copyright (c) 2019 comScore. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SCORConfigurationType.h"

@protocol SCORPublisherUniqueDeviceIdDelegate <NSObject>

- (void)publisherUniqueDeviceIdChanged:(NSString*)deviceId forPublisherId:(NSString*)publisherId;
@end
