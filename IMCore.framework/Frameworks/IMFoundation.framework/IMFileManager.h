/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/IMCore.framework/Frameworks/IMFoundation.framework/IMFoundation
 */

@interface IMFileManager : NSFileManager  {
}

+ (id)defaultHFSFileManager;
+ (id)defaultManager;

- (BOOL)setAttributes:(id)arg1 ofItemAtPath:(id)arg2 error:(id*)arg3;
- (id)pathExtensionForMIMEType:(id)arg1;
- (id)UTITypeOfPathExtension:(id)arg1;
- (id)displayNameOfFileWithName:(id)arg1 hfsFlags:(unsigned short)arg2;
- (id)kindStringForFileWithName:(id)arg1 hfsType:(unsigned long)arg2 hfsCreator:(unsigned long)arg3 hfsFlags:(unsigned short)arg4;
- (id)MIMETypeOfPathExtension:(id)arg1;
- (id)kindStringForFile:(id)arg1;
- (id)createTempFileBasedOnName:(id)arg1 hfsType:(unsigned long)arg2 hfsCreator:(unsigned long)arg3 hfsFlags:(unsigned short)arg4;
- (id)attributesOfItemAtPath:(id)arg1 error:(id*)arg2;
- (BOOL)retainWeakReference;
- (BOOL)allowsWeakReference;
- (id)UTITypeOfPath:(id)arg1;
- (id)MIMETypeOfPath:(id)arg1;

@end
