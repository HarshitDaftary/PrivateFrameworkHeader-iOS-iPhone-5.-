/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OCPPackagePart, NSDictionary;

@interface OAVShapeManager : NSObject  {
    struct _xmlNode { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; } *mShape;
    unsigned short mType;
    OCPPackagePart *mPackagePart;
    NSDictionary *mShapeStyle;
    NSDictionary *mTextBoxStyle;
}


- (struct OAVTextBoxInsets { float x1; float x2; float x3; float x4; })textInsets;
- (id)imageFillTitle;
- (id)strokeFillType;
- (float)strokeFgAlpha;
- (float)strokeWidth;
- (float)strokeMiterLimit;
- (id)strokeCompoundType;
- (id)strokeDashStyle;
- (id)strokeCapStyle;
- (id)strokeJoinStyle;
- (id)strokeStartArrowType;
- (id)strokeStartArrowWidth;
- (id)strokeStartArrowLength;
- (id)strokeEndArrowType;
- (id)strokeEndArrowWidth;
- (id)strokeEndArrowLength;
- (id)shadowType;
- (BOOL)autoInsets;
- (BOOL)isFillOK;
- (BOOL)isStrokeOK;
- (BOOL)isShadowOK;
- (id)textBodyRects;
- (id)initWithShape:(struct _xmlNode { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; }*)arg1 type:(unsigned short)arg2 packagePart:(id)arg3;
- (BOOL)isImage;
- (BOOL)isWordArt;
- (float)shadowAlpha;
- (struct CGPoint { float x1; float x2; })shadowOffsets;
- (id)imageRelId;
- (id)movieRelId;
- (id)fillType;
- (float)fillAngle;
- (id)imageFillId;
- (float)fillFgAlpha;
- (float)fillBgAlpha;
- (float)fillFocus;
- (id)fillGradientColors;
- (id)fillFgColor;
- (BOOL)isStroked;
- (id)strokeFgColor;
- (id)fillBgColor;
- (id)strokeBgColor;
- (BOOL)isFilled;
- (id)textLayoutFlow;
- (id)textAltLayoutFlow;
- (BOOL)fitShapeToText;
- (id)textWrapStyle;
- (id)textAnchor;
- (id)limo;
- (BOOL)isShadowed;
- (id)textRotation;
- (id)packagePart;
- (id)path;
- (struct _xmlNode { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; }*)shape;
- (unsigned short)type;
- (id)shadowColor;
- (void)dealloc;

@end
