/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class CKSummaryLabel, UIImageView, UILabel, CKAggregateConversation, NSString, UIDateLabel, NSDate;

@interface CKConversationListCell : UITableViewCell  {
    CKAggregateConversation *_conversation;
    UIDateLabel *_dateLabel;
    UILabel *_hitsLabel;
    CKSummaryLabel *_summaryLabel;
    CKSummaryLabel *_backupSummaryLabel;
    UIImageView *_unreadIndicatorImageView;
    UILabel *_fromLabel;
    UIImageView *_groupImageView;
    NSString *_searchSummaryText;
    int _searchMessageID;
    int _searchPartID;
    NSDate *_searchMessageDate;
}

@property(retain) CKAggregateConversation * conversation;
@property(readonly) NSDate * searchMessageDate;
@property(readonly) int searchPartID;
@property(readonly) int searchMessageID;

+ (id)identifier;
+ (float)cellHeight;

- (void)willTransitionToState:(unsigned int)arg1;
- (void)didTransitionToState:(unsigned int)arg1;
- (void)clearText;
- (void)prepareForReuse;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 conversation:(id)arg2;
- (void)updateWithSearchResult:(struct _CKSpotlightSearchResult { id x1; int x2; int x3; id x4; id x5; }*)arg1;
- (int)searchPartID;
- (int)searchMessageID;
- (void)updateContents;
- (id)searchMessageDate;
- (void)_createBackupSummaryLabel;
- (id)conversation;
- (void)setConversation:(id)arg1;
- (void)updateFontSize;
- (void)dealloc;

@end
