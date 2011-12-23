/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSDate, WDText, WDBorder, WDDocument, NSMutableArray;

@interface WDSection : NSObject  {
    unsigned int mOriginal : 1;
    unsigned int mTracked : 1;
    unsigned int mResolved : 1;
    WDDocument *mDocument;
    WDText *mText;
    WDText *mEvenPageHeader;
    WDText *mOddPageHeader;
    WDText *mFirstPageHeader;
    WDText *mEvenPageFooter;
    WDText *mOddPageFooter;
    WDText *mFirstPageFooter;
    struct { 
        WDBorder *topBorder; 
        WDBorder *leftBorder; 
        WDBorder *bottomBorder; 
        WDBorder *rightBorder; 
        int breakType; 
        unsigned int pageWidth; 
        unsigned int pageHeight; 
        unsigned int pageScale; 
        int pageOrientation; 
        unsigned int leftMargin; 
        unsigned int rightMargin; 
        unsigned int topMargin; 
        unsigned int bottomMargin; 
        unsigned int headerMargin; 
        unsigned int footerMargin; 
        unsigned int gutterMargin; 
        int borderDepth; 
        int borderDisplay; 
        int borderOffset; 
        short lineNumberStart; 
        unsigned short lineNumberIncrement; 
        short lineNumberDistance; 
        int lineNumberRestart; 
        int pageNumberFormat; 
        unsigned short pageNumberStart; 
        int chapterNumberSeparator; 
        NSMutableArray *columnWidths; 
        NSMutableArray *columnSpaces; 
        unsigned short columnCount; 
        int columnSpace; 
        int verticalJustification; 
        unsigned short indexToAuthorIDOfFormattingChange; 
        NSDate *formattingChangeDate; 
        unsigned int topBorderOverridden : 1; 
        unsigned int leftBorderOverridden : 1; 
        unsigned int bottomBorderOverridden : 1; 
        unsigned int rightBorderOverridden : 1; 
        unsigned int breakTypeOverridden : 1; 
        unsigned int pageWidthOverridden : 1; 
        unsigned int pageHeightOverridden : 1; 
        unsigned int pageScaleOverridden : 1; 
        unsigned int pageOrientationOverridden : 1; 
        unsigned int leftMarginOverridden : 1; 
        unsigned int rightMarginOverridden : 1; 
        unsigned int topMarginOverridden : 1; 
        unsigned int bottomMarginOverridden : 1; 
        unsigned int headerMarginOverridden : 1; 
        unsigned int footerMarginOverridden : 1; 
        unsigned int gutterMarginOverridden : 1; 
        unsigned int borderDepthOverridden : 1; 
        unsigned int borderDisplayOverridden : 1; 
        unsigned int borderOffsetOverridden : 1; 
        unsigned int lineNumberStartOverridden : 1; 
        unsigned int lineNumberIncrementOverridden : 1; 
        unsigned int lineNumberDistanceOverridden : 1; 
        unsigned int lineNumberRestartOverridden : 1; 
        unsigned int pageNumberFormatOverridden : 1; 
        unsigned int pageNumberStartOverridden : 1; 
        unsigned int pageNumberRestart : 1; 
        unsigned int pageNumberRestartOverridden : 1; 
        unsigned int chapterNumberSeparatorOverridden : 1; 
        unsigned int columnCountOverridden : 1; 
        unsigned int columnsEqualWidth : 1; 
        unsigned int columnsEqualWidthOverridden : 1; 
        unsigned int columnSpaceOverridden : 1; 
        unsigned int verticalJustificationOverridden : 1; 
        unsigned int titlePage : 1; 
        unsigned int titlePageOverridden : 1; 
        unsigned int formattingChanged : 1; 
        unsigned int formattingChangedOverridden : 1; 
        unsigned int indexToAuthorIDOfFormattingChangeOverridden : 1; 
        unsigned int formattingChangeDateOverridden : 1; 
    } mOriginalProperties;
    struct { 
        WDBorder *topBorder; 
        WDBorder *leftBorder; 
        WDBorder *bottomBorder; 
        WDBorder *rightBorder; 
        int breakType; 
        unsigned int pageWidth; 
        unsigned int pageHeight; 
        unsigned int pageScale; 
        int pageOrientation; 
        unsigned int leftMargin; 
        unsigned int rightMargin; 
        unsigned int topMargin; 
        unsigned int bottomMargin; 
        unsigned int headerMargin; 
        unsigned int footerMargin; 
        unsigned int gutterMargin; 
        int borderDepth; 
        int borderDisplay; 
        int borderOffset; 
        short lineNumberStart; 
        unsigned short lineNumberIncrement; 
        short lineNumberDistance; 
        int lineNumberRestart; 
        int pageNumberFormat; 
        unsigned short pageNumberStart; 
        int chapterNumberSeparator; 
        NSMutableArray *columnWidths; 
        NSMutableArray *columnSpaces; 
        unsigned short columnCount; 
        int columnSpace; 
        int verticalJustification; 
        unsigned short indexToAuthorIDOfFormattingChange; 
        NSDate *formattingChangeDate; 
        unsigned int topBorderOverridden : 1; 
        unsigned int leftBorderOverridden : 1; 
        unsigned int bottomBorderOverridden : 1; 
        unsigned int rightBorderOverridden : 1; 
        unsigned int breakTypeOverridden : 1; 
        unsigned int pageWidthOverridden : 1; 
        unsigned int pageHeightOverridden : 1; 
        unsigned int pageScaleOverridden : 1; 
        unsigned int pageOrientationOverridden : 1; 
        unsigned int leftMarginOverridden : 1; 
        unsigned int rightMarginOverridden : 1; 
        unsigned int topMarginOverridden : 1; 
        unsigned int bottomMarginOverridden : 1; 
        unsigned int headerMarginOverridden : 1; 
        unsigned int footerMarginOverridden : 1; 
        unsigned int gutterMarginOverridden : 1; 
        unsigned int borderDepthOverridden : 1; 
        unsigned int borderDisplayOverridden : 1; 
        unsigned int borderOffsetOverridden : 1; 
        unsigned int lineNumberStartOverridden : 1; 
        unsigned int lineNumberIncrementOverridden : 1; 
        unsigned int lineNumberDistanceOverridden : 1; 
        unsigned int lineNumberRestartOverridden : 1; 
        unsigned int pageNumberFormatOverridden : 1; 
        unsigned int pageNumberStartOverridden : 1; 
        unsigned int pageNumberRestart : 1; 
        unsigned int pageNumberRestartOverridden : 1; 
        unsigned int chapterNumberSeparatorOverridden : 1; 
        unsigned int columnCountOverridden : 1; 
        unsigned int columnsEqualWidth : 1; 
        unsigned int columnsEqualWidthOverridden : 1; 
        unsigned int columnSpaceOverridden : 1; 
        unsigned int verticalJustificationOverridden : 1; 
        unsigned int titlePage : 1; 
        unsigned int titlePageOverridden : 1; 
        unsigned int formattingChanged : 1; 
        unsigned int formattingChangedOverridden : 1; 
        unsigned int indexToAuthorIDOfFormattingChangeOverridden : 1; 
        unsigned int formattingChangeDateOverridden : 1; 
    } mTrackedProperties;
}


- (unsigned long)pageScale;
- (BOOL)isPageScaleOverridden;
- (BOOL)isLastColumnWidthDefined;
- (void)setPageScale:(unsigned long)arg1;
- (id)oddPageHeader;
- (id)evenPageHeader;
- (id)firstPageHeader;
- (id)oddPageFooter;
- (id)evenPageFooter;
- (id)firstPageFooter;
- (void)setBreakType:(int)arg1;
- (void)setPageWidth:(unsigned long)arg1;
- (void)setPageHeight:(unsigned long)arg1;
- (void)setPageOrientation:(int)arg1;
- (void)setGutterMargin:(unsigned long)arg1;
- (void)setBorderDepth:(int)arg1;
- (void)setBorderDisplay:(int)arg1;
- (void)setBorderOffset:(int)arg1;
- (void)setLineNumberStart:(short)arg1;
- (void)setLineNumberIncrement:(unsigned short)arg1;
- (void)setLineNumberDistance:(short)arg1;
- (void)setLineNumberRestart:(int)arg1;
- (void)setPageNumberFormat:(int)arg1;
- (void)setPageNumberStart:(unsigned short)arg1;
- (void)setPageNumberRestart:(BOOL)arg1;
- (void)setChapterNumberSeparator:(int)arg1;
- (void)setColumnsEqualWidth:(BOOL)arg1;
- (BOOL)isColumnCountOverridden;
- (void)appendColumnWidth:(unsigned long)arg1;
- (void)appendColumnSpace:(unsigned long)arg1;
- (void)setColumnSpace:(long)arg1;
- (void)setVerticalJustification:(int)arg1;
- (void)setTitlePage:(BOOL)arg1;
- (void)setIndexToAuthorIDOfFormattingChange:(unsigned short)arg1;
- (void)setFormattingChangeDate:(id)arg1;
- (BOOL)isTopBorderOverridden;
- (BOOL)isLeftBorderOverridden;
- (BOOL)isBottomBorderOverridden;
- (BOOL)isRightBorderOverridden;
- (BOOL)isBreakTypeOverridden;
- (int)breakType;
- (BOOL)isPageWidthOverridden;
- (unsigned long)pageWidth;
- (BOOL)isPageHeightOverridden;
- (unsigned long)pageHeight;
- (BOOL)isPageOrientationOverridden;
- (int)pageOrientation;
- (BOOL)isLeftMarginOverridden;
- (BOOL)isRightMarginOverridden;
- (BOOL)isTopMarginOverridden;
- (BOOL)isBottomMarginOverridden;
- (BOOL)isHeaderMarginOverridden;
- (BOOL)isFooterMarginOverridden;
- (BOOL)isGutterMarginOverridden;
- (unsigned long)gutterMargin;
- (BOOL)isBorderDepthOverridden;
- (int)borderDepth;
- (BOOL)isBorderDisplayOverridden;
- (int)borderDisplay;
- (BOOL)isBorderOffsetOverridden;
- (int)borderOffset;
- (BOOL)isLineNumberStartOverridden;
- (short)lineNumberStart;
- (BOOL)isLineNumberIncrementOverridden;
- (unsigned short)lineNumberIncrement;
- (BOOL)isLineNumberDistanceOverridden;
- (short)lineNumberDistance;
- (BOOL)isLineNumberRestartOverridden;
- (int)lineNumberRestart;
- (BOOL)isPageNumberFormatOverridden;
- (int)pageNumberFormat;
- (BOOL)isPageNumberStartOverridden;
- (unsigned short)pageNumberStart;
- (BOOL)isPageNumberRestartOverridden;
- (BOOL)pageNumberRestart;
- (BOOL)isChapterNumberSeparatorOverridden;
- (int)chapterNumberSeparator;
- (BOOL)isColumnsEqualWidthOverridden;
- (BOOL)columnsEqualWidth;
- (unsigned long)columnWidthAt:(unsigned int)arg1;
- (unsigned long)columnSpaceAt:(unsigned int)arg1;
- (BOOL)isColumnSpaceOverridden;
- (long)columnSpace;
- (BOOL)isVerticalJustificationOverridden;
- (int)verticalJustification;
- (BOOL)isTitlePageOverridden;
- (BOOL)titlePage;
- (BOOL)isFormattingChangedOverridden;
- (BOOL)formattingChanged;
- (BOOL)isIndexToAuthorIDOfFormattingChangeOverridden;
- (unsigned short)indexToAuthorIDOfFormattingChange;
- (BOOL)isFormattingChangeDateOverridden;
- (id)formattingChangeDate;
- (id)mutableTopBorder;
- (id)mutableLeftBorder;
- (id)mutableBottomBorder;
- (id)mutableRightBorder;
- (void)setResolveMode:(int)arg1;
- (void)setFormattingChanged:(BOOL)arg1;
- (int)resolveMode;
- (unsigned long)rightMargin;
- (unsigned long)topMargin;
- (void)setTopMargin:(unsigned long)arg1;
- (unsigned long)bottomMargin;
- (void)setBottomMargin:(unsigned long)arg1;
- (unsigned long)headerMargin;
- (void)setHeaderMargin:(unsigned long)arg1;
- (unsigned long)footerMargin;
- (void)setFooterMargin:(unsigned long)arg1;
- (id)leftBorder;
- (id)rightBorder;
- (id)topBorder;
- (id)bottomBorder;
- (unsigned long)leftMargin;
- (void)setLeftMargin:(unsigned long)arg1;
- (void)setColumnCount:(unsigned short)arg1;
- (unsigned short)columnCount;
- (id)initWithDocument:(id)arg1;
- (id)document;
- (void)setRightMargin:(unsigned long)arg1;
- (id)text;
- (void)dealloc;

@end
