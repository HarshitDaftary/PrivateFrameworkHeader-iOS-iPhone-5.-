/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

@class IUMediaListAggregateViewConfiguration, NSMutableArray, IUReflectionImageView;

@interface IUMediaListAggregateView : UIImageView  {
    id _delegate;
    IUMediaListAggregateViewConfiguration *_configuration;
    IUReflectionImageView *_artworkView;
    NSMutableArray *_configurationSubviews;
    unsigned int _needsViewsLoaded : 1;
    unsigned int _drawAsDisabled : 1;
}

@property(retain) IUMediaListAggregateViewConfiguration * configuration;
@property id delegate;


- (void)_reloadViews;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)layoutSubviews;
- (void)_removeSubviewsForConfiguration:(BOOL)arg1;
- (void)_reloadArtworkView;
- (id)initWithConfiguration:(id)arg1;
- (void)dealloc;
- (void)_reloadSubviewsForConfiguration;
- (id)configuration;
- (void)setConfiguration:(id)arg1;

@end
