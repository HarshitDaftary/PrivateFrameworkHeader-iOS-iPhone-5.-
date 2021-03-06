/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class TSUProgressStage, NSDate;

@interface TSUProgressContext : NSObject  {
    TSUProgressStage *m_currentStage;
    NSDate *m_lastReportTime;
    double m_lastProgressReport;
}

+ (void)createStageWithSteps:(double)arg1;
+ (void)nextSubStageWillTakeThisManyOfMySteps:(double)arg1;
+ (id)sharedContext;
+ (double)overallProgress;
+ (id)_singletonAlloc;
+ (void)addProgressObserver:(id)arg1 selector:(SEL)arg2;
+ (void)removeProgressObserver:(id)arg1;
+ (double)currentPosition;
+ (void)setPercentageProgressFromCPProgressContext:(double)arg1;
+ (void)createStageWithSteps:(double)arg1 takingSteps:(double)arg2;
+ (void)endStage;
+ (void)advanceProgress:(double)arg1;
+ (void)setMessage:(id)arg1;
+ (void)reset;
+ (void)setProgress:(double)arg1;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (id)currentStage;
- (void)reportProgress:(double)arg1;
- (void)_reset;
- (unsigned int)retainCount;
- (id)retain;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)autorelease;
- (id)init;
- (void)release;
- (void)dealloc;

@end
