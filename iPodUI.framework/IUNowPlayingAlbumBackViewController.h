/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

@class IUModalContext, UITableView, IUBackOfAlbumDataSource, IUNowPlayingAlbumBackView, UIImage, MPMediaQuery, NSString, IUBackOfAlbumTableViewController;

@interface IUNowPlayingAlbumBackViewController : MPViewController <IUBackOfAlbumTableViewControllerDelegate, MPSwipableViewDelegate> {
    IUNowPlayingAlbumBackView *_backView;
    id _coverFlowDelegate;
    MPMediaQuery *_customQuery;
    IUBackOfAlbumDataSource *_dataSource;
    unsigned int _skipNextScrollToVisible : 1;
    int _style;
    IUBackOfAlbumTableViewController *_tableViewController;
    IUModalContext *_modalContext;
}

@property(retain) UIImage * artworkImage;
@property id coverFlowDelegate;
@property(retain) MPMediaQuery * customQuery;
@property int style;
@property(retain) NSString * subtitle;
@property(retain) NSString * title;
@property(readonly) UITableView * tableView;
@property(readonly) IUBackOfAlbumDataSource * dataSource;
@property(retain) IUModalContext * modalContext;


- (void)setArtworkImage:(id)arg1;
- (id)artworkImage;
- (void)_handleSwipeRight;
- (BOOL)canDisplayItem:(id)arg1 withInterfaceOrientation:(int)arg2;
- (void)swipableView:(id)arg1 tappedWithCount:(unsigned int)arg2;
- (void)swipableView:(id)arg1 swipedInDirection:(int)arg2;
- (id)_tableViewController;
- (id)tableView;
- (id)subtitle;
- (void)setSubtitle:(id)arg1;
- (void)loadView;
- (int)style;
- (void)setStyle:(int)arg1;
- (id)title;
- (id)dataSource;
- (void)setTitle:(id)arg1;
- (id)customQuery;
- (id)coverFlowDelegate;
- (void)tableViewController:(id)arg1 didPerformDefaultActionForRow:(int)arg2;
- (void)_scrollCurrentRowToVisible;
- (void)_reloadData;
- (void)_reloadDataFromItemChange:(BOOL)arg1;
- (BOOL)_shouldUseQueryRepresentativeTrackForItem;
- (void)_trackWillChangeNotification:(id)arg1;
- (void)_databaseContentsDidChangeNotification:(id)arg1;
- (void)_dataSourceInvalidated:(id)arg1;
- (id)_backView;
- (void)accessoryButtonTapped:(id)arg1;
- (void)setModalContext:(id)arg1;
- (id)modalContext;
- (void)setCustomQuery:(id)arg1;
- (void)setCoverFlowDelegate:(id)arg1;
- (id)init;
- (void)dealloc;
- (void)setItem:(id)arg1;

@end
