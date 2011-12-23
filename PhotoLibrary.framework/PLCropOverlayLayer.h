/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class UIView;

@interface PLCropOverlayLayer : UIView  {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _cropRect;
    UIView *_topOpaqueLayer;
    UIView *_bottomOpaqueLayer;
    UIView *_rightOpaqueLayer;
    UIView *_leftOpaqueLayer;
    UIView *_topEdgeLayer;
    UIView *_bottomEdgeLayer;
    UIView *_rightEdgeLayer;
    UIView *_leftEdgeLayer;
    UIView *_topLeftCornerLayer;
    UIView *_topRightCornerLayer;
    UIView *_bottomRightCornerLayer;
    UIView *_bottomLeftCornerLayer;
    UIView *_topThirdLayer;
    UIView *_bottomThirdLayer;
    UIView *_rightThirdLayer;
    UIView *_leftThirdLayer;
    UIView *_straightenHorizontalLayers[6];
    UIView *_straightenVerticalLayers[6];
    unsigned int _showsCropRect : 1;
    unsigned int _showThirdsGrid : 1;
    unsigned int _showsStraightenGrid : 1;
    unsigned int _thirdsVisible : 1;
    unsigned int _highlighted : 1;
}


- (BOOL)isHighlighted;
- (void)setHighlighted:(BOOL)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)showsStraightenGrid;
- (void)showStraightenGrid:(BOOL)arg1;
- (BOOL)showsThirdsGrid;
- (void)showThirdsGrid:(BOOL)arg1;
- (BOOL)showsCropRect;
- (void)setShowsCropRect:(BOOL)arg1;
- (void)_updateLayout;
- (void)_updateCropRectVisibility;
- (void)setCropRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })cropRect;
- (void)dealloc;

@end
