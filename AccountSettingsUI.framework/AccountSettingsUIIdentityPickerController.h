/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AccountSettingsUI.framework/AccountSettingsUI
 */

@class NSArray, NSString, <AccountSettingsUIIdentityPickerControllerDelegate>;

@interface AccountSettingsUIIdentityPickerController : PSListController  {
    <AccountSettingsUIIdentityPickerControllerDelegate> *_delegate;
    NSString *_property;
    NSArray *_identities;
    NSArray *_emailAddresses;
    BOOL _allowEditing;
}

@property(readonly) NSString * property;


- (id)property;
- (void)viewDidLoad;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)dealloc;
- (void)_finishedFetchingIdentities:(id)arg1;
- (struct __SecIdentity { }*)_selectedIdentity;
- (BOOL)_isPropertyEnabled;
- (void)_setValue:(id)arg1 forSwitchSpecifier:(id)arg2;
- (id)_valueForSwitchSpecifier:(id)arg1;
- (id)_specifiersForIdentities:(id)arg1;
- (struct __SecIdentity { }*)_autoselectIdentityWithEnabled:(BOOL)arg1;
- (void)_setPropertyEnabled:(BOOL)arg1 identity:(struct __SecIdentity { }*)arg2;
- (void)_updateCell:(id)arg1 selected:(BOOL)arg2;
- (BOOL)_allowIdentitySelection;
- (id)_identitySpecifiers;
- (id)specifiers;

@end
