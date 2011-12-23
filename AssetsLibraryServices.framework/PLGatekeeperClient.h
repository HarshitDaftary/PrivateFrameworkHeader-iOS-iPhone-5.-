/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
 */

@interface PLGatekeeperClient : NSObject  {
    struct _xpc_connection_s { } *connection;
}

@property(readonly) struct dispatch_queue_s { }* replyQueue;
@property struct _xpc_connection_s { }* connection;

+ (id)sharedInstance;

- (void)clearChangeStore;
- (void)notifyAboutTerminationDueToUncaughtException:(id)arg1;
- (void)dataMigrationWillFinish;
- (void)cleanupModelAfteriTunesRestore;
- (void)updateRestoredAssetWithUUID:(id)arg1 paths:(id)arg2;
- (void)finalizeOTARestoreRecreatingAlbums:(BOOL)arg1;
- (void)getNextThumbnailIndexWithHandler:(id)arg1;
- (void)getPhotosAndVideosCountWithHandler:(id)arg1;
- (void)addAssetWithURL:(id)arg1 toAlbumWithUUID:(id)arg2 handler:(id)arg3;
- (void)addGroupWithName:(id)arg1 handler:(id)arg2;
- (int)fileDescriptorForAssetURL:(id)arg1;
- (struct dispatch_queue_s { }*)sendQueue;
- (struct dispatch_queue_s { }*)replyQueue;
- (id)fileURLForAssetURL:(id)arg1;
- (void)setConnection:(struct _xpc_connection_s { }*)arg1;
- (struct _xpc_connection_s { }*)connection;
- (void)writeDataInBackground:(id)arg1 toFileURL:(id)arg2;
- (void)recycleUnusedThumbnailIndexes:(id)arg1;
- (void)getUnusedThumbnailIndexesWithCount:(unsigned int)arg1 handler:(id)arg2;
- (unsigned int)secondsNeededToCleanupModelAfteriTunesRestore;
- (void)createPhotoLibraryDatabase;
- (void)updateModelAfterOTARestore;
- (void)recalculateCachedAlbumCounts;
- (void)updateCameraPreviewWellImage:(id)arg1;
- (void)updateStackedImageCacheForAlbum:(id)arg1;
- (void)saveAssetWithData:(id)arg1 handler:(id)arg2 imageSurface:(struct __IOSurface { }*)arg3 previewImageSurface:(struct __IOSurface { }*)arg4;
- (void)requestImageFromAssetURL:(id)arg1 format:(int)arg2 handler:(id)arg3;
- (id)imageDataFromAssetURL:(id)arg1 format:(int)arg2;
- (id)messagesImageDataFromAssetURL:(id)arg1 format:(int)arg2;
- (id)fileURLForNewAssetWithType:(unsigned int)arg1 extension:(id)arg2;
- (void)requestAccessWithHandler:(id)arg1;
- (void)importFileSystemAssetsWaitingForReply:(BOOL)arg1;
- (void)launchAssetsd;
- (void)updateThumbnailsForPhoto:(id)arg1 generatePreviewImage:(BOOL)arg2 waitForReply:(BOOL)arg3;
- (id)init;

@end
