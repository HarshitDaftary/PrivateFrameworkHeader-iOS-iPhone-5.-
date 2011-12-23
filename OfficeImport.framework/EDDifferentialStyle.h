/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class EDProtection, EDContentFormat, EDBorders, EDAlignmentInfo, EDFont, EDFill;

@interface EDDifferentialStyle : NSObject <NSCopying> {
    EDAlignmentInfo *mAlignmentInfo;
    EDBorders *mBorders;
    EDFill *mFill;
    EDFont *mFont;
    EDProtection *mProtection;
    EDContentFormat *mContentFormat;
}

+ (id)differentialStyle;

- (void)setAlignmentInfo:(id)arg1;
- (id)protection;
- (void)setProtection:(id)arg1;
- (id)contentFormat;
- (void)setContentFormat:(id)arg1;
- (id)alignmentInfo;
- (id)borders;
- (void)setBorders:(id)arg1;
- (void)setFill:(id)arg1;
- (id)font;
- (id)fill;
- (void)setFont:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;

@end