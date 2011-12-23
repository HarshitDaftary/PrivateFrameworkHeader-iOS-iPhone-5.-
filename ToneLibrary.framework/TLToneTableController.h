/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

@class NSIndexPath, UITableView, NSString, TLToneManager, NSMutableArray, TLVibrationPickerViewController;

@interface TLToneTableController : NSObject <TLVibrationPickerViewControllerDelegate, UITableViewDataSource, UITableViewDelegate> {
    id _delegate;
    NSMutableArray *_ringtoneGroupLists;
    NSMutableArray *_ringtoneGroupNames;
    NSIndexPath *_selectedRingtoneIndexPath;
    BOOL _showsNone;
    BOOL _showsDefault;
    NSString *_noneString;
    NSString *_noneIdentifier;
    NSString *_defaultIdentifier;
    BOOL _showsNothingSelected;
    BOOL _showsRingtonesStore;
    BOOL _noneAtTop;
    UITableView *_tableView;
    BOOL _showsVibrations;
    BOOL _showsVibrationsAlongsideTones;
    BOOL _showsDefaultVibration;
    BOOL _showsUserGeneratedVibrations;
    BOOL _showsNoneVibration;
    BOOL _showsNoVibrationSelected;
    NSString *_selectedVibrationIdentifier;
    TLVibrationPickerViewController *_vibrationPickerViewController;
    TLToneManager *_ringtoneManager;
    id _avController;
    BOOL _startedInteruption;
    BOOL _customAVController;
    BOOL _tonePicker;
    unsigned int _filter;
    unsigned int _systemRingtoneStartIndex;
}

@property(setter=setDefaultIdentifier:,retain) id defaultIdentifier;


- (id)defaultIdentifier;
- (void)_setRingtoneManager:(id)arg1;
- (int)compareRingtoneWithIdentifier:(id)arg1 toRingtoneWithIdentifier:(id)arg2;
- (void)vibrationPickerViewController:(id)arg1 selectedVibrationWithIdentifier:(id)arg2;
- (void)_stopPlayingWithFadeOut:(BOOL)arg1 shouldKeepVibrating:(BOOL)arg2;
- (id)copyCurrentPhoneRingtoneIdentifier;
- (id)copyCurrentPhoneTextToneIdentifier;
- (void)togglePlayWithRingtoneWithIdentifier:(id)arg1;
- (void)playRingtoneWithIdentifier:(id)arg1;
- (void)_stopPlayingButKeepVibrating:(BOOL)arg1;
- (BOOL)_showsNoneVibration;
- (id)indexPathForFirstRingtoneGroup;
- (id)indexPathForRingtonesStoreGroup;
- (BOOL)isOtherVibrationGroupWithSection:(int)arg1;
- (id)copyCurrentPhoneRingtoneName;
- (id)copyCurrentPhoneTextToneName;
- (BOOL)isRingtonesStoreGroupAtIndexPath:(id)arg1;
- (void)_switchValueDidChange:(id)arg1;
- (BOOL)isDividerAtIndexPath:(id)arg1;
- (BOOL)isVibrationGroupAtIndexPath:(id)arg1;
- (BOOL)_showsUserGeneratedVibrations;
- (BOOL)_showsDefaultVibration;
- (void)_setSelectedVibrationIdentifierTableViewUpdateDidComplete:(id)arg1;
- (id)_vibrationPickerViewController;
- (void)processNewRingtoneSelected:(id)arg1;
- (id)indexPathForDefaultGroup;
- (id)indexPathForRingtoneWithIdentifier:(id)arg1;
- (id)loadTextTonesFromPlist;
- (void)addRingtonesInDirectory:(id)arg1 toArray:(id)arg2 fileExtension:(id)arg3;
- (BOOL)isNoneGroupAtIndexPath:(id)arg1;
- (BOOL)isDefaultGroupAtIndexPath:(id)arg1;
- (id)identifierOfRingtoneAtIndexPath:(id)arg1;
- (id)indexPathForVibrationGroup;
- (BOOL)_showsVibrationsSwitchIsOn;
- (BOOL)_showsVibrations;
- (id)indexPathForNoneGroup;
- (id)initWithAVController:(id)arg1;
- (void)finishedWithPicker;
- (void)stopPlayingWithFadeOut:(BOOL)arg1;
- (void)setShowsNoVibrationSelected:(BOOL)arg1;
- (void)setShowsNoneVibration:(BOOL)arg1;
- (void)setShowsUserGeneratedVibrations:(BOOL)arg1;
- (void)setShowsDefaultVibration:(BOOL)arg1;
- (void)setShowsVibrationsAlongsideTones:(BOOL)arg1;
- (void)reloadRingtones;
- (id)initWithAVController:(id)arg1 filter:(unsigned int)arg2 tonePicker:(BOOL)arg3;
- (void)setNoneString:(id)arg1;
- (void)setDefaultIdentifier:(id)arg1;
- (void)setShowsRingtonesStore:(BOOL)arg1;
- (id)indexPathForSelectedRingtone;
- (id)ringtoneManager;
- (void)setAVController:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)setTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)stopPlaying;
- (id)init;
- (void)dealloc;
- (id)avController;
- (id)selectedVibrationIdentifier;
- (void)setShowsNone:(BOOL)arg1;
- (void)setNoneAtTop:(BOOL)arg1;
- (void)setShowsDefault:(BOOL)arg1;
- (void)setShowsVibrations:(BOOL)arg1;
- (id)selectedRingtoneIdentifier;
- (void)setSelectedRingtoneIdentifier:(id)arg1;
- (void)setShowsNothingSelected:(BOOL)arg1;
- (void)setSelectedVibrationIdentifier:(id)arg1;

@end
