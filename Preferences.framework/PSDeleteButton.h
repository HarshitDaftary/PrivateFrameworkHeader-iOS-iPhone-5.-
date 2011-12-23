/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class UIButton;

@interface PSDeleteButton : UIView <PreferencesTableCustomView> {
    UIButton *_deleteButton;
}

+ (float)deleteButtonHeight;

- (float)preferredHeightForWidth:(float)arg1;
- (void)setButtonTitle:(id)arg1;
- (id)initWithSpecifier:(id)arg1;
- (void)addButtonTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned int)arg3;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

@end
