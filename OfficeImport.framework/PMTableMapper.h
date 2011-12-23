/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OADOrientedBounds, CMTableGridInfo, OADTable, CMDrawableStyle;

@interface PMTableMapper : CMMapper  {
    OADTable *mTable;
    CMDrawableStyle *mStyle;
    CMTableGridInfo *mGrid;
    OADOrientedBounds *mBounds;
}


- (id)defaultCellFillWithState:(id)arg1;
- (void)mapTablePropertiesWithState:(id)arg1;
- (void)mapColumnGridAt:(id)arg1 withState:(id)arg2;
- (id)initWithOadTable:(id)arg1 bounds:(id)arg2 parent:(id)arg3;
- (float)columnWidthAtIndex:(int)arg1 state:(id)arg2;
- (id)tableBorderStyle;
- (id)defaultCellFillForRow:(unsigned int)arg1 withState:(id)arg2;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (id)grid;
- (id)cellStyle;
- (unsigned int)rowCount;
- (void)dealloc;

@end
