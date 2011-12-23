/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@class CPListItem;

@interface CPList : NSObject <CPDisposable> {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } spacer;
    int type;
    unsigned int ordinalPrefixLength;
    unsigned int ordinalSuffixLength;
    CPListItem *parentItem;
    struct __CFArray { } *items;
}

@property(retain) CPListItem * parentItem;
@property unsigned int ordinalSuffixLength;
@property unsigned int ordinalPrefixLength;
@property int type;
@property struct CGRect { struct CGPoint { float x; float y; } origin; struct CGSize { float width; float height; } size; } spacer;


- (void)addItem:(id)arg1;
- (void)finalize;
- (BOOL)containsParagraph:(id)arg1;
- (BOOL)isMultilevel;
- (void)setParentItem:(id)arg1;
- (unsigned int)ordinalSuffixLength;
- (void)setOrdinalSuffixLength:(unsigned int)arg1;
- (unsigned int)ordinalPrefixLength;
- (void)setOrdinalPrefixLength:(unsigned int)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })spacer;
- (void)setSpacer:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)parentItem;
- (void)dispose;
- (int)type;
- (void)setType:(int)arg1;
- (id)init;
- (void)dealloc;
- (id)itemAtIndex:(unsigned int)arg1;
- (unsigned int)itemCount;

@end
