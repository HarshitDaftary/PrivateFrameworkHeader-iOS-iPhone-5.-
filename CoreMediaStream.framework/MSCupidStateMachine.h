/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@class MSBackoffManager, NSString, NSMutableDictionary;

@interface MSCupidStateMachine : NSObject <MSStreamsProtocolDelegate> {
    NSString *_personID;
    NSString *_manifestPath;
    NSMutableDictionary *_userManifest;
    MSBackoffManager *_streamsBackoffManager;
    MSBackoffManager *_MMCSBackoffManager;
}

@property(retain) NSMutableDictionary * _userManifest;
@property(readonly) NSString * personID;


- (void)set_userManifest:(id)arg1;
- (void)_commitUserManifest;
- (id)_userManifest;
- (void)_forget;
- (void)protocol:(id)arg1 didReceiveRetryAfterDate:(id)arg2;
- (void)_abort;
- (void)_resetMMCSBackoffTimer;
- (void)_backoffMMCSBackoffTimer;
- (void)_didReceiveMMCSRetryAfterDate:(id)arg1;
- (void)_resetStreamsBackoffTimer;
- (void)_backoffStreamsBackoffTimer;
- (void)_didReceiveStreamsRetryAfterDate:(id)arg1;
- (void)_updateMasterManifest;
- (id)_latestNextActivityDate;
- (id)initWithPersonID:(id)arg1;
- (void)forget;
- (void)deactivate;
- (id)personID;
- (void)dealloc;

@end
