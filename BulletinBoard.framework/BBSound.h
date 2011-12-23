/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@class NSString, NSDictionary;

@interface BBSound : NSObject <NSCopying, NSCoding> {
    int _soundType;
    unsigned long _systemSoundID;
    unsigned int _soundBehavior;
    NSString *_ringtoneName;
    BOOL _repeats;
    NSDictionary *_vibrationPattern;
}

@property int soundType;
@property unsigned long systemSoundID;
@property(retain) NSString * ringtoneName;
@property(getter=isRepeating) BOOL repeats;
@property(retain) NSDictionary * vibrationPattern;
@property unsigned int soundBehavior;

+ (id)alertSoundWithSystemSoundID:(unsigned long)arg1;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRingtone:(id)arg1 vibrationPattern:(id)arg2 repeats:(BOOL)arg3;
- (unsigned int)soundBehavior;
- (BOOL)isRepeating;
- (id)ringtoneName;
- (unsigned long)systemSoundID;
- (int)soundType;
- (void)setRepeats:(BOOL)arg1;
- (void)setRingtoneName:(id)arg1;
- (void)setSoundBehavior:(unsigned int)arg1;
- (void)setSystemSoundID:(unsigned long)arg1;
- (void)setSoundType:(int)arg1;
- (id)initWithSystemSoundID:(unsigned long)arg1 behavior:(unsigned int)arg2;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)setVibrationPattern:(id)arg1;
- (id)vibrationPattern;

@end
