/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@class UIPDFSelection, NSString, UIPDFDocument;

@interface UIPDFPage : NSObject  {
    struct CGPDFPage { } *_cgPage;
    unsigned int _pageNumber;
    NSString *_stringInReadingOrder;
    UIPDFSelection *_selection;
    UIPDFDocument *_document;
    unsigned int _pageIndex;
}

@property(readonly) struct CGRect { struct CGPoint { float x; float y; } origin; struct CGSize { float width; float height; } size; } cropBox;
@property(readonly) UIPDFDocument * document;
@property(retain) UIPDFSelection * selection;
@property(readonly) unsigned int pageIndex;
@property(readonly) unsigned int pageNumber;
@property(readonly) struct CGPDFPage { }* CGPage;


- (void)drawInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 context:(struct CGContext { }*)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })cropBox;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })cropBoxAccountForRotation;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })mediaBox;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })mediaBoxAccountForRotation;
- (struct CGPDFPage { }*)CGPage;
- (unsigned long)cfCompareFlagsFromNSOptions:(unsigned int)arg1;
- (id)initWithCGPDFPage:(struct CGPDFPage { }*)arg1;
- (unsigned int)pageNumber;
- (id)findString:(id)arg1 fromSelection:(id)arg2 options:(unsigned int)arg3;
- (unsigned int)pageIndex;
- (unsigned int)rotation;
- (id)document;
- (void)setSelection:(id)arg1;
- (id)selection;
- (struct CGSize { float x1; float x2; })size;
- (id)string;
- (void)dealloc;

@end
