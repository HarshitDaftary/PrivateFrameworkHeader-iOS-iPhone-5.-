/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@class DOMCSSStyleDeclaration, NSString, DOMElement;

@interface DOMElement : DOMNode  {
}

@property(copy,readonly) NSString * tagName;
@property(retain,readonly) DOMCSSStyleDeclaration * style;
@property(readonly) int offsetLeft;
@property(readonly) int offsetTop;
@property(readonly) int offsetWidth;
@property(readonly) int offsetHeight;
@property(retain,readonly) DOMElement * offsetParent;
@property(readonly) int clientLeft;
@property(readonly) int clientTop;
@property(readonly) int clientWidth;
@property(readonly) int clientHeight;
@property int scrollLeft;
@property int scrollTop;
@property(readonly) int scrollWidth;
@property(readonly) int scrollHeight;
@property(retain,readonly) DOMElement * firstElementChild;
@property(retain,readonly) DOMElement * lastElementChild;
@property(retain,readonly) DOMElement * previousElementSibling;
@property(retain,readonly) DOMElement * nextElementSibling;
@property(readonly) unsigned int childElementCount;
@property(copy,readonly) NSString * innerText;

+ (id)_DOMElementFromJSContext:(struct OpaqueJSContext { }*)arg1 value:(struct OpaqueJSValue { }*)arg2;
+ (BOOL)isRichTextStyle:(id)arg1;

- (int)offsetLeft;
- (int)offsetTop;
- (id)offsetParent;
- (int)clientLeft;
- (int)clientTop;
- (int)clientWidth;
- (int)clientHeight;
- (id)lastElementChild;
- (id)previousElementSibling;
- (unsigned int)childElementCount;
- (void)setAttribute:(id)arg1 :(id)arg2;
- (id)getAttributeNode:(id)arg1;
- (id)setAttributeNode:(id)arg1;
- (id)removeAttributeNode:(id)arg1;
- (id)getAttributeNS:(id)arg1 localName:(id)arg2;
- (id)getAttributeNS:(id)arg1 :(id)arg2;
- (void)setAttributeNS:(id)arg1 qualifiedName:(id)arg2 value:(id)arg3;
- (void)setAttributeNS:(id)arg1 :(id)arg2 :(id)arg3;
- (void)removeAttributeNS:(id)arg1 localName:(id)arg2;
- (void)removeAttributeNS:(id)arg1 :(id)arg2;
- (id)getAttributeNodeNS:(id)arg1 localName:(id)arg2;
- (id)getAttributeNodeNS:(id)arg1 :(id)arg2;
- (id)setAttributeNodeNS:(id)arg1;
- (BOOL)hasAttributeNS:(id)arg1 localName:(id)arg2;
- (BOOL)hasAttributeNS:(id)arg1 :(id)arg2;
- (void)scrollIntoView:(BOOL)arg1;
- (void)scrollIntoViewIfNeeded:(BOOL)arg1;
- (void)scrollByLines:(int)arg1;
- (void)scrollByPages:(int)arg1;
- (BOOL)webkitMatchesSelector:(id)arg1;
- (BOOL)contains:(id)arg1;
- (id)getElementsByTagNameNS:(id)arg1 localName:(id)arg2;
- (id)getElementsByTagNameNS:(id)arg1 :(id)arg2;
- (id)getElementsByClassName:(id)arg1;
- (id)querySelector:(id)arg1;
- (id)querySelectorAll:(id)arg1;
- (id)_getURLAttribute:(id)arg1;
- (void)focus;
- (void)blur;
- (id)nextElementSibling;
- (id)firstElementChild;
- (int)structuralComplexityContribution;
- (BOOL)hasAttribute:(id)arg1;
- (BOOL)isFocused;
- (int)offsetHeight;
- (int)offsetWidth;
- (id)getElementsByTagName:(id)arg1;
- (void)setScrollTop:(int)arg1;
- (void)setScrollLeft:(int)arg1;
- (int)scrollTop;
- (int)scrollLeft;
- (id)getAttribute:(id)arg1;
- (int)scrollHeight;
- (int)scrollWidth;
- (id)innerText;
- (void)removeAttribute:(id)arg1;
- (void)setAttribute:(id)arg1 value:(id)arg2;
- (id)tagName;
- (id)style;
- (struct __GSFont { }*)_font;
- (id)_markerTextForListItem;
- (id)_shadowPseudoId;
- (struct OpaqueJSValue { }*)_shadowRoot:(struct OpaqueJSContext { }*)arg1;
- (struct OpaqueJSValue { }*)_ensureShadowRoot:(struct OpaqueJSContext { }*)arg1;
- (void)_removeShadowRoot;
- (void)getTextWritingDirection:(int*)arg1 override:(BOOL*)arg2;
- (id)tapHighlightColor;
- (BOOL)touchCalloutEnabled;
- (BOOL)inDocument;
- (BOOL)isHidden;
- (BOOL)exceedsStructuralComplexity:(int)arg1;
- (BOOL)hasCustomLineHeight;
- (BOOL)selectable;
- (BOOL)isRichTextElementType;
- (BOOL)hasMarginsOfZero;
- (void)recursivelyRemoveMailAttributes;
- (BOOL)isRichTextElement;
- (int)mf_quoteLevelDelta;
- (void)mf_stripCSSStyle;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frame;

@end
