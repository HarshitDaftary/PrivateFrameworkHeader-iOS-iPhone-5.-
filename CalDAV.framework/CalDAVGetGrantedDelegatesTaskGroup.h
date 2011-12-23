/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@interface CalDAVGetGrantedDelegatesTaskGroup : CalDAVGetDelegatesBaseTaskGroup  {
    int _state;
    BOOL _fetchPrincipalDetails;
}

@property BOOL fetchPrincipalDetails;
@property int state;


- (void)_finishWithError:(id)arg1 state:(int)arg2;
- (void)taskGroup:(id)arg1 didFinishWithError:(id)arg2;
- (void)startTaskGroup;
- (void)task:(id)arg1 didFinishWithError:(id)arg2;
- (void)setState:(int)arg1;
- (int)state;
- (void)setFetchPrincipalDetails:(BOOL)arg1;
- (id)_urlAppendingSegmentWithAllowWrite:(BOOL)arg1;
- (void)_expandPropertiesWithAllowWrite:(BOOL)arg1;
- (void)_fetchOnlyHrefs;
- (BOOL)fetchPrincipalDetails;
- (void)_getChildProperties;
- (id)initWithAccountInfoProvider:(id)arg1 principalURL:(id)arg2 taskManager:(id)arg3;

@end
