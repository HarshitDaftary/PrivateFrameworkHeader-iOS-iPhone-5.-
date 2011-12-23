/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class MFConditionLock, NSArray, NSDate, NSMutableArray;

@interface _MFDAMSSearchResponseConsumer : _MFDAMSBasicConsumer <DASearchQueryConsumer> {
    NSDate *latestDateToAdd;
    MFConditionLock *doneCondition;
    double timeReceivedLastResponse;
    unsigned int totalCount;
    NSMutableArray *matchingRemoteIDs;
}

@property(retain,readonly) NSArray * matchingRemoteIDs;
@property(retain) NSDate * latestDateToAdd;


- (id)latestDateToAdd;
- (void)searchQuery:(id)arg1 returnedTotalCount:(id)arg2;
- (void)searchQuery:(id)arg1 returnedResults:(id)arg2;
- (void)searchQuery:(id)arg1 finishedWithError:(id)arg2;
- (void)setLatestDateToAdd:(id)arg1;
- (void)resetDoneCondition;
- (id)matchingRemoteIDs;
- (BOOL)waitUntilDoneBeforeDate:(id)arg1;
- (void)waitUntilDone;
- (id)initWithMaximumSize:(unsigned int)arg1 latency:(double)arg2;
- (BOOL)handleItems:(id)arg1;
- (void)dealloc;

@end
