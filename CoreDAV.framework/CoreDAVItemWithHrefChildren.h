/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class CoreDAVItemWithNoChildren, NSMutableSet;

@interface CoreDAVItemWithHrefChildren : CoreDAVItem  {
    NSMutableSet *_hrefs;
    CoreDAVItemWithNoChildren *_unauthenticated;
}

@property(retain) NSMutableSet * hrefs;
@property(retain) CoreDAVItemWithNoChildren * unauthenticated;


- (id)hrefsAsStrings;
- (id)hrefsAsOriginalURLs;
- (void)setUnauthenticated:(id)arg1;
- (void)setHrefs:(id)arg1;
- (void)addHref:(id)arg1;
- (id)copyParseRules;
- (id)hrefs;
- (id)unauthenticated;
- (id)hrefsAsFullURLs;
- (id)description;
- (void)dealloc;

@end
