/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
 */

@interface IMAVDVDController : NSObject  {
    BOOL _didPause;
}

+ (id)sharedInstance;

- (void)resume;
- (void)pause;
- (BOOL)retainWeakReference;
- (BOOL)allowsWeakReference;
- (id)init;
- (void)dealloc;
- (BOOL)_playDVD;
- (BOOL)_pauseDVD;

@end
