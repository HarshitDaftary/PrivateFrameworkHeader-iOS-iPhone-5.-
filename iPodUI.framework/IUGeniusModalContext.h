/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

@class MPMediaPlaylist;

@interface IUGeniusModalContext : IUModalContext  {
    MPMediaPlaylist *_playlist;
    BOOL _shouldSwitchViewControllerContexts;
}

@property BOOL shouldSwitchViewControllerContexts;


- (BOOL)shouldSetEditing:(BOOL)arg1;
- (void)handleSelectionForIndex:(unsigned int)arg1 dataSource:(id)arg2;
- (id)newTabBarController;
- (void)configureNavigationItem:(id)arg1;
- (BOOL)beginsPlaybackAfterDismiss;
- (void)_presentAlertForError:(id)arg1;
- (id)_geniusPlaylist;
- (void)setShouldSwitchViewControllerContexts:(BOOL)arg1;
- (BOOL)shouldSwitchViewControllerContexts;
- (void)configureDataSource:(id)arg1;
- (id)_itemAtIndex:(unsigned int)arg1 forDataSource:(id)arg2;
- (BOOL)canHandleSelectionForIndex:(unsigned int)arg1 dataSource:(id)arg2;
- (id)copyQueryForQuery:(id)arg1;
- (int)allowedMediaTypesForMediaTypes:(int)arg1;
- (id)init;
- (void)dealloc;
- (void)_cancelAction:(id)arg1;

@end
