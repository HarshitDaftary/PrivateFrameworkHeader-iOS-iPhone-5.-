/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

@class ICSDateValue, ICSDuration;

@interface ICSPeriod : NSObject <NSCoding> {
    ICSDateValue *_start;
    ICSDateValue *_end;
    ICSDuration *_duration;
}


- (id)initWithStart:(id)arg1;
- (id)initWithStart:(id)arg1 duration:(id)arg2;
- (id)initWithStart:(id)arg1 end:(id)arg2;
- (void)_ICSStringWithOptions:(unsigned int)arg1 appendingToString:(id)arg2;
- (id)start;
- (id)duration;
- (BOOL)isDurationBased;
- (id)end;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

@end
