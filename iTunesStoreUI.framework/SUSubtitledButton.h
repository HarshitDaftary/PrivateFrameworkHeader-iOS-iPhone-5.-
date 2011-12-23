/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class UIColor, NSString, UILabel;

@interface SUSubtitledButton : UIButton  {
    struct __CFDictionary { } *_subtitleContentLookup;
    UILabel *_subtitleView;
}

@property(readonly) NSString * currentSubtitle;
@property(readonly) UIColor * currentSubtitleColor;
@property(readonly) UIColor * currentSubtitleShadowColor;
@property(readonly) UILabel * subtitleLabel;


- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })titleRectForContentRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)_subtitledContentForState:(unsigned int)arg1;
- (id)subtitleShadowColorForState:(unsigned int)arg1;
- (id)subtitleColorForState:(unsigned int)arg1;
- (id)subtitleForState:(unsigned int)arg1;
- (void)configureFromScriptButton:(id)arg1;
- (int)_subtitleLineBreakMode;
- (id)_subtitleFont;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })subtitleRectForContentRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)currentSubtitleColor;
- (id)currentSubtitleShadowColor;
- (void)_setupSubtitleView;
- (id)currentSubtitle;
- (void)setSubtitle:(id)arg1 forState:(unsigned int)arg2;
- (id)subtitleLabel;
- (void)setSubtitleShadowColor:(id)arg1 forState:(unsigned int)arg2;
- (void)setSubtitleColor:(id)arg1 forState:(unsigned int)arg2;

@end
