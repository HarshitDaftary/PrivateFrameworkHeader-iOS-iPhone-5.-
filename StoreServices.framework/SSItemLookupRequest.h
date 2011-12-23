/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class <SSItemLookupRequestDelegate>, NSMutableDictionary;

@interface SSItemLookupRequest : SSRequest  {
    NSMutableDictionary *_parameters;
}

@property <SSItemLookupRequestDelegate> * delegate;


- (void)setValue:(id)arg1 forParameter:(id)arg2;
- (id)_copyStringParameters;
- (void)_sendItemsToDelegate:(id)arg1;
- (id)_copyItemsFromResponse:(id)arg1 userInfo:(id)arg2;
- (id)_errorForStatusCode:(int)arg1;
- (id)_convertedValueForValue:(id)arg1;
- (BOOL)issueRequestForIdentifier:(id)arg1 error:(id*)arg2;
- (BOOL)handleFinishResponse:(id)arg1 error:(id*)arg2;
- (id)valueForParameter:(id)arg1;
- (id)init;
- (void)dealloc;

@end
