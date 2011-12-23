/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class NSMutableDictionary;

@interface CKMediaObjectManager : NSObject  {
    NSMutableDictionary *_mediaObjectDict;
}

+ (id)sharedInstance;

- (Class)mediaObjectClassForPath:(id)arg1;
- (void)_registerAllMediaTypes;
- (id)newMediaObjectForFilename:(id)arg1 mimeType:(id)arg2 exportedFilename:(id)arg3;
- (Class)mediaObjectClassForMIMEType:(id)arg1;
- (id)newMediaObjectForData:(id)arg1 mimeType:(id)arg2 exportedFilename:(id)arg3;
- (void)dealloc;

@end
