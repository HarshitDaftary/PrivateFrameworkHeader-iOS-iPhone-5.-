/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class SSItemArtworkImage, NSString, NSDictionary;

@interface SUItemContentRating : NSObject <NSCopying> {
    NSDictionary *_dictionary;
    int _rank;
    NSString *_ratingDescription;
    NSString *_ratingLabel;
    int _ratingSystem;
    SSItemArtworkImage *_ratingSystemLogo;
    BOOL _shouldHideWhenRestricted;
}

@property(getter=isExplicitContent,readonly) BOOL explicitContent;
@property int rank;
@property(copy) NSString * ratingDescription;
@property(copy) NSString * ratingLabel;
@property int ratingSystem;
@property(copy) SSItemArtworkImage * ratingSystemLogo;
@property(getter=isRestricted,readonly) BOOL restricted;
@property BOOL shouldHideWhenRestricted;

+ (int)ratingSystemFromString:(id)arg1;

- (void)setRank:(int)arg1;
- (int)rank;
- (id)valueForProperty:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)setShouldHideWhenRestricted:(BOOL)arg1;
- (void)setRatingSystemLogo:(id)arg1;
- (id)ratingSystemLogo;
- (void)setRatingLabel:(id)arg1;
- (id)ratingLabel;
- (void)setRatingDescription:(id)arg1;
- (id)ratingDescription;
- (BOOL)_isRatingSystemForMusic:(int)arg1;
- (BOOL)isExplicitContent;
- (BOOL)_isRatingSystemForTV:(int)arg1;
- (BOOL)_isRatingSystemForMovies:(int)arg1;
- (BOOL)_isRatingSystemForApps:(int)arg1;
- (BOOL)shouldHideWhenRestricted;
- (int)ratingSystem;
- (BOOL)isRestricted;
- (void)setRatingSystem:(int)arg1;

@end
