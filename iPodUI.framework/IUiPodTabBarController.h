/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

@class IUModalContext, NSArray, NSString, UIViewController, IUMoreListDelegateProxy;

@interface IUiPodTabBarController : UITabBarController <UINavigationControllerDelegate, ViewControllerArchiveNode> {
    IUModalContext *_modalContext;
    IUMoreListDelegateProxy *_moreListDelegateProxy;
    IUModalContext *_presentedModalContext;
    NSArray *_availableIdentifiers;
    unsigned int _allowsSearch : 1;
    int _archivedContextsToBeRestored;
    NSString *_initialIdentifier;
}

@property(readonly) NSArray * identifiers;
@property(retain) IUModalContext * modalContext;
@property(readonly) NSString * selectedIdentifier;
@property(readonly) UIViewController * topViewController;
@property BOOL allowsSearch;

+ (Class)_moreNavigationControllerClass;
+ (id)_newNavigationControllerWithRootContextIdentifier:(id)arg1;
+ (id)defaultIdentifiers;

- (void)tabBar:(id)arg1 willEndCustomizingItems:(id)arg2 changed:(BOOL)arg3;
- (void)_setSelectedViewController:(id)arg1;
- (id)moreNavigationController;
- (void)setViewControllers:(id)arg1 animated:(BOOL)arg2;
- (id)topViewController;
- (void)dismissModalViewControllerAnimated:(BOOL)arg1;
- (void)setAllowsSearch:(BOOL)arg1;
- (BOOL)allowsSearch;
- (void)switchToShortcutIdentifier:(id)arg1;
- (void)switchToAlbumContextForSpecifier:(id)arg1 behindTopController:(BOOL)arg2;
- (void)_delayedPopViewController:(id)arg1;
- (void)_reloadIPodViewControllers;
- (id)visibleCustomViewControllers;
- (id)_rawSelectedIdentifier;
- (BOOL)_canDisplayItemWithIdentifier:(id)arg1;
- (void)_fixMoreListNavigationBar;
- (BOOL)_shouldPushContextDuringSwitch:(id)arg1;
- (BOOL)_pushContextForSpecifier:(id)arg1 unlessMatchesFinalIdentifier:(id)arg2 animated:(BOOL)arg3;
- (void)_switchToContextBehindCurrentController:(id)arg1 withRootControllerIdentifier:(id)arg2;
- (id)_navigationControllerForIdentifier:(id)arg1 outIndex:(unsigned int*)arg2;
- (id)identifiers;
- (void)_setNavigationControllerDelegates:(id)arg1;
- (void)_updateControllersAvailable;
- (id)_copyTabBarOrdering;
- (id)initWithControllersWithAvailableIdentifiers:(id)arg1 initialIdentifier:(id)arg2 maximumNumberOfItems:(int)arg3;
- (id)initWithControllersWithAvailableIdentifiers:(id)arg1 initialIdentifier:(id)arg2;
- (void)_updateViewControllersModalContext;
- (void)presentModalContext:(id)arg1 animated:(BOOL)arg2;
- (void)switchToPlaylistContextForSpecifier:(id)arg1 behindTopController:(BOOL)arg2;
- (BOOL)restoreArchivedContexts:(id)arg1;
- (void)willRestoreArchivedContexts:(id)arg1;
- (id)copyArchivableContexts;
- (id)initWithControllersWithAvailableIdentifiers:(id)arg1;
- (void)_defaultMediaLibraryDidChangeNotification:(id)arg1;
- (void)setModalContext:(id)arg1;
- (void)switchToContext:(id)arg1 withRootControllerIdentifier:(id)arg2;
- (void)selectNextIdentifier;
- (id)modalContext;
- (void)selectControllerWithIdentifier:(id)arg1;
- (id)init;
- (void)dealloc;
- (id)selectedIdentifier;
- (void)saveOrderingToDefaults;

@end
