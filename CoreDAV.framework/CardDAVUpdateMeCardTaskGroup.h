/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class NSURL;

@interface CardDAVUpdateMeCardTaskGroup : CoreDAVTaskGroup <CoreDAVPropPatchTaskDelegate> {
    NSURL *_homeURL;
    NSURL *_cardURL;
}

@property(readonly) NSURL * cardURL;
@property(readonly) NSURL * homeURL;


- (id)homeURL;
- (id)cardURL;
- (id)initWithAccountInfoProvider:(id)arg1 taskManager:(id)arg2 homeURL:(id)arg3 cardURL:(id)arg4;
- (id)_newPropPatchTask;
- (void)propPatchTask:(id)arg1 parsedResponses:(id)arg2 error:(id)arg3;
- (void)taskGroupWillCancelWithError:(id)arg1;
- (void)startTaskGroup;
- (id)description;
- (void)dealloc;

@end
