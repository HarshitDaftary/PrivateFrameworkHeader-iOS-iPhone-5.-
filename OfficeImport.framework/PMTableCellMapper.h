/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OADTableCell, CMStyle;

@interface PMTableCellMapper : CMMapper  {
    OADTableCell *mCell;
    CMStyle *mStyle;
    int mColIndex;
    unsigned int mRowIndex;
    float mWidth;
}


- (id)initWithOadTableCell:(id)arg1 rowIndex:(unsigned int)arg2 columnIndex:(int)arg3 parent:(id)arg4;
- (float)widthWithState:(id)arg1;
- (void)mapBordersWithState:(id)arg1;
- (void)mapCellPropertiesWithState:(id)arg1 textAnchor:(int)arg2;
- (id)rowMapper;
- (id)tableMapper;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (void)dealloc;

@end
