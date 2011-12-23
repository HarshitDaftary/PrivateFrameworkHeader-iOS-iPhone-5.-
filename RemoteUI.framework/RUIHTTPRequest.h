/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

@class NSURLRequest, NSURLConnection, NSMutableData;

@interface RUIHTTPRequest : NSObject <NSURLConnectionDelegate> {
    NSURLRequest *_request;
    NSURLConnection *_connection;
    NSMutableData *_rawData;
    BOOL _invalidResponse;
    id _delegate;
}

+ (BOOL)anyRequestLoading;
+ (id)serviceUnavailableError;
+ (id)invalidResponseError;

- (void)_startedLoading;
- (void)willParseData;
- (void)loadStatusChanged;
- (BOOL)receivedValidResponse:(id)arg1;
- (void)didParseData;
- (void)failWithError:(id)arg1;
- (BOOL)_loggingEnabled;
- (void)setDelegate:(id)arg1;
- (void)parseData:(id)arg1;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (BOOL)isLoading;
- (id)request;
- (void)loadRequest:(id)arg1;
- (void)_finishedLoading;
- (void)cancel;
- (id)init;
- (void)dealloc;

@end
