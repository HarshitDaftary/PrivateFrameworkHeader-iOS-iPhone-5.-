/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/IMCore.framework/Frameworks/IMFoundation.framework/IMFoundation
 */

@class NSProtocolChecker, NSMutableArray, Protocol;

@interface IMInvocationQueue : NSObject  {
    id _delegate;
    id _target;
    double _dequeueRate;
    NSMutableArray *_queue;
    NSMutableArray *_options;
    NSProtocolChecker *_protocolChecker;
    BOOL _holdQueue;
}

@property(retain) Protocol * protocol;
@property id target;
@property id delegate;
@property double dequeueRate;
@property(readonly) BOOL isEmpty;
@property(readonly) unsigned int count;
@property(readonly) BOOL holdQueue;
@property(readonly) NSMutableArray * queue;
@property(readonly) NSMutableArray * options;
@property(readonly) NSProtocolChecker * protocolChecker;


- (void)setDelegate:(id)arg1;
- (id)peek;
- (BOOL)holdQueue;
- (id)protocolChecker;
- (double)dequeueRate;
- (void)invokeAll;
- (void)removeAllInvocations;
- (void)_releaseQueueNotification:(id)arg1;
- (void)_holdQueueNotification:(id)arg1;
- (void)_stepQueueNotification:(id)arg1;
- (void)setDequeueRate:(double)arg1;
- (BOOL)_insertInvocation:(id)arg1 options:(unsigned int)arg2;
- (BOOL)_replaceSimilarInvocation:(id)arg1;
- (BOOL)_acceptsOptions:(unsigned int)arg1;
- (int)_maxQueueLimitSize;
- (int)_numberOfLimitedMessagesInQueue;
- (id)_dequeueInvocation;
- (void)_checkQueue;
- (void)_setQueueTimer;
- (BOOL)_invokeInvocation:(id)arg1;
- (int)_enqueueInvocation:(id)arg1 options:(unsigned int)arg2;
- (unsigned int)_optionsForInvocation:(id)arg1;
- (id)protocol;
- (id)options;
- (void)forwardInvocation:(id)arg1;
- (BOOL)isEmpty;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)delegate;
- (void)setTarget:(id)arg1;
- (unsigned int)count;
- (id)target;
- (id)init;
- (void)dealloc;
- (id)queue;
- (void)setProtocol:(id)arg1;

@end
