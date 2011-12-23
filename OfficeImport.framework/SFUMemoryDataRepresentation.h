/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSData;

@interface SFUMemoryDataRepresentation : SFUDataRepresentation  {
    NSData *mData;
}


- (id)initWithDataNoCopy:(id)arg1;
- (id)initWithDataRepresentation:(id)arg1;
- (id)bufferedInputStreamWithBufferSize:(unsigned long)arg1;
- (unsigned long)readIntoData:(id)arg1;
- (BOOL)hasSameLocationAs:(id)arg1;
- (id)bufferedInputStream;
- (id)inputStream;
- (long long)dataLength;
- (id)data;
- (id)initWithData:(id)arg1;
- (BOOL)isReadable;
- (void)dealloc;

@end
