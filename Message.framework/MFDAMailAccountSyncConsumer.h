/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class NSArray, ActivityMonitor, NSString, NSMutableData;

@interface MFDAMailAccountSyncConsumer : MFDAMailAccountConsumer <DAMailboxRequestConsumer, DAMailboxStreamingContentConsumer> {
    NSArray *_requests;
    NSArray *_consumers;
    NSString *_tag;
    NSString *_accountID;
    ActivityMonitor *_monitor;
    id _streamConsumer;
    NSMutableData *_bodyData;
    BOOL _moreAvailable;
    BOOL _receivedFirstItem;
    BOOL _firstSyncBatch;
    int _syncKeyResets;
    int _serverErrors;
}

@property(readonly) BOOL moreAvailable;
@property(retain) id streamConsumer;
@property(readonly) NSString * tag;


- (void)partialResultsForMailbox:(id)arg1 actions:(id)arg2 responses:(id)arg3 percentComplete:(double)arg4 moreAvailable:(BOOL)arg5;
- (void)resultsForMailbox:(id)arg1 newTag:(id)arg2 actions:(id)arg3 responses:(id)arg4 percentComplete:(double)arg5 moreAvailable:(BOOL)arg6;
- (void)_setTag:(id)arg1;
- (id)actionsConsumer;
- (id)originalThreadMonitor;
- (void)handleSyncResponses:(id)arg1;
- (void)setStreamConsumer:(id)arg1;
- (id)streamConsumer;
- (BOOL)shouldBeginStreamingForMailMessage:(id)arg1 format:(int)arg2;
- (void)consumeData:(char *)arg1 length:(int)arg2 format:(int)arg3 mailMessage:(id)arg4;
- (void)didEndStreamingForMailMessage:(id)arg1;
- (id)initWithCurrentTag:(id)arg1 accountID:(id)arg2 requests:(id)arg3 consumers:(id)arg4;
- (BOOL)moreAvailable;
- (void)taskFailed:(id)arg1 withStatusCode:(int)arg2;
- (void)reset;
- (id)tag;
- (void)dealloc;

@end
