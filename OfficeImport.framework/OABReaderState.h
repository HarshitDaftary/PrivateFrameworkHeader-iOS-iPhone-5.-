/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSMutableDictionary, <OADColorPalette>;

@interface OABReaderState : NSObject  {
    Class mClient;
    NSMutableDictionary *mShapeIdMap;
    NSMutableDictionary *mEshContentIdMap;
    <OADColorPalette> *mColorPalette;
    NSMutableDictionary *mBlipIdMap;
}


- (id)drawableForBlipId:(int)arg1;
- (struct EshContent { }*)eshContentForId:(int)arg1;
- (void)setDrawable:(id)arg1 forBlipId:(int)arg2;
- (void)setEshContent:(struct EshContent { }*)arg1 forId:(int)arg2;
- (id)colorPalette;
- (void)setDrawable:(id)arg1 forShapeId:(int)arg2;
- (void)setColorPalette:(id)arg1;
- (id)drawableForShapeId:(int)arg1;
- (id)initWithClient:(Class)arg1;
- (Class)client;
- (id)init;
- (void)dealloc;

@end
