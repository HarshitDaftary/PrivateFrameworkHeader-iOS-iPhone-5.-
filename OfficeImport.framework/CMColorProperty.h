/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSColorStub;

@interface CMColorProperty : CMProperty  {
    NSColorStub *wdValue;
}

+ (struct CGColor { }*)createCGColorFromOADColor:(id)arg1 state:(id)arg2;
+ (struct CGColor { }*)createCGColorFromOADFill:(id)arg1 state:(id)arg2;
+ (id)cssStringFromOADGradientFill:(id)arg1 state:(id)arg2;
+ (id)nsColorFromOADColor:(id)arg1 state:(id)arg2;
+ (id)cssStringFromRed:(float)arg1 green:(float)arg2 blue:(float)arg3;
+ (id)cssStringFromNSColorStub:(id)arg1;
+ (id)nsColorFromOADFill:(id)arg1 state:(id)arg2;
+ (id)resolveStyleColorWithPercentage:(float)arg1 shading:(id)arg2;
+ (id)resolveStyleColorWithPercentage:(float)arg1 foregroundColor:(id)arg2 backgroundColor:(id)arg3;
+ (float)resolveColorValueWithPercentage:(float)arg1 foregroundComponent:(float)arg2 backgroundComponent:(float)arg3;
+ (id)nsColorFromShading:(id)arg1;
+ (id)cssStringFromOADColor:(id)arg1;
+ (float)transformedAlphaFromOADColor:(id)arg1;

- (BOOL)isEqualTo:(id)arg1;
- (id)cssString;
- (id)cssStringForName:(id)arg1;
- (id)initWithColor:(id)arg1;
- (id)value;

@end
