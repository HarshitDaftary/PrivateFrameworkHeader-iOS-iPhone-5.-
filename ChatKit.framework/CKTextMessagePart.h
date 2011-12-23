/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class NSString;

@interface CKTextMessagePart : CKMessagePart  {
    NSString *_text;
    NSString *_contentLocation;
}

@property(copy) NSString * contentLocation;


- (id)contentLocation;
- (id)initWithText:(id)arg1;
- (int)type;
- (id)text;
- (id)detachedCopy;
- (void)copyToPasteboard;
- (id)description;
- (void)dealloc;
- (void)setContentLocation:(id)arg1;
- (BOOL)isDisplayable;

@end
