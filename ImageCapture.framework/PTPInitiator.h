/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@class PTPWrappedBytes, PTPDeviceInfoDataset, NSMutableArray, PTPEventPacket, PTPTransport, NSString, PTPOperationResponsePacket, NSMutableDictionary;

@interface PTPInitiator : NSObject  {
    PTPTransport *_transport;
    PTPOperationResponsePacket *_response;
    PTPEventPacket *_event;
    unsigned int _transactionID;
    unsigned short _operationCode;
    BOOL _responseReceived;
    BOOL _requestPending;
    BOOL _cancelOp;
    unsigned int _lastAddedObject;
    id _delegate;
    BOOL _sessionOpen;
    BOOL _needToReopenSession;
    NSMutableArray *_storages;
    PTPDeviceInfoDataset *_deviceInfo;
    NSMutableArray *_eventQueue;
    unsigned short _deviceVendorID;
    unsigned short _deviceProductID;
    NSString *_UUIDString;
    NSString *_deviceSerialNumberString;
    unsigned int _estimatedNumOfDownloadableObjects;
    unsigned int _numOfDownloadableObjectsPlusFolders;
    unsigned int _contentCatalogPercentCompleted;
    NSString *_userAssignedDeviceName;
    BOOL _appleDeviceHasNewFW;
    BOOL _deviceIsPairedWithThisHost;
    BOOL _deviceIsPasscodeLocked;
    BOOL _deviceIsDummyPTPDevice;
    NSMutableDictionary *_arrayOf64BitFileSizes;
    PTPWrappedBytes *_dataForTransaction;
    unsigned long long _excessReceivedDataSize;
    unsigned long long _totalFDFileSize;
    unsigned long long _totalFDReceivedSize;
    unsigned int _totalFDReportedProgress;
    double _currentFDNoteTime;
    char *_metadataBuffer;
    unsigned int _maxMetadataBufferSize;
}


- (BOOL)start;
- (double)timeOffset;
- (void)setDelegate:(id)arg1;
- (id)deviceSerialNumberString;
- (BOOL)appleDeviceHasNewFW;
- (BOOL)deviceIsPairedWithThisHost;
- (BOOL)deviceIsPasscodeLocked;
- (BOOL)deviceIsDummyPTPDevice;
- (unsigned long)numOfDownloadableObjectsPlusFolders;
- (int)transportConnectionStatus;
- (void)appendDataBuffer:(void*)arg1 length:(unsigned long)arg2;
- (void)handleData:(id)arg1;
- (void)handleDeviceRemoval;
- (BOOL)waitForResponseWithTimeout:(double)arg1 notifyProgressForFile:(id)arg2;
- (void)issueCancelEvent:(unsigned long)arg1;
- (void)issueCancelRequest:(unsigned long)arg1;
- (id)sendRequest:(id)arg1 andSendData:(id)arg2;
- (id)devicePropertyDescDatasetForProperty:(unsigned short)arg1;
- (id)devicePropertyValueForProperty:(unsigned short)arg1;
- (BOOL)resetDevicePropertyValueForProperty:(unsigned short)arg1;
- (unsigned long)numObjectsInStorage:(unsigned long)arg1 objectFormatCode:(unsigned long)arg2 association:(unsigned long)arg3;
- (id)objectFilesystemInfosForObjectsInStorage:(unsigned long)arg1 objectFormatCode:(unsigned long)arg2 association:(unsigned long)arg3;
- (BOOL)initiateCapture;
- (BOOL)setDeviceDateTime:(id)arg1;
- (BOOL)requestPending;
- (id)objectInfo:(unsigned long)arg1;
- (id)itemForObjectHandle:(unsigned long)arg1;
- (id)storageForStorageID:(unsigned long)arg1;
- (id)transport;
- (unsigned short)saveFile:(id)arg1 to:(id)arg2;
- (id)thumbDataFromFile:(id)arg1 maxSize:(unsigned long)arg2 actualSize:(unsigned int*)arg3 useBuffer:(char *)arg4;
- (id)partialDataFromFile:(id)arg1 fromOffset:(unsigned long)arg2 maxSize:(unsigned long)arg3 actualSize:(unsigned int*)arg4 useBuffer:(char *)arg5;
- (char *)metadataBuffer;
- (unsigned long)maxMetadataBufferSize;
- (id)storageInfo:(unsigned long)arg1;
- (id)objectInfosForObjectsInStorage:(unsigned long)arg1 objectFormatCode:(unsigned long)arg2 association:(unsigned long)arg3;
- (id)objectHandlesInStorage:(unsigned long)arg1 objectFormatCode:(unsigned long)arg2 association:(unsigned long)arg3;
- (id)objectInfosForObjectsInStorage64:(unsigned long)arg1 objectFormatCode:(unsigned long)arg2 association:(unsigned long)arg3;
- (id)objectHandlesInStorage64:(unsigned long)arg1 objectFormatCode:(unsigned long)arg2 association:(unsigned long)arg3;
- (BOOL)closeSession;
- (id)sendRequest:(id)arg1 andReceiveData:(id)arg2 excessReceivedDataSize:(unsigned long long*)arg3 timeout:(double)arg4;
- (void)processUnhandledEvents;
- (id)sendRequest:(id)arg1 andReceiveData:(id)arg2 maxDataSize:(unsigned long)arg3 excessReceivedDataSize:(unsigned long long*)arg4 timeout:(double)arg5;
- (id)sendRequest:(id)arg1 excessReceivedDataSize:(unsigned long long*)arg2 timeout:(double)arg3;
- (BOOL)allowKeepAwake;
- (id)storageIDs;
- (unsigned long long)objectInfo64BitSize:(unsigned long)arg1;
- (id)dataFromFile:(id)arg1 maxSize:(unsigned long)arg2 actualSize:(unsigned int*)arg3 useBuffer:(char *)arg4;
- (unsigned short)savePartialFile:(id)arg1 fromOffset:(unsigned long long)arg2 size:(unsigned long long)arg3 to:(id)arg4;
- (id)deviceDateTime;
- (BOOL)setDevicePropertyValue:(id)arg1 forProperty:(unsigned short)arg2;
- (unsigned short)deviceStatus;
- (void)deviceReset;
- (void)handleReroutedEvent:(id)arg1;
- (id)initWithHostLocationID:(unsigned long)arg1;
- (id)deviceInfo;
- (BOOL)openSession;
- (id)refreshAssignedDeviceName;
- (id)userAssignedDeviceName;
- (unsigned short)deviceVendorID;
- (unsigned short)deviceProductID;
- (id)initWithTargetAddress:(id)arg1 targetPort:(unsigned long)arg2 targetGUID:(id)arg3 targetName:(id)arg4 hostGUID:(id)arg5 hostName:(id)arg6;
- (id)initiator;
- (void)readStorages;
- (BOOL)deleteFile:(id)arg1;
- (BOOL)isAccessRestrictedAppleDevice;
- (void)setContentCatalogPercentCompleted:(unsigned long)arg1;
- (void)sentData:(id)arg1;
- (void)transportActivated;
- (void)transportDeactivated;
- (void)handleStartData:(id)arg1;
- (void)handleResponse:(id)arg1;
- (void)stop;
- (void)handleEvent:(id)arg1;
- (id)UUIDString;
- (unsigned long)contentCatalogPercentCompleted;
- (void)cancel;
- (void)dealloc;

@end
