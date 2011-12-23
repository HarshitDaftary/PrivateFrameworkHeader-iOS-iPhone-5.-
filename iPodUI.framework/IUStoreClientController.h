/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

@class IUStoreSocialHistory;

@interface IUStoreClientController : SUClientController <SSDownloadManagerObserver, MCProfileConnectionObserver> {
    BOOL _isUsingNetwork;
    BOOL _shouldIgnoreSocial;
    BOOL _socialEnabled;
    IUStoreSocialHistory *_socialHistory;
}

@property BOOL shouldIgnoreSocial;
@property(getter=isSocialEnabled,readonly) BOOL socialEnabled;
@property(readonly) IUStoreSocialHistory * socialHistory;

+ (id)sharedController;
+ (id)musicStoreURLWithAction:(id)arg1;

- (void)downloadManagerNetworkUsageDidChange:(id)arg1;
- (void)profileConnectionDidReceiveRestrictionChangedNotification:(id)arg1 userInfo:(id)arg2;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;
- (id)socialHistory;
- (void)setShouldIgnoreSocial:(BOOL)arg1;
- (BOOL)shouldIgnoreSocial;
- (BOOL)isSocialEnabled;
- (void)_reloadSocialEnabled;
- (void)_accountStoreChangedNotification:(id)arg1;
- (id)init;
- (void)dealloc;
- (void)becomeActive;
- (void)bagDidLoadNotification:(id)arg1;
- (void)_networkTypeChangedNotification:(id)arg1;
- (id)initWithClientIdentifier:(id)arg1;

@end
