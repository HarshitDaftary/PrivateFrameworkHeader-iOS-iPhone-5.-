/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OADBlip, NSString, NSMutableArray;

@interface OADBlipRef : NSObject <NSCopying> {
    int mIndex;
    NSString *mName;
    NSMutableArray *mEffects;
    OADBlip *mBlip;
}

+ (id)inflatedExtensionForGzippedExtension:(id)arg1;
+ (int)blipTypeForExtension:(id)arg1;

- (void)addEffect:(id)arg1;
- (unsigned int)effectCount;
- (id)effectAtIndex:(unsigned int)arg1;
- (void)removeEffectAtIndex:(unsigned int)arg1;
- (void)setFilenameAndDelayedContext:(id)arg1 context:(id)arg2 targetSize:(long)arg3;
- (BOOL)isNull;
- (void)setFilename:(id)arg1 data:(id)arg2;
- (id)blip;
- (id)effects;
- (void)setBlip:(id)arg1;
- (id)initWithIndex:(long)arg1 name:(id)arg2;
- (void)setIndex:(long)arg1;
- (void)setPath:(id)arg1;
- (long)index;
- (id)name;
- (void)setName:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (void)dealloc;

@end
