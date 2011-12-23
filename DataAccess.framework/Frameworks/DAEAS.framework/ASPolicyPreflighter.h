/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

@class ASPolicy, ASAccount, NSString, ASTaskManager, <ASPolicyPreflighterDelegate>;

@interface ASPolicyPreflighter : NSObject  {
    ASAccount *_account;
    NSString *_originalKey;
    NSString *_newKey;
    <ASPolicyPreflighterDelegate> *_delegate;
    ASPolicy *_policy;
    ASPolicy *_acknowledgedPolicy;
    ASTaskManager *_taskManager;
    id _contextInfo;
    BOOL _invalidated;
}


- (id)account;
- (void)invalidate;
- (void)setDelegate:(id)arg1;
- (void)_invalidate;
- (id)delegate;
- (void)dealloc;
- (void)cancelPendingPreflightRequest;
- (void)acknowledgeIntentionToRemoteWipe;
- (void)acknowledgePolicyCompliance;
- (void)startPreflight;
- (void)provisionTask:(id)arg1 wipeRequested:(BOOL)arg2 policies:(id)arg3 status:(int)arg4;
- (void)provisionTask:(id)arg1 failedWithError:(id)arg2;
- (id)initWithAccount:(id)arg1 policyKey:(id)arg2;
- (id)contextInfo;
- (void)setContextInfo:(id)arg1;
- (void)_setAcknowledgedPolicy:(id)arg1;
- (id)_originalKey;
- (id)_acknowledgedPolicy;
- (void)_setPolicy:(id)arg1;

@end
