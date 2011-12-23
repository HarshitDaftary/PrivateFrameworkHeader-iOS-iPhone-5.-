/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OADOrientedBounds, ODDDiagram, OADGroup, OADDrawingTheme, NSMutableArray, OADShapeStyle;

@interface ODIState : NSObject  {
    ODDDiagram *mDiagram;
    OADOrientedBounds *mDiagramOrientedBounds;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } mLogicalBounds;
    float mScale;
    OADGroup *mGroup;
    NSMutableArray *mPresentationNames;
    NSMutableArray *mDefaultStyleLabelNames;
    int mPointCount;
    int mPointIndex;
    OADShapeStyle *mTextStyle;
    OADDrawingTheme *mDrawingTheme;
}


- (void)setDefaultStyleLabelName:(id)arg1 forPointType:(int)arg2;
- (id)presentationNameForPointType:(int)arg1;
- (int)pointCount;
- (int)pointIndex;
- (id)defaultStyleLabelNameForPointType:(int)arg1;
- (id)initWithDiagram:(id)arg1 group:(id)arg2 drawingTheme:(id)arg3;
- (void)setPointCount:(int)arg1;
- (void)setPointIndex:(int)arg1;
- (id)diagramOrientedBounds;
- (void)setLogicalBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 maintainAspectRatio:(BOOL)arg2;
- (void)setPresentationName:(id)arg1 forPointType:(int)arg2;
- (id)diagram;
- (void)setTextStyle:(id)arg1;
- (id)textStyle;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })logicalBounds;
- (void)setLogicalBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)drawingTheme;
- (id)group;
- (float)scale;
- (void)setGroup:(id)arg1;
- (void)dealloc;

@end
