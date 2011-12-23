/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
 */

@class NSString;

@interface DDSendMailAction : DDAction <MFMailComposeViewControllerDelegate> {
    NSString *_recipient;
}


- (int)interactionType;
- (id)localizedName;
- (id)viewController;
- (id)initWithURL:(id)arg1 result:(struct __DDResult { }*)arg2 context:(id)arg3;
- (void)perform;
- (void)dealloc;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3;

@end
