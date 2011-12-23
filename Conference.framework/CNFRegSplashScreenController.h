/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Conference.framework/Conference
 */

@class CNFRegController, CNFRegLearnMoreButton, UIBarButtonItem, <CNFRegFirstRunDelegate>;

@interface CNFRegSplashScreenController : PSViewController <CNFRegFirstRunExperience> {
    CNFRegLearnMoreButton *_learnMoreButton;
    <CNFRegFirstRunDelegate> *_delegate;
    CNFRegController *_regController;
}

@property BOOL showSplash;
@property(retain) UIBarButtonItem * customRightButton;
@property(retain) UIBarButtonItem * customLeftButton;
@property(readonly) int currentAppearanceStyle;
@property(retain) CNFRegController * regController;
@property <CNFRegFirstRunDelegate> * delegate;


- (void)setDelegate:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (id)delegate;
- (id)init;
- (void)dealloc;
- (float)_startingYOffset;
- (id)splashImage;
- (id)_shadowedLabelWithFont:(id)arg1 text:(id)arg2;
- (void)_learnMorePressed:(id)arg1;
- (void)_getStartedPressed:(id)arg1;
- (id)_shadowLabelColor;
- (id)customRightButton;
- (void)setCustomRightButton:(id)arg1;
- (id)customLeftButton;
- (int)currentAppearanceStyle;
- (id)initWithRegController:(id)arg1 account:(id)arg2;
- (void)setCustomLeftButton:(id)arg1;
- (void)setRegController:(id)arg1;
- (void)willBecomeActive;
- (id)regController;

@end
