/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLKeepDaemonAliveAssertion : NSObject  {
    struct _xpc_connection_s { } *_keepaliveConnection;
}

+ (id)assertion;

- (void)_applicationDidBecomeActive:(id)arg1;
- (void)_applicationWillResignActive:(id)arg1;
- (void)_setupHeartBeatForConnection:(struct _xpc_connection_s { }*)arg1;
- (void)_tearDownConnection;
- (void)_unregisterForAppActiveNotifications;
- (void)_setupConnection;
- (void)_registerForAppActiveNotifications;
- (id)init;
- (void)dealloc;

@end
