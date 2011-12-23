/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@class NSDictionary;

@interface MCDefaultsPayload : MCPayload  {
    NSDictionary *_defaultsByDomain;
}

+ (id)_allowedDefaults;
+ (id)typeStrings;
+ (id)localizedDescriptionForPayloadCount:(unsigned int)arg1;

- (id)domains;
- (id)subtitle1Description;
- (BOOL)_checkForValidDefaults:(id)arg1 outError:(id*)arg2;
- (id)defaultsForDomain:(id)arg1;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (id)stubDictionary;
- (id)description;
- (void)dealloc;

@end
