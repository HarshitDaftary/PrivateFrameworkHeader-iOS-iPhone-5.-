/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

@class VSRecognitionAction;

@interface VSRecognitionConfirmAction : VSRecognitionRecognizeAction  {
    VSRecognitionAction *_confirmedAction;
    VSRecognitionAction *_deniedAction;
    struct { 
        unsigned int initializing : 1; 
        unsigned int confirmed : 1; 
    } _confirmFlags;
}


- (void)_setConfirmed:(BOOL)arg1;
- (void)setConfirmedAction:(id)arg1;
- (id)confirmedAction;
- (void)setDeniedAction:(id)arg1;
- (id)deniedAction;
- (id)initWithModelIdentifier:(id)arg1;
- (int)completionType;
- (id)init;
- (void)dealloc;

@end
