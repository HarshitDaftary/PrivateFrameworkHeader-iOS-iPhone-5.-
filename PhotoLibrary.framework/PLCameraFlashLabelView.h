/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class NSString, UIImage;

@interface PLCameraFlashLabelView : UIView  {
    NSString *_text;
    UIImage *_image;
    BOOL _labelIsVisible;
    struct CGImage { } *_labelVisibleContents;
    struct CGImage { } *_labelHiddenContents;
    struct CGSize { 
        float width; 
        float height; 
    } _contentsSize;
    float backgroundAlpha;
}

@property(retain) NSString * text;
@property(retain) UIImage * image;
@property BOOL labelIsVisible;
@property struct CGSize { float x1; float x2; } contentsSize;
@property float backgroundAlpha;


- (void)setBackgroundAlpha:(float)arg1;
- (id)image;
- (void)sizeToFit;
- (BOOL)_shouldAnimatePropertyWithKey:(id)arg1;
- (id)text;
- (void)setText:(id)arg1;
- (void)setImage:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGSize { float x1; float x2; })contentsSize;
- (void)setContentsSize:(struct CGSize { float x1; float x2; })arg1;
- (BOOL)labelIsVisible;
- (void)setLabelIsVisible:(BOOL)arg1;
- (struct CGImage { }*)_newLabelImage:(BOOL)arg1;
- (float)backgroundAlpha;
- (void)_reloadLabelContents;
- (void)updateLabelContents;
- (void)dealloc;

@end
