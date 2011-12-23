/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSString;

@interface SUScriptAction : SUScriptObject <NSCopying> {
    NSString *_actionType;
}

@property(copy) NSString * actionType;

+ (id)webScriptNameForSelector:(SEL)arg1;
+ (id)webScriptNameForKey:(const char *)arg1;
+ (void)initialize;

- (id)attributeKeys;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)initWithActionType:(id)arg1;
- (void)setActionType:(id)arg1;
- (void)performAction;
- (id)actionType;
- (id)_className;
- (id)scriptAttributeKeys;

@end
