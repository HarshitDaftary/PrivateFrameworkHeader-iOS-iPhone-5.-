/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SURemoteNotificationController : NSObject  {
}

@property(readonly) int enabledNotificationTypes;

+ (id)sharedInstance;

- (id)init;
- (void)handleNotificationDictionary:(id)arg1;
- (void)handleRegistrationSuccessWithToken:(id)arg1;
- (void)handleRegistrationFailureWithError:(id)arg1;
- (int)enabledNotificationTypes;

@end
