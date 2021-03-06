/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

@class UILabel, TLVibrationRecorderTouchSurface, TLVibrationRecorderControlsView, <TLVibrationRecorderViewDelegate>;

@interface TLVibrationRecorderView : UIView <TLVibrationRecorderTouchSurfaceDelegate, TLVibrationRecorderControlsViewDelegate> {
    <TLVibrationRecorderViewDelegate> *_delegate;
    TLVibrationRecorderTouchSurface *_touchSurface;
    TLVibrationRecorderControlsView *_controlsView;
    UILabel *_instructionsLabel;
    BOOL _replayMode;
    unsigned int _leftButtonIdentifier;
    unsigned int _rightButtonIdentifier;
    double _vibrationPatternMaximumDuration;
    double _currentVibrationProgressDidStartTimestamp;
    BOOL _isWaitingForEndOfCurrentVibrationComponent;
    double _currentVibrationComponentDidStartTime;
    BOOL _animatingProgress;
}

@property <TLVibrationRecorderViewDelegate> * delegate;
@property(setter=_setReplayMode:) BOOL _replayMode;


- (void)exitReplayModeWithAnimation:(BOOL)arg1;
- (void)enterReplayModeWithVibrationPattern:(id)arg1 animate:(BOOL)arg2 completion:(id)arg3;
- (void)exitRecordingModeWithAnimation:(BOOL)arg1 enablePlayButton:(BOOL)arg2;
- (void)enterRecordingModeWithAnimation:(BOOL)arg1;
- (void)startAnimatingProgress;
- (void)_exitWaitingModeWithAnimation:(BOOL)arg1;
- (void)_setLeftButtonIdentifier:(unsigned int)arg1 enabled:(BOOL)arg2 rightButtonIdentifier:(unsigned int)arg3 enabled:(BOOL)arg4 animate:(BOOL)arg5;
- (void)_setReplayMode:(BOOL)arg1;
- (void)stopAnimatingProgress;
- (void)_getButtonPropertiesForIdentifier:(unsigned int)arg1 enabled:(BOOL)arg2 color:(int*)arg3 title:(id*)arg4 icon:(id*)arg5;
- (void)_setLeftButtonIdentifier:(unsigned int)arg1 enabled:(BOOL)arg2 rightButtonIdentifier:(unsigned int)arg3 enabled:(BOOL)arg4 animate:(BOOL)arg5 completion:(id)arg6;
- (void)_enterWaitingModeWithAnimation:(BOOL)arg1 animateButtons:(BOOL)arg2 enablePlayButton:(BOOL)arg3;
- (BOOL)_replayMode;
- (void)vibrationRecorderTouchSurfaceDidFinishReplayingVibration:(id)arg1;
- (void)vibrationRecorderTouchSurface:(id)arg1 didExitRecordingModeWithContextObject:(id)arg2;
- (void)vibrationComponentDidEndForVibrationRecorderTouchSurface:(id)arg1;
- (void)vibrationComponentDidStartForVibrationRecorderTouchSurface:(id)arg1;
- (BOOL)vibrationRecorderTouchSurfaceDidEnterRecordingMode:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 vibrationPatternMaximumDuration:(double)arg2;
- (void)vibrationRecorderControlsView:(id)arg1 buttonTappedAtIndex:(unsigned int)arg2;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (void)_updateProgress:(id)arg1;

@end
