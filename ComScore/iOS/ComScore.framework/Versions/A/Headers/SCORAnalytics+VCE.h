//
//  Copyright © 2016 comScore. All rights reserved.
//

#import "SCORAnalytics.h"

@class SCORVCE;

@interface SCORAnalytics ()
/**
 *  Returns the version of VCE for the current SDK.
 *
 *  @return NSString
 */
+ (NSString *)vceVersion;

/**
 *  Returns the VCE instance. Only works on iOS 7 or greater.
 *
 *  @return SCORVCE or *nil*
 */
+ (SCORVCE *)sharedVCEInstance;
@end
