/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iAdCore.framework/iAdCore
 */

@class <ADJSODelegate>, NSString, WebScriptObject, NSMutableDictionary;

@interface ADBooksJSO : ADJavaScriptObject <QLPreviewControllerDelegate, QLPreviewControllerDataSource> {
    <ADJSODelegate> *_delegate;
    WebScriptObject *_listener;
    NSMutableDictionary *_metadata;
    NSString *_pdfPath;
}

@property <ADJSODelegate> * delegate;
@property(retain) WebScriptObject * listener;
@property(retain) NSMutableDictionary * metadata;
@property(copy) NSString * pdfPath;

+ (void)initializeInContext:(struct OpaqueJSContext { }*)arg1;
+ (id)scriptSelectors;

- (void)setDelegate:(id)arg1;
- (void)setMetadata:(id)arg1;
- (id)metadata;
- (id)pdfPath;
- (void)previewController:(id)arg1 customActionButtonWasTappedForPreviewItem:(id)arg2;
- (id)previewController:(id)arg1 customActionButtonTittleForPreviewItem:(id)arg2;
- (void)_requestPDFSave:(id)arg1 withResult:(id)arg2;
- (void)_savePDFData:(id)arg1 completionHandler:(id)arg2;
- (void)_previewPDFFile;
- (void)_deliverResult:(int)arg1;
- (void)setPdfPath:(id)arg1;
- (void)addPDF:(id)arg1 replyTo:(id)arg2;
- (void)setListener:(id)arg1;
- (id)previewController:(id)arg1 previewItemAtIndex:(int)arg2;
- (int)numberOfPreviewItemsInPreviewController:(id)arg1;
- (void)previewControllerDidDismiss:(id)arg1;
- (id)delegate;
- (id)listener;
- (id)init;
- (void)dealloc;

@end
