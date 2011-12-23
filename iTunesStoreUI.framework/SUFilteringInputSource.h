/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class SUInputSource, <SUCollectingDataConsumer>, SUFilteringDataConsumer;

@interface SUFilteringInputSource : SUInputSource  {
    <SUCollectingDataConsumer> *_dataCollector;
    SUFilteringDataConsumer *_dataConsumer;
    SUInputSource *_inputSource;
}

@property(readonly) SUFilteringDataConsumer * dataConsumer;
@property(readonly) SUInputSource * inputSource;


- (id)dataConsumer;
- (long long)expectedLength;
- (void)close;
- (BOOL)hasBytesAvailable;
- (BOOL)open:(id*)arg1;
- (void)dealloc;
- (id)inputSource;
- (int)read:(char *)arg1 maxLength:(unsigned int)arg2 error:(id*)arg3;
- (unsigned int)minimumReadLength;
- (id)initWithInputSource:(id)arg1 dataConsumer:(id)arg2;

@end
