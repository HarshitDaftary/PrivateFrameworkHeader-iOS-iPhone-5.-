/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/VisualAlert.framework/VisualAlert
 */

@interface AXTimer : NSObject  {
    struct dispatch_queue_s { } *_dispatchQueue;
    struct dispatch_source_s { } *_dispatchTimer;
}


- (void)afterDelay:(double)arg1 processBlock:(id)arg2;
- (void)_reallyCancel;
- (id)initWithTargetSerialQueue:(struct dispatch_queue_s { }*)arg1;
- (void)cancel;
- (id)init;
- (void)dealloc;

@end
