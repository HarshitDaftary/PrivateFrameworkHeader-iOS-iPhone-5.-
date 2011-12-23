/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQHStyle : NSObject  {
    struct __CFDictionary { } *mStyles;
    struct __CFString { } *mCssClassAttribute;
    struct __CFString { } *mCachedCssStyleName;
}

+ (void)setSingleStyleAttribute:(struct __CFString { }*)arg1 intValue:(int)arg2 node:(id)arg3;
+ (void)setSingleStyleAttribute:(struct __CFString { }*)arg1 pxValue:(int)arg2 node:(id)arg3;
+ (void)setSingleStyleAttribute:(struct __CFString { }*)arg1 value:(struct __CFString { }*)arg2 node:(id)arg3;
+ (void)appendParentClass:(struct __CFString {}**)arg1 style:(id)arg2 classType:(Class)arg3 state:(id)arg4;
+ (void)createBaseStyleClassesString:(struct __CFArray { }*)arg1 classString:(struct __CFString {}**)arg2 classTypes:(struct __CFArray { }*)arg3 state:(id)arg4;
+ (void)createBaseStyleClassString:(id)arg1 classString:(struct __CFString {}**)arg2 classType:(Class)arg3 state:(id)arg4;

- (void)addAttribute:(struct __CFString { }*)arg1 ptValue:(int)arg2;
- (void)setupCssClassAttribute:(id)arg1;
- (void)setStyleOnCurrentNode:(id)arg1 mappingBaseStyleClasses:(struct __CFArray { }*)arg2 baseClassTypes:(struct __CFArray { }*)arg3;
- (BOOL)getAttribute:(struct __CFString { }*)arg1 intValue:(int*)arg2;
- (BOOL)getAttribute:(struct __CFString { }*)arg1 trblValue:(id*)arg2;
- (void)addAttribute:(struct __CFString { }*)arg1 trblValue:(id)arg2;
- (void)addAttribute:(struct __CFString { }*)arg1 pxValue:(int)arg2;
- (struct __CFString { }*)createNamedStyle:(struct __CFString { }*)arg1;
- (BOOL)getAttribute:(struct __CFString { }*)arg1 value:(const struct __CFString {}**)arg2;
- (void)setStyleOnCurrentNode:(id)arg1 mappingBaseStyleClass:(id)arg2 baseClassType:(Class)arg3;
- (void)addAttribute:(struct __CFString { }*)arg1 intValue:(int)arg2;
- (void)addAttribute:(struct __CFString { }*)arg1 value:(struct __CFString { }*)arg2;
- (void)setStyleOnCurrentNode:(id)arg1;
- (id)init;
- (void)dealloc;
- (void)addClass:(struct __CFString { }*)arg1;

@end
