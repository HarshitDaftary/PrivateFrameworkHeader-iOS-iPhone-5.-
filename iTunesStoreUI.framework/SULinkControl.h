/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class UILabel;

@interface SULinkControl : UIControl  {
    UILabel *_label;
    BOOL _shouldDrawUnderline;
    unsigned int _sizeIsDirty : 1;
    int _style;
}

@property BOOL shouldDrawUnderline;


- (void)_updateLabel;
- (void)setHighlighted:(BOOL)arg1;
- (void)setStyle:(int)arg1;
- (void)sizeToFit;
- (void)setText:(id)arg1;
- (void)layoutSubviews;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (BOOL)shouldDrawUnderline;
- (void)setShouldDrawUnderline:(BOOL)arg1;
- (id)_label;

@end
