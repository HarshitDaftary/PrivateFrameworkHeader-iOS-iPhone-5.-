/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

@interface IUiPodAVController : MPAVController  {
    unsigned int _scheduledTrackExpirationCallback : 1;
    int _extendedModeNotifyToken;
}

+ (id)sharedIPCAppInstance;
+ (id)sharedInstance;

- (BOOL)isInExtendedMode;
- (void)_itemWillChange:(id)arg1;
- (void)airPlayVideoEnded;
- (void)_itemReadyToPlay:(id)arg1;
- (BOOL)currentItemIsRental;
- (void)play;
- (void)_setRentalIsPlaying:(BOOL)arg1 forItem:(id)arg2;
- (void)_scheduleExpirationTimerIfNecessary;
- (void)_movieExpirationCheckCallback;
- (void)_appDefaultsChangedNotification:(id)arg1;
- (void)_availableMediaLibrariesDidChangeNotification:(id)arg1;
- (id)init;
- (void)dealloc;

@end
