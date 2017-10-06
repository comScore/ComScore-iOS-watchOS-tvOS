#import <Foundation/Foundation.h>
@class UIView;
@class UIViewController;

/**
 *  Used for ad discovery and tracking.
 */
@interface SCORVCE : NSObject

/**
 *  Get version of the SCORVCE SDK.
 *
 *  @return SCORVCE SDK version.
 */
+ (NSString *) sdkVersion;

/**
 *  Disable SCORVCE.
 */
+ (void) disable;

/**
 *  Is SCORVCE enabled.
 *
 *  @return YES if SCORVCE is enabled, else NO.
 */
+ (BOOL) enabled;

/**
 *  Get instance of SCORVCE.
 *
 *  @return Instance of SCORVCE.
 */
+ (instancetype) sharedInstance;

/**
 *  Add a partner ID.
 *
 *  @param partnerID Partner ID string.
 */
- (void) addPartnerID:(NSString *) partnerID;

/**
 *  Add a publisher ID.
 *
 *  @param publisherID Publisher ID string.
 */
- (void) addPublisherID:(NSString *) publisherID;

/**
 *  Automatically discover and track all possible ad views.
 */
- (void) discoverAndTrackAds;

/**
 *  Automatically discover and track only ad views having class names provided in the array.
 *
 *  @param classNamesArray Array of ad view class names as strings.
 */
- (void) discoverAndTrackAdClassNames:(NSArray *) classNamesArray;

/**
 *  Enable manual tracking.
 */
- (void) manualTrack;

/**
 *  Enable native tracking.
 */
- (void) nativeTrack;

/**
 *  Track given instance of ad view.
 *
 *  @param adView Instance of adview to track.
 */
- (void) trackAdView:(UIView *)adView;

/**
 *  Track an array of instances of adViews.
 *
 *  @param adViewArray Array of instances of ad views.
 */
- (void) trackAdViewArray:(NSArray *)adViewArray;

/**
 *  Track native display view with the given impression pixel.
 *
 *  @param nativeDisplayView Instance of native display view.
 *  @param displayImpressionURL URL of the impression pixel.
 */
- (void) trackNativeView:(UIView *)nativeDisplayView withTrackingURL:(NSURL *)displayImpressionURL;

/**
 *  Track native video view for the given event name and url.
 *
 *  @param nativeView Instance of native video view.
 *  @param videoEventName Name of the video event.
 *  @param url URL of the video event.
 *  @param dict Dictionary having additional parameters for the video ad.
 */
- (void) trackNativeView:(UIView *)nativeView forEventName:(NSString *)videoEventName withEventURL:(NSURL *) url withParamsDict:(NSDictionary *)dict;

/**
 *  Stop tracking the native view.
 *
 *  @param nativeView Instance of native view.
 */
- (void) stopTrackingNativeView: (UIView *)nativeView;

@end
