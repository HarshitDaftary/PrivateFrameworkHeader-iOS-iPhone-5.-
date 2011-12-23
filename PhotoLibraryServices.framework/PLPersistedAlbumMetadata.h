/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSMutableOrderedSet, NSString, PLManagedAlbum, NSNumber, NSURL;

@interface PLPersistedAlbumMetadata : NSObject  {
    NSString *_title;
    NSString *_uuid;
    NSNumber *_kind;
    NSMutableOrderedSet *_assetUUIDs;
    PLManagedAlbum *_managedAlbum;
    NSURL *_metadataURL;
}

@property(retain) NSString * title;
@property(retain) NSString * uuid;
@property(retain) NSNumber * kind;
@property(retain) NSMutableOrderedSet * assetUUIDs;
@property(retain) PLManagedAlbum * managedAlbum;
@property(retain) NSURL * metadataURL;


- (id)kind;
- (id)title;
- (void)setTitle:(id)arg1;
- (BOOL)containsAsset:(id)arg1;
- (id)managedAlbum;
- (id)metadataURL;
- (void)_saveMetadata;
- (void)_readMetadata;
- (void)setMetadataURL:(id)arg1;
- (void)setManagedAlbum:(id)arg1;
- (void)setAssetUUIDs:(id)arg1;
- (id)assetUUIDs;
- (id)albumFromDataInManagedObjectContext:(id)arg1;
- (id)initWithPersistedDataAtPath:(id)arg1;
- (void)removePersistedAlbumData;
- (void)persistAlbumData;
- (id)initWithPLGenericAlbum:(id)arg1;
- (void)setUuid:(id)arg1;
- (id)uuid;
- (id)description;
- (id)init;
- (void)dealloc;
- (void)setKind:(id)arg1;

@end
