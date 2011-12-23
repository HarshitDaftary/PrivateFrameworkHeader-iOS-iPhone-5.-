/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class PLAlbumChangeNotification, NSIndexSet, NSOrderedSet, PLShuffledAlbum;

@interface PLShuffledAlbumChangeNotification : PLAlbumChangeNotification  {
    PLShuffledAlbum *_album;
    PLAlbumChangeNotification *_backingNotification;
    NSIndexSet *_changedIndexes;
    NSOrderedSet *_newSet;
}

+ (id)notificationForShuffledAlbum:(id)arg1 fromAlbumChangeNotification:(id)arg2;

- (id)album;
- (id)object;
- (id)initWithShuffledAlbum:(id)arg1 albumChangeNotification:(id)arg2;
- (BOOL)countDidChange;
- (id)_changedObjects;
- (BOOL)keyAssetDidChange;
- (id)_diffDescription;
- (void)_calculateDiffs;
- (BOOL)_getOldSet:(id*)arg1 newSet:(id*)arg2;
- (BOOL)titleDidChange;
- (BOOL)shouldReload;
- (id)changedIndexes;
- (id)insertedIndexes;
- (id)deletedIndexes;
- (id)description;
- (id)init;
- (void)dealloc;

@end
