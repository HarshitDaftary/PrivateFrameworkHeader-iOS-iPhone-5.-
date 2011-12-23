/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class <SUComposeReviewViewDelegate>, SUComposeReviewHeaderView, UIControl, UILabel, SULoadingView, UIScrollView, SUTextContentView, ISReview;

@interface SUComposeReviewView : UIView <SUComposeReviewHeaderDelegate, UITextContentViewDelegate> {
    int _currentBodyLength;
    <SUComposeReviewViewDelegate> *_delegate;
    SUComposeReviewHeaderView *_headerView;
    unsigned int _loading : 1;
    SULoadingView *_loadingView;
    ISReview *_review;
    UIControl *_reviewCountControl;
    UILabel *_reviewCountLabel;
    UIScrollView *_scrollView;
    int _style;
    SUTextContentView *_textContentView;
}

@property(readonly) int composeReviewStyle;
@property <SUComposeReviewViewDelegate> * delegate;
@property(getter=isLoading) BOOL loading;
@property float rating;
@property(getter=isValid,readonly) BOOL valid;


- (void)setLoading:(BOOL)arg1;
- (void)setRating:(float)arg1;
- (float)rating;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setDelegate:(id)arg1;
- (void)textContentViewDidChange:(id)arg1;
- (BOOL)textContentView:(id)arg1 shouldChangeTextInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 replacementText:(id)arg3;
- (void)textContentView:(id)arg1 didChangeSize:(struct CGSize { float x1; float x2; })arg2;
- (BOOL)textContentView:(id)arg1 shouldChangeSizeForContentSize:(struct CGSize { float x1; float x2; })arg2;
- (BOOL)textContentView:(id)arg1 shouldScrollForPendingContentSize:(struct CGSize { float x1; float x2; })arg2;
- (BOOL)isLoading;
- (void)_updateContentSize;
- (BOOL)isValid;
- (id)delegate;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 style:(int)arg2;
- (void)reloadData;
- (void)dealloc;
- (id)copyReview;
- (void)composeHeaderViewValuesDidChange:(id)arg1;
- (void)composeHeaderViewValidityDidChange:(id)arg1;
- (void)_reviewCountAction:(id)arg1;
- (int)composeReviewStyle;
- (BOOL)_isReviewTextOptional;
- (void)_delayedUpdateReviewLength;
- (id)_reviewPlaceholder;
- (void)_showLoadingView;
- (id)_reviewCountString;
- (id)_body;
- (void)_layoutComposeView;
- (void)_layoutLoadingView;
- (void)_keyboardVisibilityDidChangeNotification:(id)arg1;
- (void)_showComposeView;
- (void)setReview:(id)arg1;

@end
