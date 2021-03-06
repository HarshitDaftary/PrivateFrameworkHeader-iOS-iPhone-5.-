/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

@class NSString;

@interface FoldingTransitionViewFaceParameters : NSObject  {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _sourceFrame;
    int _pivotEdge;
    float _skewDegrees;
    float _partialSkewDegrees;
    float _beginFractionFold;
    float _durationFractionFold;
    float _beginFractionUnfold;
    float _durationFractionUnfold;
    float _heightShrink;
    BOOL _doubleSided;
    BOOL _slowDarkeningFold;
    NSString *_timingFunction;
}

@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } sourceFrame;
@property int pivotEdge;
@property float skewDegrees;
@property float partialSkewDegrees;
@property float beginFractionFold;
@property float durationFractionFold;
@property float beginFractionUnfold;
@property float durationFractionUnfold;
@property float heightShrink;
@property BOOL doubleSided;
@property BOOL slowDarkeningFold;
@property(copy) NSString * timingFunction;


- (id)timingFunction;
- (void)setDoubleSided:(BOOL)arg1;
- (void)setTimingFunction:(id)arg1;
- (void)setSlowDarkeningFold:(BOOL)arg1;
- (BOOL)slowDarkeningFold;
- (BOOL)doubleSided;
- (void)setHeightShrink:(float)arg1;
- (float)heightShrink;
- (void)setDurationFractionUnfold:(float)arg1;
- (float)durationFractionUnfold;
- (void)setBeginFractionUnfold:(float)arg1;
- (float)beginFractionUnfold;
- (void)setDurationFractionFold:(float)arg1;
- (float)durationFractionFold;
- (void)setBeginFractionFold:(float)arg1;
- (float)beginFractionFold;
- (void)setPartialSkewDegrees:(float)arg1;
- (float)partialSkewDegrees;
- (void)setSkewDegrees:(float)arg1;
- (float)skewDegrees;
- (void)setPivotEdge:(int)arg1;
- (int)pivotEdge;
- (void)setSourceFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })sourceFrame;
- (id)init;
- (void)dealloc;

@end
