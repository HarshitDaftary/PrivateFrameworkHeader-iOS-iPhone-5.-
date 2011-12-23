/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLUILibraryViewController : PLLibraryViewController  {
    struct NSObject { Class x1; } *_allPhotosAlbumList;
    int _previousStatusBarStyle;
    int _newStatusBarStyle;
    unsigned int _didSetPreviousStatusBarStyle : 1;
}


- (void)cancelButtonClicked:(id)arg1;
- (void)_setImagePickerMediaTypes:(id)arg1;
- (int)_imagePickerStatusBarStyle;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)albumListDidChange:(id)arg1;
- (void)_updateFilteredAlbumListWithFilter:(int)arg1;
- (void)updateNavigationItemButtons;
- (void)navigateToAlbum:(struct NSObject { Class x1; }*)arg1 animated:(BOOL)arg2 completion:(id)arg3;
- (id)init;
- (void)dealloc;

@end
