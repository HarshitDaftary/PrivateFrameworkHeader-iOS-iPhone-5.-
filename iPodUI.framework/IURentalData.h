/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

@class NSDate, NSString, NSDictionary, IUUserNotificationAlert, UILocalNotification;

@interface IURentalData : NSObject  {
    IUUserNotificationAlert *_alert;
    int _deferRentalEventsCount;
    struct dispatch_queue_s { } *_dispatchQueue;
    NSString *_downloadIdentifier;
    BOOL _failed;
    NSDictionary *_fileProcessorInfo;
    BOOL _isPlaying;
    UILocalNotification *_lastFiredLocalNotification;
    BOOL _loaded;
    NSString *_mediaPath;
    NSDate *_playbackDate;
    unsigned long long _trackPersistentIdentifier;
}

@property(readonly) NSDate * expirationDate;
@property(readonly) double playbackTimeRemaining;
@property(readonly) int rentalState;
@property(readonly) unsigned long long trackPersistentIdentifier;
@property(readonly) BOOL willExpireSoon;
@property(getter=isPlaying) BOOL playing;
@property(readonly) NSString * downloadIdentifier;
@property(readonly) NSString * mediaPath;
@property(readonly) NSDate * nextEventDate;
@property(getter=isDeferringRentalEvents,readonly) BOOL deferringRentalEvents;

+ (BOOL)_shouldReadDemoRentalInfoForMediaItem:(id)arg1;

- (void)setLoaded:(BOOL)arg1;
- (id)expirationDate;
- (id)downloadIdentifier;
- (id)initWithMediaItem:(id)arg1;
- (void)setFailed:(BOOL)arg1;
- (BOOL)isPlaying;
- (void)setFileProcessorInfo:(id)arg1;
- (void)resetForReason:(unsigned int)arg1;
- (id)nextEventDate;
- (id)copyNextLocalNotification;
- (BOOL)willExpireSoon;
- (void)synchronizeLocalData;
- (void)setPlaying:(BOOL)arg1;
- (double)playbackTimeRemaining;
- (void)_refreshAlert;
- (id)_newAlertTitleForTimeUntilExpiration:(double)arg1;
- (void)_showAlertForTimeUntilExpiration:(double)arg1;
- (id)_rentalEndDate;
- (id)_playbackEndDate;
- (void)performActionForLocalNotification:(id)arg1;
- (id)_lastFiredLocalNotification;
- (void)_performActionForEventWithTimeUntilExpiration:(double)arg1;
- (void)_setLastFiredLocalNotification:(id)arg1;
- (BOOL)isDeferringRentalEvents;
- (id)_nextEventDate;
- (void)performDeferredLocalNotifications;
- (void)_setFileProcessorInfo:(id)arg1;
- (void)_loadDemoRentalInfoFromMediaItem:(id)arg1;
- (void)endDeferringRentalEvents;
- (void)beginDeferringRentalEvents;
- (id)_expirationDate;
- (unsigned long long)trackPersistentIdentifier;
- (int)rentalState;
- (id)mediaPath;
- (id)init;
- (void)dealloc;

@end
