/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
 */

@class NSString;

@interface IMAVCamera : NSObject  {
    id _internalDevice;
}

@property(readonly) NSString * name;
@property(readonly) NSString * uniqueID;
@property(readonly) int cameraStyle;
@property(readonly) BOOL isWideScreen;
@property(readonly) BOOL hasShutter;
@property(readonly) BOOL isShutterOpen;
@property(readonly) BOOL isSuspended;


- (id)name;
- (BOOL)isSuspended;
- (id)uniqueID;
- (id)description;
- (id)init;
- (void)dealloc;
- (id)_FTCamera;
- (BOOL)isShutterOpen;
- (BOOL)hasShutter;
- (BOOL)isWideScreen;
- (id)_initWithFTCamera:(id)arg1;
- (int)cameraStyle;

@end
