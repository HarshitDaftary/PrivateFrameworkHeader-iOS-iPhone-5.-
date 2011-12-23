/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class WDAContent, WDText, WDDocument;

@interface WDATextBox : NSObject  {
    WDText *mText;
    unsigned int mNextTextBoxId;
    boolmOle;
    WDDocument *mDocument;
    WDAContent *mParent;
}


- (unsigned long)nextTextBoxId;
- (void)setDocument:(id)arg1;
- (void)setNextTextBoxId:(unsigned long)arg1;
- (BOOL)isOle;
- (id)parent;
- (void)setOle:(BOOL)arg1;
- (void)setParent:(id)arg1;
- (id)document;
- (id)text;
- (void)setText:(id)arg1;
- (id)init;
- (void)dealloc;

@end
