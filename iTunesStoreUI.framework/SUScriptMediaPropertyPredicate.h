/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSString, MPMediaPropertyPredicate;

@interface SUScriptMediaPropertyPredicate : SUScriptObject  {
    NSString *_comparisonType;
    NSString *_property;
    id _value;
}

@property(readonly) MPMediaPropertyPredicate * nativePredicate;
@property(readonly) NSString * comparisonType;
@property(readonly) NSString * property;
@property(readonly) id value;

+ (id)webScriptNameForKey:(const char *)arg1;
+ (void)initialize;

- (id)property;
- (id)attributeKeys;
- (id)value;
- (void)dealloc;
- (id)_playlistAttributesForScriptArray:(id)arg1;
- (id)comparisonType;
- (id)_copyProperty;
- (id)_copyComparisonType;
- (void)_setProperty:(id)arg1 value:(id)arg2 comparisonType:(int)arg3;
- (id)nativePredicate;
- (id)initWithProperty:(id)arg1 value:(id)arg2 comparisonType:(id)arg3;
- (id)_copyValue;
- (id)_className;
- (id)scriptAttributeKeys;

@end
