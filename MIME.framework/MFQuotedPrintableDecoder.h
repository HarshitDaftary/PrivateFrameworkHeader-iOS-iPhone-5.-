/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@interface MFQuotedPrintableDecoder : MFBaseFilterDataConsumer  {
    unsigned char _lastEncoded;
    unsigned int _required;
    BOOL _forTextPart;
}

@property BOOL forTextPart;


- (void)setForTextPart:(BOOL)arg1;
- (BOOL)forTextPart;
- (int)appendData:(id)arg1;
- (void)done;

@end
