/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@class NSString;

@interface PTPCameraFile : ICCameraFile  {
    void *_ptpCameraFileProperties;
    NSString *_path;
}

@property(readonly) unsigned int type;
@property(readonly) unsigned int storageID;
@property(readonly) unsigned int objHandle;
@property(copy) id info;
@property(retain) NSString * path;


- (id)path;
- (void)finalize;
- (unsigned long)objHandle;
- (id)initWithName:(id)arg1 parentFolder:(id)arg2 device:(id)arg3 type:(unsigned int)arg4 storageID:(unsigned long)arg5 objectHandle:(unsigned long)arg6;
- (unsigned long)storageID;
- (id)thumbData;
- (id)metadataDict;
- (long)writeDataToFile:(int)arg1 fromOffset:(long long)arg2 ofLength:(long long*)arg3;
- (void)setPath:(id)arg1;
- (unsigned int)type;
- (id)info;
- (void)setInfo:(id)arg1;
- (void)dealloc;

@end
