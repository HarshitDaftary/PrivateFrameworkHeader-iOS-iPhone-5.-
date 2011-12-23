/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MediaControlReceiver.framework/MediaControlReceiver
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class <MediaControlServerDelegate>, AirPlayLocalSlideshow;

@interface MediaControlServer : NSObject  {
    struct MediaControlServerImp { struct HTTPServer { 
            struct { 
                unsigned int serverSize; 
                unsigned int connectionSize; 
                int (*doServerFree)(); 
                int (*doServerStart)(); 
                int (*doServerStop)(); 
                int (*doConnectionInit)(); 
                int (*doConnectionFree)(); 
                int (*doProcessRequest)(); 
                int (*doInitResponse)(); 
                int listenerPort; 
                int socketBufferSize; 
                int qos; 
                void *userData; 
            } config; 
            struct dispatch_queue_s {} *serverQueue; 
            struct dispatch_semaphore_s {} *stopSem; 
            int listenerPort; 
            struct { 
                struct dispatch_source_s {} *source; 
                int socket; 
                struct HTTPServer {} *server; 
            } listenerIPv4; 
            struct { 
                struct dispatch_source_s {} *source; 
                int socket; 
                struct HTTPServer {} *server; 
            } listenerIPv6; 
            struct HTTPServerConnection {} *connectionList; 
            unsigned int lastConnectionID; 
            struct LogCategory {} *ucatRequest; 
            struct LogCategory {} *ucatResponse; 
            struct LogCategory {} *ucatConnections; 
            struct __CFString {} *megaBytesPerSecKey; 
        } x1; struct { 
            void *userData; 
            int (*actionFunc)(); 
            int (*photoDataFunc)(); 
            int (*photoFileFunc)(); 
            int (*presentFunc)(); 
            int (*copyPropertyFunc)(); 
            int (*setPropertyFunc)(); 
            int (*copySlideshowFeaturesFunc)(); 
            int (*copySlideshowInfoFunc)(); 
            int (*setSlideshowInfoFunc)(); 
            int (*playFunc)(); 
            int (*stopFunc)(); 
            int (*rateSetFunc)(); 
            int (*scrubGetFunc)(); 
            int (*scrubSetFunc)(); 
            int (*volumeGetFunc)(); 
            int (*volumeSetFunc)(); 
            int (*playbackInfoFunc)(); 
        } x2; unsigned int x3; unsigned char x4[6]; struct _DNSServiceRef_t {} *x5; BOOL x6[16]; char *x7; unsigned char x8; unsigned int x9; } *_server;
    struct dispatch_queue_s { } *_dispatchQueue;
    <MediaControlServerDelegate> *_delegate;
    AirPlayLocalSlideshow *_slideshow;
    double _lastActivity;
}

@property unsigned int supportedFeatures;
@property <MediaControlServerDelegate> * delegate;


- (long)setPassword:(id)arg1;
- (long)start;
- (void)invalidate;
- (void)setDelegate:(id)arg1;
- (unsigned int)supportedFeatures;
- (void)setSupportedFeatures:(unsigned int)arg1;
- (void)slideshowRequestAssetWithInfo:(id)arg1 sessionUUID:(const char *)arg2 completion:(id)arg3;
- (void)postEvent:(id)arg1;
- (id)delegate;
- (void)setDispatchQueue:(struct dispatch_queue_s { }*)arg1;
- (id)init;
- (void)dealloc;

@end
