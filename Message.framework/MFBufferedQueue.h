/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class NSMutableArray;

@interface MFBufferedQueue : NSObject  {
    unsigned int _maximumSize;
    double _maximumLatency;
    double _timeOfLastFlush;
    NSMutableArray *_queue;
    unsigned int _currentSize;
}

@property double maximumLatency;
@property unsigned int maximumSize;
@property(readonly) unsigned int size;


- (BOOL)addItem:(id)arg1;
- (double)maximumLatency;
- (void)setMaximumLatency:(double)arg1;
- (id)initWithMaximumSize:(unsigned int)arg1 latency:(double)arg2;
- (unsigned int)sizeForItem:(id)arg1;
- (BOOL)handleItems:(id)arg1;
- (BOOL)flush;
- (BOOL)isEmpty;
- (void)removeAllObjects;
- (unsigned int)size;
- (void)setMaximumSize:(unsigned int)arg1;
- (unsigned int)maximumSize;
- (id)init;
- (void)dealloc;

@end
