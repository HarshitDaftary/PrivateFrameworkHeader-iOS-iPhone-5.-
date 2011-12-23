/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSObject<MFDeviceDriver>, MFFont, MFBrush, NSColorStub, MFTransform, MFPalette, MFPen, MFPath;

@interface MFDeviceContext : NSObject <NSCopying> {
    NSObject<MFDeviceDriver> *m_driver;
    boolm_textUpdateCP;
    double m_miterLimit;
    int m_textHorizontalAlign;
    int m_textVerticalAlign;
    int m_textDirection;
    MFFont *m_font;
    NSColorStub *m_textColour;
    int m_textBreakExtra;
    int m_textBreakCount;
    int m_textCharExtra;
    NSColorStub *m_bkColour;
    int m_bkMode;
    struct CGPoint { 
        float x; 
        float y; 
    } m_brushOrg;
    struct CGPoint { 
        float x; 
        float y; 
    } m_penPos;
    int m_arcDirection;
    int m_polyFillMode;
    MFTransform *m_transform;
    MFPen *m_pen;
    MFBrush *m_brush;
    MFPalette *m_selectedPalette;
    int m_rop2;
    int m_stretchMode;
    MFPath *m_path;
}

+ (id)deviceContextWithDriver:(id)arg1;

- (void)setBrush:(id)arg1;
- (id)initWithDriver:(id)arg1;
- (bool)getTextUpdateCP;
- (void)setTextUpdateCP:(bool)arg1;
- (int)getTextHorizontalAlign;
- (void)setTextHorizontalAlign:(int)arg1;
- (void)setTextVerticalAlign:(int)arg1;
- (int)getTextDirection;
- (void)setTextDirection:(int)arg1;
- (int)getTextBreakExtra;
- (int)getTextBreakCount;
- (int)getTextCharExtra;
- (void)setTextCharExtra:(int)arg1;
- (int)getBkMode;
- (struct CGPoint { float x1; float x2; })getBrushOrg;
- (void)setBrushOrg:(struct CGPoint { float x1; float x2; })arg1;
- (int)getStretchBltMode;
- (void)setCurrentTransform:(id)arg1;
- (void)setSelectedPalette:(id)arg1;
- (void)setPen:(id)arg1;
- (double)getMiterLimit;
- (id)getCurrentTransform;
- (id)getPath;
- (id)getBrush;
- (id)getPen;
- (int)getRop2;
- (id)getFont;
- (int)getTextVerticalAlign;
- (int)getArcDirection;
- (struct CGPoint { float x1; float x2; })getPenPosition;
- (void)setPenPosition:(struct CGPoint { float x1; float x2; })arg1;
- (int)getPolyFillMode;
- (id)getSelectedPalette;
- (id)getTextColour;
- (id)getBkColour;
- (void)setTextColour:(id)arg1;
- (void)setTextJustification:(int)arg1 :(int)arg2;
- (void)setBkColour:(id)arg1;
- (void)setBkMode:(int)arg1;
- (void)setStretchBltMode:(int)arg1;
- (void)setArcDirection:(int)arg1;
- (void)setPolyFillMode:(int)arg1;
- (void)setRop2:(int)arg1;
- (void)setPath:(id)arg1;
- (void)setMiterLimit:(double)arg1;
- (void)setFont:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;

@end
