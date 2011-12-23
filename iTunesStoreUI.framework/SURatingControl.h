/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSString, UIImageView, UILabel;

@interface SURatingControl : UIControl  {
    UIImageView *_backgroundImageView;
    UILabel *_explanationLabel;
    UIImageView *_foregroundImageView;
    struct CGSize { 
        float width; 
        float height; 
    } _hitPadding;
    float _starWidth;
    struct CGPoint { 
        float x; 
        float y; 
    } _trackingLastPoint;
    struct CGPoint { 
        float x; 
        float y; 
    } _trackingStartPoint;
    float _value;
}

@property(retain) NSString * explanationText;
@property float starWidth;
@property float value;


- (float)value;
- (void)setValue:(float)arg1;
- (BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (BOOL)_alwaysHandleScrollerMouseEvent;
- (void)sizeToFit;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })hitRect;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (BOOL)canHandleSwipes;
- (void)layoutSubviews;
- (void)dealloc;
- (void)setStarWidth:(float)arg1;
- (void)setExplanationText:(id)arg1;
- (void)setHitPadding:(struct CGSize { float x1; float x2; })arg1;
- (id)explanationText;
- (id)initWithBackgroundImage:(id)arg1 foregroundImage:(id)arg2;
- (float)starWidth;
- (void)_updateValueForPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)_newExplanationLabel;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_foregroundImageClipBounds;

@end
