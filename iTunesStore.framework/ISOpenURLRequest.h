/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class NSURL, NSString;

@interface ISOpenURLRequest : NSObject <NSCopying> {
    BOOL _isITunesStoreURL;
    NSString *_targetIdentifier;
    NSString *_urlBagKey;
    NSURL *_url;
}

@property(retain) NSURL * URL;
@property(copy) NSString * URLBagKey;
@property(getter=isITunesStoreURL) BOOL ITunesStoreURL;
@property(copy) NSString * targetIdentifier;

+ (id)openURLRequestWithURL:(id)arg1;

- (id)initWithURL:(id)arg1;
- (void)setURL:(id)arg1;
- (id)URL;
- (id)targetIdentifier;
- (BOOL)isITunesStoreURL;
- (void)setTargetIdentifier:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (void)dealloc;
- (void)setITunesStoreURL:(BOOL)arg1;
- (id)initWithURLBagKey:(id)arg1;
- (id)URLBagKey;
- (void)setURLBagKey:(id)arg1;

@end
