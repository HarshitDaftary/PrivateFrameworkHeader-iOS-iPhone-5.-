/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class PLCameraView, PLSyncProgressView;

@interface PLCameraViewController : UIViewController  {
    PLCameraView *_cameraView;
    PLSyncProgressView *_rebuildProgressView;
    BOOL _ignoreAppearCallbacks;
}


- (BOOL)_displaysFullScreen;
- (void)_getRotationContentSettings:(struct { BOOL x1; BOOL x2; BOOL x3; BOOL x4; float x5; int x6; }*)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)dealloc;

@end
