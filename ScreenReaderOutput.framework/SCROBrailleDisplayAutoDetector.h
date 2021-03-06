/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
 */

@class NSMutableDictionary;

@interface SCROBrailleDisplayAutoDetector : NSObject  {
    BOOL _isDetectingDisplays;
    struct IONotificationPort { } *_notificationPort;
    NSMutableDictionary *_iteratorDict;
}

+ (id)sharedDetector;
+ (void)initialize;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (BOOL)isAutoDetectEnabled;
- (void)detectDisplays;
- (void)stopDetectingDisplays;
- (unsigned int)retainCount;
- (id)retain;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)autorelease;
- (id)init;
- (void)release;

@end
