/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class PLCropOverlayBottomBarButton, PLCameraButton, UIImageView, UILabel, UIButton, UIView, UIImage, NSString;

@interface PLCropOverlayBottomBar : UIView  {
    UIImage *_backgroundImage;
    UIImageView *_takePhotoView;
    PLCameraButton *_shutterButton;
    PLCropOverlayBottomBarButton *_cancelButton;
    UIView *_modeSwitch;
    UIButton *_playPauseButton;
    UIImage *_playImage;
    UIImage *_pauseImage;
    NSString *_title;
    UIImageView *_editPhotoView;
    PLCropOverlayBottomBarButton *_editCancelButton;
    PLCropOverlayBottomBarButton *_editDoneButton;
    UILabel *_editLabel;
    id _delegate;
    unsigned int _takingPhotoView : 1;
    unsigned int _wasEnabled : 1;
}


- (void)cancelButtonClicked:(id)arg1;
- (void)setDelegate:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })titleRect;
- (void)setEnabled:(BOOL)arg1;
- (id)delegate;
- (void)setTitle:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_didCapture;
- (void)_animateViewOriginDeltaX:(float)arg1;
- (void)_slideAnimationComplete:(id)arg1;
- (void)_prepareForPhotoEdit;
- (void)_createTakePhotoView;
- (void)_updatePlayPauseButtonImage:(id)arg1;
- (id)_pauseImage;
- (void)_playPause:(id)arg1;
- (id)_playImage;
- (void)doneButtonClicked:(id)arg1;
- (void)editCancelButtonClicked:(id)arg1;
- (void)setCancelButtonHidden:(BOOL)arg1;
- (void)didPauseVideo;
- (void)didPlayVideo;
- (void)didCaptureVideo;
- (void)didCapturePhoto;
- (void)prepareForVideoEdit;
- (void)setCancelButtonTitle:(id)arg1;
- (void)setOKButtonTitle:(id)arg1;
- (void)setTakePhoto:(BOOL)arg1;
- (id)modeSwitch;
- (void)setModeSwitch:(id)arg1;
- (id)shutterButton;
- (void)dealloc;

@end
