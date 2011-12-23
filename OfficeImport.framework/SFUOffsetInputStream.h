/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class <SFUInputStream>;

@interface SFUOffsetInputStream : NSObject <SFUInputStream> {
    <SFUInputStream> *mInputStream;
    long long mInitialOffset;
}


- (id)initWithInputStream:(id)arg1;
- (id)initWithInputStream:(id)arg1 initialOffset:(long long)arg2;
- (id)closeLocalStream;
- (BOOL)canSeek;
- (void)seekToOffset:(long long)arg1;
- (unsigned long)readToBuffer:(char *)arg1 size:(unsigned long)arg2;
- (void)disableSystemCaching;
- (void)enableSystemCaching;
- (void)close;
- (long long)offset;
- (void)dealloc;

@end
