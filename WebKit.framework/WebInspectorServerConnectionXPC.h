/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

@class NSString, WebInspectorServerXPC;

@interface WebInspectorServerConnectionXPC : WebInspectorServerConnection  {
    WebInspectorServerXPC *_server;
    NSString *_destination;
    NSString *_identifier;
}


- (id)identifier;
- (id)initWithServer:(id)arg1 destination:(id)arg2 identifier:(id)arg3;
- (BOOL)setupChannel;
- (void)receivedData:(id)arg1;
- (void)receivedDidClose:(id)arg1;
- (void)clearChannel;
- (void)sendWebSocketMessage:(id)arg1;
- (void)dealloc;

@end
