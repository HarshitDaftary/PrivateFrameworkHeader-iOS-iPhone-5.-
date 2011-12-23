/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OAVFill : NSObject  {
}

+ (id)readFromManager:(id)arg1 state:(id)arg2;
+ (void)readImageFill:(id)arg1 fromManager:(id)arg2 state:(id)arg3;
+ (id)targetFgColorWithManager:(id)arg1;
+ (void)readGradientFill:(id)arg1 fromManager:(id)arg2;
+ (id)readBlipRefFromManager:(id)arg1 state:(id)arg2;
+ (id)targetBgColorWithManager:(id)arg1;
+ (void)addStopsFromArray:(const struct OAVGradientStop { id x1; float x2; }*)arg1 stopCount:(int)arg2 inverted:(BOOL)arg3 startPos:(float)arg4 endPos:(float)arg5 toGradientFill:(id)arg6 manager:(id)arg7;


@end
