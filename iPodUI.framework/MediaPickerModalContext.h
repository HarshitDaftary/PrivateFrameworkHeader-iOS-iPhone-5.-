/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

@class NSMutableSet, NSString, IUiPodTabBarController, <IUModalContextDelegate><MediaPickerModalContextDelegate>, NSMutableArray;

@interface MediaPickerModalContext : IUModalContext  {
    NSString *_prompt;
    NSMutableArray *_pickedTracks;
    int _mediaTypes;
    IUiPodTabBarController *_tabBarController;
    NSMutableSet *_pickedDataSourceActionRowSet;
    NSMutableSet *_pickedPersistentIDSet;
    unsigned int _allowsPickingMultipleItems : 1;
    unsigned int _wantsNavigationButtons : 1;
}

@property BOOL allowsPickingMultipleItems;
@property BOOL wantsNavigationButtons;
@property(copy) NSString * prompt;
@property <IUModalContextDelegate><MediaPickerModalContextDelegate> * delegate;


- (void)_doneAction:(id)arg1;
- (id)viewController;
- (void)setPrompt:(id)arg1;
- (id)prompt;
- (void)orderOut;
- (BOOL)wantsNavigationButtons;
- (void)setWantsNavigationButtons:(BOOL)arg1;
- (void)_addTracks:(id)arg1 ignoringPickedEntities:(BOOL)arg2;
- (id)_availableIdentifiersForMediaTypes:(int)arg1;
- (void)_addTrackAtIndex:(unsigned int)arg1 dataSource:(id)arg2;
- (void)_addTracksForActionRowAtIndex:(unsigned int)arg1 dataSource:(id)arg2;
- (BOOL)hideIndexBar;
- (void)configureCell:(id)arg1 forIndex:(unsigned int)arg2 dataSource:(id)arg3;
- (void)handleSelectionForIndex:(unsigned int)arg1 dataSource:(id)arg2;
- (void)configureNavigationItem:(id)arg1;
- (BOOL)canHandleSelectionForIndex:(unsigned int)arg1 dataSource:(id)arg2;
- (id)copyQueryForQuery:(id)arg1;
- (void)dismissWithSuccess:(BOOL)arg1;
- (void)dealloc;
- (void)setAllowsPickingMultipleItems:(BOOL)arg1;
- (BOOL)allowsPickingMultipleItems;
- (id)initWithMediaTypes:(int)arg1;
- (void)_cancelAction:(id)arg1;

@end
