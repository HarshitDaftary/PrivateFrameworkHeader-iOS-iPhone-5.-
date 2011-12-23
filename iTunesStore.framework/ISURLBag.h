/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class NSArray, SSNetworkConstraints, NSDictionary, NSSet, SSURLBagContext;

@interface ISURLBag : NSObject  {
    SSURLBagContext *_context;
    SSNetworkConstraints *_defaultConstraints;
    NSDictionary *_dictionary;
    NSArray *_guidPatterns;
    NSSet *_guidSchemes;
    NSDictionary *_headerPatterns;
    double _invalidationTime;
}

@property(readonly) NSSet * availableStorefrontItemKinds;
@property double invalidationTime;
@property(copy) SSURLBagContext * URLBagContext;
@property(readonly) NSDictionary * URLBagDictionary;
@property(getter=isValid,readonly) BOOL valid;

+ (BOOL)shouldSendGUIDForURL:(id)arg1 inBagContext:(id)arg2;
+ (id)networkConstraintsForDownloadKind:(id)arg1 inBagContext:(id)arg2;
+ (id)copyExtraHeadersForURL:(id)arg1 inBagContext:(id)arg2;
+ (void)setURLBag:(id)arg1 forContext:(id)arg2;
+ (id)_copyFallbackContextForContext:(id)arg1;
+ (void)_loadItemKindURLBagKeyMap;
+ (id)_urlBagForContext:(id)arg1;
+ (id)storeFrontURLBagKeyForItemKind:(id)arg1;
+ (void)invalidateAllBags;
+ (BOOL)urlIsTrusted:(id)arg1 inBagContext:(id)arg2;
+ (id)urlForKey:(id)arg1 inBagContext:(id)arg2;
+ (id)valueForKey:(id)arg1 inBagContext:(id)arg2;
+ (id)urlBagForContext:(id)arg1;

- (id)URLBagContext;
- (id)initWithURLBagContext:(id)arg1;
- (id)valueForKey:(id)arg1;
- (void)invalidate;
- (BOOL)urlIsTrusted:(id)arg1;
- (BOOL)isValid;
- (BOOL)_loadFromSignedDictionary:(id)arg1 returningError:(id*)arg2;
- (id)URLBagDictionary;
- (void)setURLBagContext:(id)arg1;
- (id)sanitizedURLForURL:(id)arg1;
- (id)availableStorefrontItemKinds;
- (BOOL)loadFromDictionary:(id)arg1 returningError:(id*)arg2;
- (id)initWithRawDictionary:(id)arg1;
- (BOOL)shouldSendGUIDForURL:(id)arg1;
- (id)copyExtraHeadersForURL:(id)arg1;
- (double)invalidationTime;
- (void)setInvalidationTime:(double)arg1;
- (void)_writeURLResolutionCacheFile;
- (void)_writeNetworkConstraintsCacheFile;
- (id)_networkConstraintsCachePath;
- (id)_copyHeaderPatternsFromDictionary:(id)arg1;
- (id)_copyGUIDSchemesFromDictionary:(id)arg1;
- (id)_copyGUIDPatternsFromDictionary:(id)arg1;
- (void)_setDictionary:(id)arg1;
- (id)urlForKey:(id)arg1;
- (id)init;
- (void)dealloc;
- (id)networkConstraintsForDownloadKind:(id)arg1;
- (id)searchQueryParametersForClientIdentifier:(id)arg1 networkType:(int)arg2;
- (id)URLForURL:(id)arg1 clientIdentifier:(id)arg2;

@end
