/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@class NSSet, NSMutableSet;

@interface CalDAVSupportedCalendarComponentSet : CoreDAVItem  {
    NSMutableSet *_comps;
}

@property(readonly) NSSet * compNames;
@property(retain) NSMutableSet * comps;


- (id)childrenToWrite;
- (id)copyParseRules;
- (id)description;
- (id)init;
- (void)dealloc;
- (void)addComp:(id)arg1;
- (void)setComps:(id)arg1;
- (id)componentsAsString;
- (id)comps;
- (id)compNames;

@end
