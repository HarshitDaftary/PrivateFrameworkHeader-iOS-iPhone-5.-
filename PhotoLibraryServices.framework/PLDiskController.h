/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLDiskController : NSObject  {
    double _lastFSCheck;
    long long _bytesRequiredForPhoto;
    struct { 
        unsigned int needToCheckDiskSpace : 1; 
        unsigned int probablyLowOnDiskSpace : 1; 
        unsigned int isPhotosApp : 1; 
        unsigned int extra : 28; 
    } _flags;
}

+ (long long)freeDiskSpaceThreshold;
+ (long long)diskSpaceAvailableForUse;
+ (id)sharedInstance;

- (void)_diskSpaceDidBecomeLow;
- (void)_updateCookie;
- (void)_actuallyUpdateCookie;
- (long long)bytesToAutomaticallyClear;
- (void)updateAvailableDiskSpace;
- (BOOL)hasEnoughDiskToTakePicture;
- (id)init;
- (void)dealloc;

@end
