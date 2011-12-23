/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface GQDTTableModel : NSObject <GQDNameMappable> {
    unsigned short mColumnCount;
    unsigned short mRowCount;
    struct __CFString { } *mName;
    BOOL mNameVisible;
    struct __CFArray { } *mColumnWidths;
    struct __CFArray { } *mRowHeights;
    struct __CFArray { } *mColumnVisibilities;
    struct __CFArray { } *mRowVisibilities;
    unsigned short mHeaderRowCount;
    unsigned short mHeaderColumnCount;
    unsigned short mFooterRowCount;
    struct __CFArray { } *mCells;
    struct __CFArray { } *mColumnGroupDisplayTypes;
    int mNumGroupLevels;
}

+ (const struct StateSpec { int (**x1)(); char *x2; int x3; int x4; struct Action {} *x5; int (*x6)(); int (*x7)(); int (*x8)(); struct ActionFinder {} *x9; }*)stateForReading;

- (id)cellAt:(unsigned short)arg1;
- (unsigned short)headerRowCount;
- (unsigned short)rowCount;
- (struct __CFArray { }*)cells;
- (unsigned short)columnCount;
- (struct __CFString { }*)name;
- (BOOL)isNameVisible;
- (float)widthForColumn:(unsigned short)arg1;
- (float)heightForRow:(unsigned short)arg1;
- (bool)visibilityForRow:(unsigned short)arg1;
- (int)typeOfVectorAlongGridline:(unsigned short)arg1 offset:(unsigned short)arg2 length:(unsigned short)arg3 vertical:(BOOL)arg4;
- (BOOL)hasGroupDisplayType:(unsigned short)arg1 level:(int)arg2 displayType:(int*)arg3 isTypeVisible:(BOOL*)arg4;
- (unsigned short)firstVisibleColumn;
- (int)numGroupLevels;
- (void)setNumGroupLevels:(int)arg1;
- (int)readAttributesForModel:(struct _xmlTextReader { }*)arg1;
- (int)readAttributesForGrid:(struct _xmlTextReader { }*)arg1;
- (int)addColumnWidthFrom:(struct _xmlTextReader { }*)arg1;
- (int)addRowHeightFrom:(struct _xmlTextReader { }*)arg1;
- (int)addGroupLevelsFrom:(struct _xmlTextReader { }*)arg1;
- (bool)visibilityForColumn:(unsigned short)arg1;
- (void)setCells:(struct __CFArray { }*)arg1;
- (unsigned short)headerColumnCount;
- (unsigned short)footerRowCount;
- (void)dealloc;

@end
