/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iAdCore.framework/iAdCore
 */

@class <UIAlertViewDelegate>;

@interface ADAlertView : UIAlertView <UIAlertViewDelegate> {
    <UIAlertViewDelegate> *_chainedDelegate;
}

@property <UIAlertViewDelegate> * chainedDelegate;


- (void)setDelegate:(id)arg1;
- (void)setChainedDelegate:(id)arg1;
- (id)chainedDelegate;
- (void)alertViewsShouldCancelNotification:(id)arg1;
- (void)alertView:(id)arg1 willDismissWithButtonIndex:(int)arg2;
- (void)willPresentAlertView:(id)arg1;
- (void)didPresentAlertView:(id)arg1;
- (BOOL)alertViewShouldEnableFirstOtherButton:(id)arg1;
- (void)alertViewCancel:(id)arg1;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)dismissWithClickedButtonIndex:(int)arg1 animated:(BOOL)arg2;
- (void)show;
- (void)dealloc;

@end
