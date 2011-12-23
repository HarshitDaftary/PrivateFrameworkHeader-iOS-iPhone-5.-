/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface GQDAffineGeometry : NSObject <GQDNameMappable> {
    struct CGSize { 
        float width; 
        float height; 
    } mNaturalSize;
    struct CGSize { 
        float width; 
        float height; 
    } mSize;
    BOOL mSizesLocked;
    BOOL mAspectRatioLocked;
    struct CGPoint { 
        float x; 
        float y; 
    } mPosition;
    float mAngle;
    BOOL mHorizontalFlip;
    BOOL mVerticalFlip;
    float mShearXAngle;
    float mShearYAngle;
}

+ (const struct StateSpec { int (**x1)(); char *x2; int x3; int x4; struct Action {} *x5; int (*x6)(); int (*x7)(); int (*x8)(); struct ActionFinder {} *x9; }*)stateForReading;
+ (void)transformRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 transform:(id)arg2 upperLeft:(struct CGPoint { float x1; float x2; }*)arg3 lowerLeft:(struct CGPoint { float x1; float x2; }*)arg4 lowerRight:(struct CGPoint { float x1; float x2; }*)arg5 upperRight:(struct CGPoint { float x1; float x2; }*)arg6;
+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })boundsOfTransformedRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 transform:(id)arg2;

- (BOOL)horizontalFlip;
- (void)setPosition:(struct CGPoint { float x1; float x2; })arg1;
- (float)angle;
- (void)setAngle:(float)arg1;
- (struct CGPoint { float x1; float x2; })position;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })transform;
- (void)setSize:(struct CGSize { float x1; float x2; })arg1;
- (struct CGSize { float x1; float x2; })size;
- (BOOL)sizesLocked;
- (BOOL)aspectRatioLocked;
- (BOOL)verticalFlip;
- (float)shearXAngle;
- (float)shearYAngle;
- (struct CGPoint { float x1; float x2; })nonrotatedPosition;
- (int)readAttributesFromReader:(struct _xmlTextReader { }*)arg1;
- (struct CGSize { float x1; float x2; })sizeOfBoundingBox;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })transformHasVFlip:(BOOL)arg1 vFlip:(BOOL)arg2 hasHFlip:(BOOL)arg3 hFlip:(BOOL)arg4;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })naturalBounds;
- (void)setNaturalSize:(struct CGSize { float x1; float x2; })arg1;
- (struct CGSize { float x1; float x2; })naturalSize;

@end
