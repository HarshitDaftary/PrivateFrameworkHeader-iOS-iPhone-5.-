/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSArray, PLAlbumChangeNotification, PLPlace;

@interface PLPlaceChangeNotification : PLAlbumChangeNotification  {
    PLPlace *_fromPlace;
    PLPlace *_toPlace;
    NSArray *_changedObjects;
    PLAlbumChangeNotification *_backingNotifiation;
}

+ (id)notificationForFromPlace:(id)arg1 toPlace:(id)arg2 changedObjects:(id)arg3 fromAlbumChangeNotification:(id)arg4;

- (id)album;
- (id)object;
- (id)initWithFromPlace:(id)arg1 toPlace:(id)arg2 changedObjects:(id)arg3 fromAlbumChangeNotification:(id)arg4;
- (id)_changedObjects;
- (BOOL)_getOldSet:(id*)arg1 newSet:(id*)arg2;
- (BOOL)titleDidChange;
- (id)init;
- (void)dealloc;

@end
