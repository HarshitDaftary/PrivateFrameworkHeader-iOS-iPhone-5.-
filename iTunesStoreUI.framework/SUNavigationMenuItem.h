/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSURL, NSString, SUItemContentRating;

@interface SUNavigationMenuItem : NSObject <NSCopying> {
    SUItemContentRating *_contentRating;
    NSString *_title;
    NSURL *_url;
}

@property(readonly) SUItemContentRating * contentRating;
@property(readonly) NSString * title;
@property(readonly) NSURL * URL;


- (id)URL;
- (id)initWithDictionary:(id)arg1;
- (id)title;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (void)dealloc;
- (id)contentRating;

@end
