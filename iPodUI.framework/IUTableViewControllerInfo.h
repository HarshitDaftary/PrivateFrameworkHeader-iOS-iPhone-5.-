/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

@class NSString;

@interface IUTableViewControllerInfo : NSObject <NSCoding> {
    struct CGPoint { 
        float x; 
        float y; 
    } _scrollOffset;
    int _selectedRow;
    BOOL _searchBarIsFirstResponder;
    NSString *_searchString;
}

@property struct CGPoint { float x1; float x2; } scrollOffset;
@property int selectedRow;
@property BOOL searchBarIsFirstResponder;
@property(copy) NSString * searchString;


- (id)searchString;
- (void)setSearchString:(id)arg1;
- (int)selectedRow;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)searchBarIsFirstResponder;
- (void)setSearchBarIsFirstResponder:(BOOL)arg1;
- (void)setSelectedRow:(int)arg1;
- (void)setScrollOffset:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGPoint { float x1; float x2; })scrollOffset;
- (id)init;
- (void)dealloc;

@end
