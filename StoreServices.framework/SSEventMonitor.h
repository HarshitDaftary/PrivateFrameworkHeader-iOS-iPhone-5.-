/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class <SSEventMonitorDelegate>, SSXPCConnection;

@interface SSEventMonitor : NSObject  {
    <SSEventMonitorDelegate> *_delegate;
    struct dispatch_queue_s { } *_delegateQueue;
    struct dispatch_queue_s { } *_dispatchQueue;
    SSXPCConnection *_eventConnection;
}

@property <SSEventMonitorDelegate> * delegate;


- (void)_connectEventConnection;
- (void)_handleMessage:(void*)arg1 fromServerConnection:(struct _xpc_connection_s { }*)arg2;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (id)init;
- (void)dealloc;

@end
