/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface PBAnimation : NSObject  {
}

+ (void)mapAnimationsFromSlide:(id)arg1 tgtSlide:(id)arg2 state:(id)arg3;
+ (BOOL)hasPpt10Animations:(id)arg1;
+ (void)parsePpt10Animation:(id)arg1 timings:(id)arg2 state:(id)arg3;
+ (void)generatePpt10AnimationFromState:(id)arg1 timings:(id)arg2;
+ (void)parseTimeNodeContainer:(id)arg1 siblings:(id)arg2 state:(id)arg3;
+ (void)parseBuildList:(id)arg1 buildMap:(id)arg2 state:(id)arg3;
+ (void)parseAnimateBehaviorContainer:(id)arg1 animBehavior:(id)arg2 timeNode:(id)arg3;
+ (void)parseColorBehaviorContainer:(id)arg1 colorBehavior:(id)arg2 timeNode:(id)arg3;
+ (void)parseEffectBehaviorContainer:(id)arg1 effectBehavior:(id)arg2 timeNode:(id)arg3;
+ (void)parseMotionBehaviorContainer:(id)arg1 motionBehavior:(id)arg2 timeNode:(id)arg3;
+ (void)parseRotationBehaviorContainer:(id)arg1 rotationBehavior:(id)arg2 timeNode:(id)arg3;
+ (void)parseCmdBehaviorContainer:(id)arg1 cmdBehavior:(id)arg2 timeNode:(id)arg3;
+ (void)parseTargetContainerHolder:(id)arg1 setTargetObj:(id)arg2 state:(id)arg3;
+ (id)parseBehaviorContainer:(id)arg1 timeNode:(id)arg2 state:(id)arg3;
+ (id)parseMediaContainer:(id)arg1 timeNode:(id)arg2 state:(id)arg3;
+ (void)parseTimeNodeVariants:(id)arg1 commonData:(id)arg2;
+ (void)parseTimeConditionsHolder:(id)arg1 commonData:(id)arg2;
+ (id)createColorFromBehaviorColor:(struct PptAnimColorBehavior_Color_Struct { unsigned long x1; unsigned long x2; unsigned long x3; unsigned long x4; }*)arg1;
+ (id)createParaBuild:(id)arg1;
+ (id)createChartBuild:(id)arg1;


@end
