/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@class DOMHTMLCollection, NSString, DOMElement;

@interface DOMHTMLDocument : DOMDocument  {
}

@property(retain,readonly) DOMHTMLCollection * embeds;
@property(retain,readonly) DOMHTMLCollection * plugins;
@property(retain,readonly) DOMHTMLCollection * scripts;
@property(readonly) int width;
@property(readonly) int height;
@property(copy) NSString * dir;
@property(copy) NSString * designMode;
@property(copy,readonly) NSString * compatMode;
@property(retain,readonly) DOMElement * activeElement;
@property(copy) NSString * bgColor;
@property(copy) NSString * fgColor;
@property(copy) NSString * alinkColor;
@property(copy) NSString * linkColor;
@property(copy) NSString * vlinkColor;

+ (id)mf_listElements;

- (id)embeds;
- (id)plugins;
- (id)scripts;
- (id)dir;
- (void)setDir:(id)arg1;
- (id)designMode;
- (void)setDesignMode:(id)arg1;
- (id)activeElement;
- (id)fgColor;
- (void)setFgColor:(id)arg1;
- (id)alinkColor;
- (void)setAlinkColor:(id)arg1;
- (id)linkColor;
- (void)setLinkColor:(id)arg1;
- (id)vlinkColor;
- (void)setVlinkColor:(id)arg1;
- (void)write:(id)arg1;
- (void)writeln:(id)arg1;
- (void)captureEvents;
- (void)releaseEvents;
- (BOOL)hasFocus;
- (void)open;
- (id)bgColor;
- (void)setBgColor:(id)arg1;
- (id)_createDocumentFragmentWithMarkupString:(id)arg1 baseURLString:(id)arg2;
- (id)_createDocumentFragmentWithText:(id)arg1;
- (id)createDocumentFragmentWithMarkupString:(id)arg1 baseURL:(id)arg2;
- (id)createDocumentFragmentWithText:(id)arg1;
- (id)compatMode;
- (int)height;
- (void)clear;
- (void)close;
- (int)width;
- (id)mf_createMessageQuoteElement;

@end
