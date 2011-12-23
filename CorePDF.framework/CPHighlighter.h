/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class CPTextLine, CPZone;

@interface CPHighlighter : NSObject  {
    CPZone *boundingZone;
    CPTextLine *textLine;
    struct CGColor { } *color;

  /* Error parsing encoded ivar type info: ^{CPPDFStyle=^{CGColor}^{CGColorSpace}^{CGColor}^{CGColorSpace}ffCCif@"CPFont"f^(CGPDFObject)^(CGPDFObject)^{CGColor}^{CPPDFStyle}} */
    struct CPPDFStyle { struct CGColor {} *x1; struct CGColorSpace {} *x2; struct CGColor {} *x3; struct CGColorSpace {} *x4; float x5; float x6; unsigned char x7; unsigned char x8; int x9; float x10; id x11; /* Warning: Unrecognized filer type: '"' using 'void*' */ void*x12; unsigned char x13; void*x14; void*x15; out in void*x16; void*x17; float x18; union { unsigned char x_19_1_1; void*x_19_1_2; void*x_19_1_3; void*x_19_1_4; void*x_19_1_5; bycopy unsigned int x_19_1_6/* : ? */; void*x_19_1_7; void*x_19_1_8; BOOL x_19_1_9; void*x_19_1_10; } *x19; union { unsigned char x_20_1_1; void*x_20_1_2; void*x_20_1_3; void*x_20_1_4; void*x_20_1_5; bycopy unsigned int x_20_1_6/* : ? */; void*x_20_1_7; void*x_20_1_8; BOOL x_20_1_9; void*x_20_1_10; } *x20; struct CGColor {} *x21; struct CPPDFStyle {} *x22; } *style;


  /* Error parsing encoded ivar type info: ^{CPPDFStyle=^{CGColor}^{CGColorSpace}^{CGColor}^{CGColorSpace}ffCCif@"CPFont"f^(CGPDFObject)^(CGPDFObject)^{CGColor}^{CPPDFStyle}} */
    struct CPPDFStyle { struct CGColor {} *x1; struct CGColorSpace {} *x2; struct CGColor {} *x3; struct CGColorSpace {} *x4; float x5; float x6; unsigned char x7; unsigned char x8; int x9; float x10; id x11; /* Warning: Unrecognized filer type: '"' using 'void*' */ void*x12; unsigned char x13; void*x14; void*x15; out in void*x16; void*x17; float x18; union { unsigned char x_19_1_1; void*x_19_1_2; void*x_19_1_3; void*x_19_1_4; void*x_19_1_5; bycopy unsigned int x_19_1_6/* : ? */; void*x_19_1_7; void*x_19_1_8; BOOL x_19_1_9; void*x_19_1_10; } *x19; union { unsigned char x_20_1_1; void*x_20_1_2; void*x_20_1_3; void*x_20_1_4; void*x_20_1_5; bycopy unsigned int x_20_1_6/* : ? */; void*x_20_1_7; void*x_20_1_8; BOOL x_20_1_9; void*x_20_1_10; } *x20; struct CGColor {} *x21; struct CPPDFStyle {} *x22; } *highlightedStyle;

}

@property struct CPPDFStyle { struct CGColor {} *x1; struct CGColorSpace {} *x2; struct CGColor {} *x3; struct CGColorSpace {} *x4; float x5; float x6; unsigned char x7; unsigned char x8; int x9; float x10; id x11; void*x12; unsigned char x13; void*x14; void*x15; out in void*x16; void*x17; float x18; union { unsigned char x_19_1_1; void*x_19_1_2; void*x_19_1_3; void*x_19_1_4; void*x_19_1_5; bycopy unsigned int x_19_1_6/* : ? */; void*x_19_1_7; void*x_19_1_8; BOOL x_19_1_9; void*x_19_1_10; } *x19; union { unsigned char x_20_1_1; void*x_20_1_2; void*x_20_1_3; void*x_20_1_4; void*x_20_1_5; bycopy unsigned int x_20_1_6/* : ? */; void*x_20_1_7; void*x_20_1_8; BOOL x_20_1_9; void*x_20_1_10; } *x20; struct CGColor {} *x21; struct CPPDFStyle {} *x22; }* highlightedStyle;
@property struct CPPDFStyle { struct CGColor {} *x1; struct CGColorSpace {} *x2; struct CGColor {} *x3; struct CGColorSpace {} *x4; float x5; float x6; unsigned char x7; unsigned char x8; int x9; float x10; id x11; void*x12; unsigned char x13; void*x14; void*x15; out in void*x16; void*x17; float x18; union { unsigned char x_19_1_1; void*x_19_1_2; void*x_19_1_3; void*x_19_1_4; void*x_19_1_5; bycopy unsigned int x_19_1_6/* : ? */; void*x_19_1_7; void*x_19_1_8; BOOL x_19_1_9; void*x_19_1_10; } *x19; union { unsigned char x_20_1_1; void*x_20_1_2; void*x_20_1_3; void*x_20_1_4; void*x_20_1_5; bycopy unsigned int x_20_1_6/* : ? */; void*x_20_1_7; void*x_20_1_8; BOOL x_20_1_9; void*x_20_1_10; } *x20; struct CGColor {} *x21; struct CPPDFStyle {} *x22; }* style;
@property(readonly) struct CGColor { }* color;

+ (BOOL)reconstructHighlightFor:(id)arg1;

- (void)highlight;
- (struct CPPDFStyle { struct CGColor {} *x1; struct CGColorSpace {} *x2; struct CGColor {} *x3; struct CGColorSpace {} *x4; float x5; float x6; unsigned char x7; unsigned char x8; int x9; float x10; id x11; float x12; union { unsigned char x_13_1_1; /* Warning: Unrecognized filer type: 'G' using 'void*' */ void*x_13_1_2; void*x_13_1_3; void*x_13_1_4; void*x_13_1_5; bycopy unsigned int x_13_1_6/* : ? */; void*x_13_1_7; void*x_13_1_8; BOOL x_13_1_9; void*x_13_1_10; } *x13; union { unsigned char x_14_1_1; void*x_14_1_2; void*x_14_1_3; void*x_14_1_4; void*x_14_1_5; bycopy unsigned int x_14_1_6/* : ? */; void*x_14_1_7; void*x_14_1_8; BOOL x_14_1_9; void*x_14_1_10; } *x14; struct CGColor {} *x15; struct CPPDFStyle {} *x16; }*)highlightedStyle;
     /* Encoded args for previous method: ^{CPPDFStyle=^{CGColor}^{CGColorSpace}^{CGColor}^{CGColorSpace}ffCCif@f^(CGPDFObject)^(CGPDFObject)^{CGColor}^{CPPDFStyle}}8@0:4 */

- (void)setHighlightedStyle:(struct CPPDFStyle { struct CGColor {} *x1; struct CGColorSpace {} *x2; struct CGColor {} *x3; struct CGColorSpace {} *x4; float x5; float x6; unsigned char x7; unsigned char x8; int x9; float x10; id x11; float x12; union { unsigned char x_13_1_1; /* Warning: Unrecognized filer type: 'G' using 'void*' */ void*x_13_1_2; void*x_13_1_3; void*x_13_1_4; void*x_13_1_5; bycopy unsigned int x_13_1_6/* : ? */; void*x_13_1_7; void*x_13_1_8; BOOL x_13_1_9; void*x_13_1_10; } *x13; union { unsigned char x_14_1_1; void*x_14_1_2; void*x_14_1_3; void*x_14_1_4; void*x_14_1_5; bycopy unsigned int x_14_1_6/* : ? */; void*x_14_1_7; void*x_14_1_8; BOOL x_14_1_9; void*x_14_1_10; } *x14; struct CGColor {} *x15; struct CPPDFStyle {} *x16; }*)arg1;
     /* Encoded args for previous method: v12@0:4^{CPPDFStyle=^{CGColor}^{CGColorSpace}^{CGColor}^{CGColorSpace}ffCCif@f^(CGPDFObject)^(CGPDFObject)^{CGColor}^{CPPDFStyle}}8 */

- (id)initWithTextLine:(id)arg1 inZone:(id)arg2 ofColor:(struct CGColor { }*)arg3;
- (struct CGColor { }*)color;
- (struct CPPDFStyle { struct CGColor {} *x1; struct CGColorSpace {} *x2; struct CGColor {} *x3; struct CGColorSpace {} *x4; float x5; float x6; unsigned char x7; unsigned char x8; int x9; float x10; id x11; float x12; union { unsigned char x_13_1_1; /* Warning: Unrecognized filer type: 'G' using 'void*' */ void*x_13_1_2; void*x_13_1_3; void*x_13_1_4; void*x_13_1_5; bycopy unsigned int x_13_1_6/* : ? */; void*x_13_1_7; void*x_13_1_8; BOOL x_13_1_9; void*x_13_1_10; } *x13; union { unsigned char x_14_1_1; void*x_14_1_2; void*x_14_1_3; void*x_14_1_4; void*x_14_1_5; bycopy unsigned int x_14_1_6/* : ? */; void*x_14_1_7; void*x_14_1_8; BOOL x_14_1_9; void*x_14_1_10; } *x14; struct CGColor {} *x15; struct CPPDFStyle {} *x16; }*)style;
     /* Encoded args for previous method: ^{CPPDFStyle=^{CGColor}^{CGColorSpace}^{CGColor}^{CGColorSpace}ffCCif@f^(CGPDFObject)^(CGPDFObject)^{CGColor}^{CPPDFStyle}}8@0:4 */

- (void)setStyle:(struct CPPDFStyle { struct CGColor {} *x1; struct CGColorSpace {} *x2; struct CGColor {} *x3; struct CGColorSpace {} *x4; float x5; float x6; unsigned char x7; unsigned char x8; int x9; float x10; id x11; float x12; union { unsigned char x_13_1_1; /* Warning: Unrecognized filer type: 'G' using 'void*' */ void*x_13_1_2; void*x_13_1_3; void*x_13_1_4; void*x_13_1_5; bycopy unsigned int x_13_1_6/* : ? */; void*x_13_1_7; void*x_13_1_8; BOOL x_13_1_9; void*x_13_1_10; } *x13; union { unsigned char x_14_1_1; void*x_14_1_2; void*x_14_1_3; void*x_14_1_4; void*x_14_1_5; bycopy unsigned int x_14_1_6/* : ? */; void*x_14_1_7; void*x_14_1_8; BOOL x_14_1_9; void*x_14_1_10; } *x14; struct CGColor {} *x15; struct CPPDFStyle {} *x16; }*)arg1;
     /* Encoded args for previous method: v12@0:4^{CPPDFStyle=^{CGColor}^{CGColorSpace}^{CGColor}^{CGColorSpace}ffCCif@f^(CGPDFObject)^(CGPDFObject)^{CGColor}^{CPPDFStyle}}8 */


@end
