/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iAdCore.framework/iAdCore
 */

@class NSString, NSData, NSDate, NSURL;

@interface _ADWebArchiveCacheNode : NSObject  {
    unsigned int _numberOfBytes;
    NSData *_data;
    BOOL _inMemory;
    BOOL _hasDiskRepresentation;
    NSString *_filename;
    NSURL *_URL;
    NSDate *_expiration;
}

@property unsigned int numberOfBytes;
@property(retain) NSData * data;
@property BOOL inMemory;
@property BOOL hasDiskRepresentation;
@property(retain) NSString * filename;
@property(retain) NSURL * URL;
@property(retain) NSDate * expiration;

+ (id)resourceCacheNodeWithDictionary:(id)arg1;

- (BOOL)isExpired;
- (id)data;
- (void)setFilename:(id)arg1;
- (id)filename;
- (id)expiration;
- (void)setHasDiskRepresentation:(BOOL)arg1;
- (BOOL)loadFromDisk;
- (void)writeToDiskWithCompletionHandler:(id)arg1;
- (BOOL)hasDiskRepresentation;
- (void)setInMemory:(BOOL)arg1;
- (void)setNumberOfBytes:(unsigned int)arg1;
- (void)setExpiration:(id)arg1;
- (unsigned int)numberOfBytes;
- (void)removeFromMemory;
- (BOOL)inMemory;
- (BOOL)destroy;
- (void)setData:(id)arg1;
- (void)setURL:(id)arg1;
- (id)dictionaryRepresentation;
- (id)URL;
- (id)init;
- (void)dealloc;

@end
