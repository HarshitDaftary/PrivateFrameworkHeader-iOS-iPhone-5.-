/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@class NSString;

@interface TIShortcutConversionCandidate : UIKeyboardCandidateSingle  {
    NSString *_input;
    BOOL _isForShortcutConversion;
}

@property BOOL isForShortcutConversion;
@property(copy) NSString * input;


- (void)setInput:(id)arg1;
- (void)setIsForShortcutConversion:(BOOL)arg1;
- (id)initWithCandidate:(id)arg1 input:(id)arg2;
- (id)input;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)isForShortcutConversion;

@end
