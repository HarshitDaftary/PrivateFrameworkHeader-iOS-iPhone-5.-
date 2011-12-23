/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/DataAccessUI.framework/DataAccessUI
 */

@class NSArray;

@interface ASSettingsAccountController : DASettingsAccountController  {
    NSArray *_specifiersToInsert;
    unsigned int _diagsVisibleValue;
}


- (void)_tryUpdatingCompositeValueWithId:(id)arg1 fromValue:(id)arg2 forKey:(id)arg3;
- (BOOL)_isHotmailAccount;
- (id)localizedDisablingAccountString;
- (id)localizedEnablingAccountString;
- (id)localizedValidationFailureTitleString;
- (id)localizedAccountSetupTitleString;
- (void)reloadAccountOnSpecifier;
- (id)localizedAccountTitleString;
- (id)_defaultAccountDescription;
- (BOOL)transitionsAfterInitialSetup;
- (BOOL)autodiscoverAccount;
- (id)localizedConfirmSaveUnvalidatedAccountMessageString;
- (id)localizedConfirmSaveUnvalidatedAccountTitleString;
- (id)autodiscoverySpecifiers;
- (id)newDefaultAccount;
- (id)accountFromSpecifier;
- (void)reloadAccount;
- (void)dealloc;
- (void)account:(id)arg1 wasAutoDiscovered:(BOOL)arg2 error:(id)arg3;
- (void)account:(id)arg1 isValid:(BOOL)arg2 validationError:(id)arg3;
- (id)accountSpecifiers;
- (void)finishedAccountSetup;
- (BOOL)validateAccount;
- (BOOL)haveEnoughValues;
- (void)setAccountProperty:(id)arg1 withSpecifier:(id)arg2;
- (id)accountPropertyWithSpecifier:(id)arg1;

@end
