/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSArray, NSString, NSMutableSet;

@interface SSRequestGroup : NSObject  {
    NSString *_identifier;
    NSMutableSet *_requests;
    Class _requestClass;
}

@property(readonly) NSString * groupIdentifier;
@property(readonly) NSArray * requests;


- (id)initWithGroupIdentifier:(id)arg1;
- (void)_setGroupIdentifier:(id)arg1 forRequestWithIdentifier:(id)arg2;
- (void)_unregisterForDaemonNotifications;
- (void)_reloadRequestsFromDaemon;
- (void)_registerForDaemonNotifications;
- (void)removeRequest:(id)arg1;
- (void)_mainThreadDaemonExited:(id)arg1;
- (id)groupIdentifier;
- (void)addRequest:(id)arg1;
- (id)requests;
- (id)initWithGroupIdentifier:(id)arg1 requestClass:(Class)arg2;
- (id)init;
- (void)dealloc;
- (void)_daemonExited:(id)arg1;

@end
