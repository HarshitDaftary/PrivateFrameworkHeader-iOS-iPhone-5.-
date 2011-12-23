/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
 */

@class NSTimer, IMHandle, IMAccount, NSData, IMPair, NSError, IMAVChatParticipant, NSDate, <IMAVChatDelegate>, NSDictionary, NSArray, IMAVChatFeature, <IMAVChatTheaterDelegate>, NSString, NSMutableDictionary, NSMutableArray, NSNumber;

@interface IMAVChat : NSObject <IMSystemMonitorListener> {
    NSString *_GUID;
    NSString *_conferenceID;
    NSMutableArray *_participants;
    IMHandle *_initiator;
    IMAVChatParticipant *_localParticipant;
    NSNumber *_natType;
    NSMutableDictionary *_extraServerContext;
    NSDictionary *_errorDict;
    NSDate *_dateCreated;
    NSDate *_dateStartedConnecting;
    NSDate *_dateConnected;
    NSDate *_dateEnded;
    NSString *_participantNames;
    NSData *_connectData;
    NSDictionary *_callerProperties;
    NSMutableDictionary *_unknownPartyStates;
    struct dispatch_queue_s { } *_queue;
    NSTimer *_firstFrameTimeoutTimer;
    NSTimer *_inviteTimeoutTimer;
    NSTimer *_connectionTimeoutTimer;
    NSTimer *_breakBeforeMakeTimeoutTimer;
    NSTimer *_screenSaverBlockingTimer;
    id _conferenceController;
    id _delegate;
    id _theaterDelegate;
    int _callID;
    unsigned int _sessionID;
    unsigned int _addStatus;
    NSError *_error;
    int _addableParticipants;
    unsigned int _localState;
    unsigned int _lastPostedState;
    IMPair *_pendingPreemptiveRelayInitate;
    NSString *_callStatisticsGUID;
    struct CGSize { 
        float width; 
        float height; 
    } _portraitAspectRatios;
    struct CGSize { 
        float width; 
        float height; 
    } _landscapeAspectRatios;
    double _connectionTimeoutTime;
    double _invitationTimeoutTime;
    BOOL _hasGatheredInfo;
    BOOL _hasReceivedFirstFrame;
    BOOL _silentConference;
    BOOL _isListening;
    BOOL _isCounterProposalConnect;
    BOOL _hasPendingAccept;
    BOOL _hasPendingInit;
    BOOL _isTerminating;
    BOOL _needToSendEndConferenceNotification;
    BOOL _Q8IrisOpen;
    BOOL _usingCoercedIDs;
    BOOL _suppressBeginChat;
    BOOL _isCaller;
    BOOL _isVideo;
    BOOL _dataOut;
    BOOL _dataIn;
    BOOL _didRemoteMute;
    BOOL _didRemotePause;
    BOOL _remoteNetworkStall;
    BOOL _participantOrderFinal;
    int _connectionType;
    BOOL _localCell;
    BOOL _remoteCell;
    BOOL _needsVideoRestart;
    BOOL _needsAudioRestart;
    int _ardRole;
    IMAVChatFeature *_recorder;
    IMAVChatFeature *_auxVideo;
    IMAVChatFeature *_ard;
}

@property(readonly) BOOL _allParticipantsUsingICE;
@property(setter=setPaused:) BOOL isPaused;
@property(setter=setRemotePaused:) BOOL isRemotePaused;
@property(readonly) BOOL isChatPaused;
@property(readonly) BOOL hasReceivedFirstFrame;
@property BOOL isSendingVideo;
@property BOOL allowsVideo;
@property(readonly) BOOL didRemotePause;
@property float audioVolume;
@property(setter=setMute:) BOOL isMute;
@property(setter=setRemoteMute:) BOOL isRemoteMute;
@property(readonly) BOOL isChatMute;
@property BOOL isSendingAudio;
@property(readonly) BOOL didRemoteMute;
@property double invitationTimeoutTime;
@property double connectionTimeoutTime;
@property(setter=_setCallStatisticsGUID:,retain) NSString * _callStatisticsGUID;
@property(setter=_setConnectionType:) int _connectionType;
@property unsigned int cameraOrientation;
@property unsigned int cameraType;
@property BOOL lockCamera;
@property void* localVideoLayer;
@property void* localVideoBackLayer;
@property(readonly) unsigned int sessionID;
@property int callID;
@property(retain) NSString * conferenceID;
@property <IMAVChatDelegate> * delegate;
@property(retain) NSString * GUID;
@property(readonly) IMHandle * initiatorIMHandle;
@property(readonly) IMHandle * otherIMHandle;
@property(readonly) IMAccount * account;
@property(readonly) IMAVChatParticipant * initiatorParticipant;
@property(readonly) IMAVChatParticipant * localParticipant;
@property(readonly) NSArray * participants;
@property(readonly) NSArray * remoteParticipants;
@property(readonly) unsigned int state;
@property(readonly) BOOL isActive;
@property(readonly) BOOL isStateFinal;
@property(readonly) int endedError;
@property(readonly) unsigned int endedReason;
@property(readonly) NSDictionary * errorDictionary;
@property(readonly) NSDictionary * vcErrorReport;
@property(readonly) BOOL dataOut;
@property(readonly) BOOL dataIn;
@property(readonly) BOOL isQ8IrisOpen;
@property(setter=_setCallerProperties:,retain) NSDictionary * callerProperties;
@property(readonly) BOOL isAOLInterop;
@property <IMAVChatTheaterDelegate> * theaterDelegate;
@property(readonly) int addableParticipants;
@property(readonly) unsigned int addStatus;
@property(readonly) int numActiveParticipants;
@property(readonly) NSString * participantNames;
@property(readonly) NSDictionary * _extraServerContext;
@property(setter=_setCallStatisticsGUID:,retain) NSString * _callStatisticsGUID;
@property(setter=_setConferenceController:) id _conferenceController;
@property(setter=setConferenceSilent:) BOOL isConferenceSilent;
@property(setter=_setNatType:,retain) NSNumber * _natType;
@property(setter=_setLocalCell:) BOOL _localCell;
@property(setter=_setRemoteCell:) BOOL _remoteCell;
@property(setter=_setNeedsAudioRestart:) BOOL _needsAudioRestart;
@property(setter=_setNeedsVideoRestart:) BOOL _needsVideoRestart;
@property(readonly) struct dispatch_queue_s { }* _queue;
@property(readonly) BOOL isCaller;
@property(readonly) BOOL isVideo;
@property(readonly) BOOL isOneWay;
@property(readonly) BOOL canUseRelay;
@property(setter=_setConnectionType:) int _connectionType;
@property(readonly) NSDate * dateCreated;
@property(readonly) NSDate * dateConnected;
@property(readonly) NSDate * dateEnded;

+ (BOOL)isIMHandleInActiveConference:(id)arg1;
+ (BOOL)_anyOfTheseParticipants:(id)arg1 matchAnyOfTheseIMHandles:(id)arg2;
+ (id)avChatInvitedByIMHandle:(id)arg1 orConferenceID:(id)arg2;
+ (id)chatWithSessionID:(unsigned int)arg1;
+ (id)chatsWithIMAVChatState:(unsigned int)arg1;
+ (void)_sendUpdate;
+ (void)_doSendUpdate;
+ (void)setDefaultConnectionTimeoutTime:(double)arg1;
+ (void)setDefaultInvitationTimeoutTime:(double)arg1;
+ (BOOL)isStateFinal:(unsigned int)arg1;
+ (id)connectingChats;
+ (int)systemSupportsNewOutgoingConferenceTo:(id)arg1 isVideo:(BOOL)arg2;
+ (id)connectedChats;
+ (BOOL)isStateActive:(unsigned int)arg1;
+ (id)avChatWithMatchingIMHandles:(id)arg1 video:(BOOL)arg2 ARDRole:(int)arg3;
+ (int)maxRemoteParticipantsVideo:(BOOL)arg1;
+ (int)systemSupportsNewOutgoingConferenceTo:(id)arg1 isVideo:(BOOL)arg2 isARD:(BOOL)arg3;
+ (id)allowedClassesForArchives;
+ (double)defaultInvitationTimeoutTime;
+ (double)defaultConnectionTimeoutTime;
+ (void)getVideoStillForIMHandle:(id)arg1 data:(id*)arg2 result:(unsigned int*)arg3;
+ (id)currentAVChatInfo;
+ (id)chatList;
+ (id)avChatWithConferenceID:(id)arg1;
+ (id)bestGuessAVChatWithIMHandle:(id)arg1 conferenceID:(id)arg2 sessionID:(unsigned int)arg3 properties:(id)arg4;
+ (id)outgoingInvitations;
+ (id)incomingInvitations;
+ (id)_avChatArray;
+ (id)connectedChat;
+ (id)nonFinalChat;
+ (id)activeChat;
+ (id)avChatWaitingForReplyFromIMHandle:(id)arg1 orConferenceID:(id)arg2;

- (id)account;
- (id)participants;
- (unsigned int)cameraType;
- (void)setDelegate:(id)arg1;
- (id)conferenceID;
- (void)_reportError:(id)arg1;
- (void)setPaused:(BOOL)arg1;
- (BOOL)isActive;
- (unsigned int)state;
- (id)delegate;
- (void)systemApplicationWillEnterForeground;
- (BOOL)isPaused;
- (id)error;
- (void)setCameraType:(unsigned int)arg1;
- (unsigned int)sessionID;
- (BOOL)isCaller;
- (int)callID;
- (void)setCallID:(int)arg1;
- (void*)localVideoBackLayer;
- (void)setLocalVideoBackLayer:(void*)arg1;
- (BOOL)startPreviewWithError:(id*)arg1;
- (void*)localVideoLayer;
- (void)setLocalVideoLayer:(void*)arg1;
- (BOOL)stopPreview;
- (id)description;
- (void)dealloc;
- (void)finalizeOrderWithVideoFrom:(id)arg1;
- (id)orderedRemotePartyIDs;
- (void)removeParticipantWithID:(id)arg1;
- (BOOL)canAddIMHandle:(id)arg1;
- (id)stringForAddStatus;
- (BOOL)_allParticipantsUsingICE;
- (int)numActiveParticipants;
- (id)stringForAddStatus:(unsigned int)arg1;
- (BOOL)_imHandlesRequireCoercedIDs:(id)arg1;
- (void)_finalizeParticipantOrder:(id)arg1 andNotify:(BOOL)arg2;
- (id)participantsNotInNuggets:(id)arg1;
- (BOOL)_moveVCPartyID:(id)arg1 toIndex:(unsigned int)arg2 inCount:(unsigned int)arg3;
- (void)_saveAudioRestartState;
- (void)_saveVideoRestartState;
- (void)_resumeVideoState;
- (void)_resumeAudioState;
- (id)_currentAVChatInfo;
- (BOOL)isRemoteNetworkStalled;
- (BOOL)isLocalNetworkStalled;
- (void)toggleSendingVideo;
- (void)setAllowsVideo:(BOOL)arg1;
- (BOOL)allowsVideo;
- (BOOL)didRemotePause;
- (void)toggleChatPaused;
- (BOOL)isChatPaused;
- (BOOL)hasReceivedFirstFrame;
- (void)toggleRemotePaused;
- (void)togglePaused;
- (void)setRemotePaused:(BOOL)arg1;
- (BOOL)isRemotePaused;
- (void)setAudioVolume:(float)arg1;
- (float)audioVolume;
- (void)toggleSendingAudio;
- (BOOL)didRemoteMute;
- (void)toggleChatMute;
- (BOOL)isChatMute;
- (void)toggleRemoteMute;
- (void)toggleMute;
- (void)setRemoteMute:(BOOL)arg1;
- (BOOL)isRemoteMute;
- (BOOL)isMute;
- (void)auxVideoEndedForPersonWithID:(id)arg1;
- (void)auxVideoBeganForPersonWithID:(id)arg1;
- (void)conferencePersonWithID:(id)arg1 approvedAuxVideo:(BOOL)arg2;
- (BOOL)shouldConferenceAcceptAuxVideoFromUser:(id)arg1;
- (void)_vccInitDidFinish;
- (void)conferencePersonWithID:(id)arg1 sendRelayCancel:(id)arg2;
- (void)conferencePersonWithID:(id)arg1 sendRelayUpdate:(id)arg2;
- (void)conferencePersonWithID:(id)arg1 sendRelayRequest:(id)arg2;
- (BOOL)shouldConferenceAcceptIncomingRequestFromUser:(id)arg1 onLocalSubnetOnly:(BOOL*)arg2;
- (void)conferenceHasTimedOut;
- (void)conferenceHasVideoError;
- (void)conferencePersonWithID:(id)arg1 hasInfoForNoPackets:(id)arg2;
- (void)conferencePersonWithID:(id)arg1 hasInfoForInsufficientBandwidth:(id)arg2;
- (void)conferencePersonWithID:(id)arg1 didStall:(BOOL)arg2;
- (void)conferencePersonWithID:(id)arg1 didPause:(BOOL)arg2;
- (void)conferencePersonWithID:(id)arg1 didMute:(BOOL)arg2;
- (void)conferencePersonWithID:(id)arg1 didCancel:(BOOL)arg2;
- (void)conferencePersonWithID:(id)arg1 didConnect:(BOOL)arg2;
- (void)conferenceHungUpByPersonWithID:(id)arg1;
- (void)conferencePersonWithID:(id)arg1 completedWithInfo:(id)arg2;
- (void)_configureVCC;
- (void)_unknownParty:(id)arg1 muteOrPause:(unsigned int)arg2 didChange:(BOOL)arg3;
- (void)_noteConferenceConnected:(id)arg1;
- (void)_unknownParty:(id)arg1 didConnect:(BOOL)arg2;
- (void)_relayPropose:(id)arg1;
- (void)startVCOnMainThread:(id)arg1;
- (void)_setFirstFrameTimeoutTimer;
- (void)_setScreenSaverBlockingTimer;
- (void)_breakBeforeMakeTimer:(id)arg1;
- (void)_firstFrameTimeout:(id)arg1;
- (void)_invitationTimeout:(id)arg1;
- (void)_connectionTimeout:(id)arg1;
- (void)_blockScreenSaver:(id)arg1;
- (void)setConnectionTimeoutTime:(double)arg1;
- (double)connectionTimeoutTime;
- (void)setInvitationTimeoutTime:(double)arg1;
- (double)invitationTimeoutTime;
- (void)_setConnectionTimeoutTimer;
- (id)_callLoggingOutput;
- (void)setLockCamera:(BOOL)arg1;
- (BOOL)lockCamera;
- (void)_postParticipantMediaChangeNotification:(id)arg1 cameraChanged:(BOOL)arg2 orientationChanged:(BOOL)arg3 aspectChanged:(BOOL)arg4 cameraWillSwitch:(BOOL)arg5 camera:(unsigned int)arg6 orientation:(unsigned int)arg7 aspect:(struct CGSize { float x1; float x2; })arg8;
- (BOOL)canUseRelay;
- (void)setIsSendingVideo:(BOOL)arg1;
- (void)setIsSendingAudio:(BOOL)arg1;
- (unsigned int)addStatusForIMHandle:(id)arg1 asVideo:(BOOL)arg2 ardRole:(int)arg3;
- (BOOL)closeCamera;
- (void)setCameraOrientation:(unsigned int)arg1;
- (unsigned int)cameraOrientation;
- (struct CGSize { float x1; float x2; })localAspectRatioForCameraOrientation:(unsigned int)arg1 cameraType:(unsigned int)arg2;
- (void)_setBreakBeforeMakeTimer;
- (void)participant:(id)arg1 changedFromState:(unsigned int)arg2 toState:(unsigned int)arg3;
- (void)_noteInviteDeliveredForParticipant:(id)arg1;
- (unsigned int)addStatus;
- (int)addableParticipants;
- (id)dateEnded;
- (id)dateCreated;
- (id)dateConnected;
- (void)_setConferenceController:(id)arg1;
- (id)_conferenceController;
- (void)setGUID:(id)arg1;
- (id)GUID;
- (BOOL)dataIn;
- (BOOL)dataOut;
- (void)setConferenceSilent:(BOOL)arg1;
- (BOOL)isConferenceSilent;
- (void)_setNeedsVideoRestart:(BOOL)arg1;
- (BOOL)_needsVideoRestart;
- (void)_setNeedsAudioRestart:(BOOL)arg1;
- (BOOL)_needsAudioRestart;
- (void)_setRemoteCell:(BOOL)arg1;
- (BOOL)_remoteCell;
- (void)_setLocalCell:(BOOL)arg1;
- (BOOL)_localCell;
- (void)_setNatType:(id)arg1;
- (id)_natType;
- (BOOL)isQ8IrisOpen;
- (void)_setCallStatisticsGUID:(id)arg1;
- (id)_callStatisticsGUID;
- (void)_setConnectionType:(int)arg1;
- (int)_connectionType;
- (struct dispatch_queue_s { }*)_queue;
- (void)_noteFirstFrame;
- (void)_postNotificationName:(id)arg1 participant:(id)arg2 userInfo:(id)arg3;
- (void)_setErrorDictionary:(id)arg1;
- (id)errorDictionary;
- (id)vcErrorReport;
- (BOOL)isOneWay;
- (id)theaterDelegate;
- (void)setTheaterDelegate:(id)arg1;
- (id)vcPartyIDForIMHandle:(id)arg1;
- (id)participantWithID:(id)arg1;
- (id)participantNames;
- (void)handleVideoConferenceNotification:(id)arg1;
- (void)_inviteeInfoChanged:(id)arg1;
- (void)_imHandleStatusChanged:(id)arg1;
- (void)_subscribeToVCNotifications;
- (void)_counterPropose:(id)arg1;
- (void)sendARDFileTransferAuthorization:(id)arg1 to:(id)arg2;
- (void)declineInvitation;
- (void)invite:(id)arg1;
- (void)inviteAll;
- (void)endChatWithError:(int)arg1;
- (void)endChat;
- (id)initOutgoingTo:(id)arg1 isVideo:(BOOL)arg2;
- (id)initPersistentAVChatWith:(id)arg1 invitedBy:(id)arg2 ARDRole:(int)arg3 sessionID:(unsigned int)arg4 video:(BOOL)arg5;
- (void)systemDidFastUserSwitchOut;
- (void)systemApplicationDidResumeForEventsOnly;
- (void)systemApplicationDidResume;
- (void)systemApplicationDidSuspend;
- (void)systemApplicationDidBecomeActive;
- (void)systemApplicationDidEnterBackground;
- (void)systemWillShutdown;
- (void)_setStateDisconnected;
- (BOOL)isAOLInterop;
- (id)_participantMatchingVCPartyID:(id)arg1;
- (void)_updateParticipantsWithData:(id)arg1;
- (void)_threadedPrepareConnectionForInvitedParty:(id)arg1;
- (BOOL)_checkVCResponseDict:(id)arg1;
- (void)_mainThreadFinishPrepareConnectionForInvitedParty:(id)arg1;
- (void)_prepareConnectionForParticipant:(id)arg1;
- (void)_updateIMHandleInBuddyList:(id)arg1;
- (void)_connectTo:(id)arg1 withData:(id)arg2;
- (void)connectProc:(id)arg1;
- (int)endedError;
- (void)endChatWithReason:(unsigned int)arg1 error:(int)arg2;
- (void)endChatWithReason:(unsigned int)arg1;
- (void)_postNotificationName:(id)arg1 userInfo:(id)arg2;
- (void)invalidateParticipantNames;
- (void)_refreshAddableParticipants;
- (void)_sendVCUpdateTo:(id)arg1 skipConnected:(BOOL)arg2;
- (void)_insertRemoteParticipant:(id)arg1 atIndex:(unsigned int)arg2;
- (void)_configureVCCRecv;
- (BOOL)isStateFinal;
- (void)setMute:(BOOL)arg1;
- (void)_setActiveConference;
- (void)_postStateToDelegateIfNecessary;
- (void)_clearBreakBeforeMakeTimer;
- (void)_clearScreenSaverBlockingTimer;
- (void)_clearInvitationTimeoutTimer;
- (void)_clearFirstFrameTimeoutTimer;
- (void)_clearConnectionTimeoutTimer;
- (void)notifySystemVC:(BOOL)arg1;
- (id)initOutgoingTo:(id)arg1 isVideo:(BOOL)arg2 ARDRole:(int)arg3;
- (void)_setCallerProperties:(id)arg1;
- (id)_initWith:(id)arg1 invitedBy:(id)arg2 ARDRole:(int)arg3 sessionID:(unsigned int)arg4 video:(BOOL)arg5 extraProperties:(id)arg6;
- (void)_determineDataIn;
- (int)_initialRelayStatus;
- (void)_initiatorInfoChanged:(id)arg1;
- (void)_noteStatusChangesForParticipant:(id)arg1;
- (id)initiatorParticipant;
- (BOOL)_participantsCheckOut;
- (void)_initParticipantsWithNuggets:(id)arg1;
- (void)setLocalAspectRatio:(struct CGSize { float x1; float x2; })arg1 cameraOrientation:(unsigned int)arg2 cameraType:(unsigned int)arg3;
- (void)_initParticipantsWithIMHandles:(id)arg1;
- (void)_setCreationDate;
- (void)_handleRelayCancel:(id)arg1 fromParticipant:(id)arg2;
- (void)_handleRelayUpdate:(id)arg1 fromParticipant:(id)arg2;
- (void)_handleRelayInitate:(id)arg1 fromParticipant:(id)arg2;
- (void)_handleAVError:(id)arg1;
- (id)initiatorIMHandle;
- (unsigned int)endedReason;
- (void)_setInvitationTimeoutTimer;
- (void)declineInvitationWithResponse:(unsigned int)arg1;
- (void)_peerID:(id)arg1 changedTo:(id)arg2;
- (void)handleGenericAVMessageFromParticipant:(id)arg1 type:(unsigned int)arg2 userInfo:(id)arg3;
- (void)_participantsChanged:(id)arg1;
- (void)_cancelInvitationWithReason:(unsigned int)arg1 error:(int)arg2;
- (void)_responseToVCInvite:(id)arg1;
- (void)_VCCounterProposal:(id)arg1;
- (void)cancelInvitation;
- (void)acceptInvitation;
- (void)beginChat;
- (void)_setConferenceID:(id)arg1;
- (id)initIncomingFrom:(id)arg1 isVideo:(BOOL)arg2 callerProperties:(id)arg3;
- (BOOL)openCamera;
- (id)participantMatchingIMHandle:(id)arg1;
- (id)remoteParticipants;
- (id)otherIMHandle;
- (BOOL)isSendingVideo;
- (BOOL)isSendingAudio;
- (id)localParticipant;
- (id)_extraServerContext;
- (id)callerProperties;
- (void)_endChatWithReason:(unsigned int)arg1 andError:(int)arg2;
- (id)inviteesInfoAsPlist:(BOOL)arg1 account:(id)arg2;
- (BOOL)isVideo;

@end
