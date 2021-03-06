/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@class PTPTCPIPConnection, NSString, NSMutableData;

@interface PTPTCPIPTransport : PTPTransport  {
    struct __CFSocket { } *_socket;
    NSString *_hostName;
    unsigned short _hostPort;
    NSString *_hostGUID;
    NSString *_targetName;
    NSString *_targetAddress;
    unsigned int _targetPort;
    NSString *_targetGUID;
    id _connectionRequestResponse;
    unsigned int _connectionNumber;
    PTPTCPIPConnection *_tempConnection;
    NSMutableData *_tempData;
    PTPTCPIPConnection *_cdConnection;
    PTPTCPIPConnection *_eventConnection;
    NSMutableData *_cdData;
    NSMutableData *_eventData;
    BOOL _delegateNeedsData;
}


- (void)sendData:(id)arg1;
- (id)initWithHostPort:(unsigned long)arg1 hostName:(id)arg2 hostGUID:(id)arg3 bonjourServiceType:(id)arg4 bonjourTXTRecords:(id)arg5 delegate:(id)arg6;
- (id)initForAcceptedSocketWithDelegate:(id)arg1 andHostGUID:(id)arg2 andHostName:(id)arg3;
- (id)initWithTargetAddress:(id)arg1 targetPort:(unsigned long)arg2 targetGUID:(id)arg3 targetName:(id)arg4 hostGUID:(id)arg5 hostName:(id)arg6 delegate:(id)arg7;
- (id)targetName;
- (id)targetAddress;
- (unsigned long)targetPort;
- (id)targetGUID;
- (BOOL)startResponder;
- (BOOL)connected;
- (BOOL)sendStartData:(id)arg1;
- (BOOL)sendCancel:(id)arg1;
- (id)sendRequest:(id)arg1 receiveData:(id)arg2 timeout:(unsigned long)arg3;
- (void)cancelTransaction:(id)arg1;
- (void)acceptConnectionFromSocket:(int)arg1;
- (BOOL)startInitiator;
- (BOOL)waitForConnectionWithTimeout:(double)arg1;
- (void)releaseConnections;
- (void)sendDataPackets:(id)arg1;
- (void)handleData:(id)arg1 from:(id)arg2;
- (void)didCloseConnection:(id)arg1 withError:(struct { int x1; int x2; })arg2;
- (void)stop;
- (BOOL)sendEvent:(id)arg1;
- (id)description;
- (void)dealloc;
- (BOOL)sendResponse:(id)arg1;

@end
