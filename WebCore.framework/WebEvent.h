/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@class NSString, NSArray;

@interface WebEvent : NSObject  {
    int _type;
    double _timestamp;
    struct CGPoint { 
        float x; 
        float y; 
    } _locationInWindow;
    NSString *_characters;
    NSString *_charactersIgnoringModifiers;
    unsigned int _modifierFlags;
    BOOL _keyRepeating;
    BOOL _popupVariant;
    unsigned short _keyCode;
    BOOL _tabKey;
    int _characterSet;
    float _deltaX;
    float _deltaY;
    unsigned int _touchCount;
    NSArray *_touchLocations;
    NSArray *_touchGlobalLocations;
    NSArray *_touchIdentifiers;
    NSArray *_touchPhases;
    BOOL _isGesture;
    float _gestureScale;
    float _gestureRotation;
}

@property(readonly) struct CGPoint { float x; float y; } locationInWindow;
@property(retain,readonly) NSString * characters;
@property(retain,readonly) NSString * charactersIgnoringModifiers;
@property(readonly) unsigned int modifierFlags;
@property(getter=isKeyRepeating,readonly) BOOL keyRepeating;
@property(getter=isPopupVariant,readonly) BOOL popupVariant;
@property(readonly) unsigned short keyCode;
@property(getter=isTabKey,readonly) BOOL tabKey;
@property(readonly) int characterSet;
@property(readonly) float deltaX;
@property(readonly) float deltaY;
@property(readonly) unsigned int touchCount;
@property(retain,readonly) NSArray * touchLocations;
@property(retain,readonly) NSArray * touchGlobalLocations;
@property(retain,readonly) NSArray * touchIdentifiers;
@property(retain,readonly) NSArray * touchPhases;
@property(readonly) BOOL isGesture;
@property(readonly) float gestureScale;
@property(readonly) float gestureRotation;
@property(readonly) double timestamp;
@property(readonly) int type;


- (id)_modiferFlagsDescription;
- (BOOL)isPopupVariant;
- (BOOL)isTabKey;
- (id)_touchPhaseDescription:(int)arg1;
- (id)_characterSetDescription;
- (id)_touchLocationsDescription:(id)arg1;
- (id)_touchIdentifiersDescription;
- (id)_touchPhasesDescription;
- (id)_eventDescription;
- (float)deltaX;
- (float)deltaY;
- (unsigned int)touchCount;
- (float)gestureScale;
- (float)gestureRotation;
- (BOOL)isGesture;
- (id)touchGlobalLocations;
- (id)charactersIgnoringModifiers;
- (id)characters;
- (BOOL)isKeyRepeating;
- (unsigned int)modifierFlags;
- (unsigned short)keyCode;
- (int)characterSet;
- (id)initWithTouchEventType:(int)arg1 timeStamp:(double)arg2 location:(struct CGPoint { float x1; float x2; })arg3 modifiers:(unsigned int)arg4 touchCount:(unsigned int)arg5 touchLocations:(id)arg6 touchGlobalLocations:(id)arg7 touchIdentifiers:(id)arg8 touchPhases:(id)arg9 isGesture:(BOOL)arg10 gestureScale:(float)arg11 gestureRotation:(float)arg12;
- (id)touchPhases;
- (id)touchIdentifiers;
- (id)touchLocations;
- (id)_typeDescription;
- (struct CGPoint { float x1; float x2; })locationInWindow;
- (id)initWithScrollWheelEventWithTimeStamp:(double)arg1 location:(struct CGPoint { float x1; float x2; })arg2 deltaX:(float)arg3 deltaY:(float)arg4;
- (id)initWithMouseEventType:(int)arg1 timeStamp:(double)arg2 location:(struct CGPoint { float x1; float x2; })arg3;
- (id)initWithKeyEventType:(int)arg1 timeStamp:(double)arg2 characters:(id)arg3 charactersIgnoringModifiers:(id)arg4 modifiers:(unsigned int)arg5 isRepeating:(BOOL)arg6 isPopupVariant:(BOOL)arg7 keyCode:(unsigned short)arg8 isTabKey:(BOOL)arg9 characterSet:(int)arg10;
- (int)type;
- (double)timestamp;
- (id)description;
- (void)dealloc;

@end
