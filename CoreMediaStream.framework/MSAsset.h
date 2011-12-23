/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@class NSError, NSString, NSData, NSDictionary, NSURL;

@interface MSAsset : NSObject <NSCoding, NSCopying> {
    NSData *_masterAssetHash;
    NSDictionary *_metadata;
    NSData *_fileHash;
    NSString *_path;
    NSString *_type;
    NSString *_MMCSAccessHeader;
    NSURL *_MMCSURL;
    unsigned long long _protocolFileSize;
    NSData *_fileData;
    NSError *_error;
}

@property(retain) NSData * masterAssetHash;
@property(retain) NSDictionary * metadata;
@property(retain) NSData * fileHash;
@property(retain) NSString * path;
@property(retain) NSString * type;
@property(retain) NSString * MMCSAccessHeader;
@property(retain) NSURL * MMCSURL;
@property unsigned long long protocolFileSize;
@property(retain) NSData * fileData;
@property(retain) NSError * error;

+ (id)asset;

- (id)metadataValueForKey:(id)arg1;
- (void)setError:(id)arg1;
- (id)path;
- (void)setFileData:(id)arg1;
- (void)setProtocolFileSize:(unsigned long long)arg1;
- (unsigned long long)protocolFileSize;
- (void)setMMCSURL:(id)arg1;
- (id)MMCSURL;
- (void)setFileHash:(id)arg1;
- (id)fileData;
- (void)addMetadataValue:(id)arg1 forKey:(id)arg2;
- (id)MMCSAccessHeader;
- (void)setMMCSAccessHeader:(id)arg1;
- (id)masterAssetHash;
- (void)setMetadata:(id)arg1;
- (id)metadata;
- (void)setPath:(id)arg1;
- (id)type;
- (void)setType:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)_fileSize;
- (id)error;
- (void)setMasterAssetHash:(id)arg1;
- (id)fileHash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;

@end
