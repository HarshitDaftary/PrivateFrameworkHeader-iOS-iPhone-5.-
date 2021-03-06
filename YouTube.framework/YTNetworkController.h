/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/YouTube.framework/YouTube
 */

@class NSTimer;

@interface YTNetworkController : NSObject  {
    BOOL _registered;
    BOOL _isCellular;
    BOOL _isReachable;
    NSTimer *_notificationTimer;
    int _networkType;
}

+ (id)sharedNetworkController;

- (BOOL)serviceIsReachable;
- (void)recheckNetwork;
- (BOOL)allowsHighQuality3GPlayback;
- (void)_checkForNetworkWithDataStatus:(id)arg1;
- (void)_carrierBundleChangeNotification:(id)arg1;
- (void)_reachabilityChanged:(id)arg1;
- (void)start;
- (int)networkType;

@end
