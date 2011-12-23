/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

@class UIBarButtonItem, UIImageView, UIImage;

@interface IUVideoPlaybackViewController : IUPlaybackViewController  {
    UIBarButtonItem *_scaleModeButton;
    double _currentTimeOnAppear;
    double _restoredTimeOnAppear;
    UIImageView *_fillerImageView;
    unsigned int _fakeIsCurrentControllerToEnableOrientationNotifications : 1;
    unsigned int _firstVideoFrameDisplayed : 1;
    unsigned int _isDisappearingAndWillEndPlayback : 1;
    unsigned int _showControlsWithFirstFrame : 1;
}

@property(retain) UIImage * fillerImage;
@property double currentTimeOnAppear;
@property double restoredTimeOnAppear;
@property BOOL showControlsWithFirstFrame;
@property(readonly) UIImage * videoSnapshot;


- (void)_endPlayback;
- (void)videoController:(id)arg1 scaleModeDidChange:(unsigned int)arg2;
- (void)viewControllerRequestsExit:(id)arg1;
- (id)createViewControllerForItem:(id)arg1 interfaceOrientation:(int)arg2 reusingController:(id)arg3;
- (BOOL)videoController:(id)arg1 tappedButtonPart:(unsigned int)arg2;
- (BOOL)_isSupportedInterfaceOrientation:(int)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (id)title;
- (void)setOrientation:(int)arg1 animated:(BOOL)arg2;
- (double)restoredTimeOnAppear;
- (double)currentTimeOnAppear;
- (id)fillerImage;
- (void)_scaleModeButtonAction:(id)arg1;
- (BOOL)showControlsWithFirstFrame;
- (id)videoSnapshot;
- (BOOL)shouldArchiveCreateVideoSnapshot;
- (void)_endOrPausePlayback;
- (void)_endPlaybackByPausing;
- (void)_removeFillerImageView;
- (BOOL)requireHUDVisible;
- (BOOL)_usingPhoneVideoOutMode;
- (void)_showFillerImageView;
- (void)_serverDiedNotification:(id)arg1;
- (void)_firstVideoFrameDisplayedNotification:(id)arg1;
- (void)_validateInterfaceOrientation:(int*)arg1;
- (BOOL)isCurrentController;
- (int)modalTransition;
- (void)setShowControlsWithFirstFrame:(BOOL)arg1;
- (void)setRestoredTimeOnAppear:(double)arg1;
- (void)setCurrentTimeOnAppear:(double)arg1;
- (void)setFillerImage:(id)arg1;
- (id)_scaleModeButton;
- (BOOL)restoreArchivedContexts:(id)arg1;
- (id)copyArchivableContexts;
- (void)exitPlayerAnimated:(BOOL)arg1;
- (id)init;
- (void)dealloc;
- (void)_applicationDidEnterBackgroundNotification:(id)arg1;

@end
