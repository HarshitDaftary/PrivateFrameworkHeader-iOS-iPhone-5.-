/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class NSData;

@interface MFDAMessagePayloadFetchResponseImpl : NSObject <MFDAMessagePayloadFetchResponse> {
    BOOL streaming;
    BOOL streamingDone;
    NSData *data;
}


- (id)initWithData:(id)arg1 streaming:(BOOL)arg2 streamingDone:(BOOL)arg3;
- (BOOL)streaming;
- (BOOL)streamingDone;
- (id)data;
- (void)dealloc;

@end
