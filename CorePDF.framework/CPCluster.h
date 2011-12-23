/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface CPCluster : NSObject <CPDisposable> {
    struct { double x1; unsigned int x2; double x3; double x4; unsigned int x5; double x6; double x7; BOOL x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; double x17; double x18; double x19; BOOL x20; } *profile;
    unsigned int xCount;
    double *x;
    double *dx;
    unsigned int *dxOrderIndex;
    unsigned int interClusterMinIndex;
    double *ddx;
    unsigned int *ddxOrderIndex;
    unsigned int interLevelMinIndex;
    unsigned int minClusterSize;
    double maxClusterSpread;
    double minInterClusterDiff;
    double minInterLevel2ndDiff;
    unsigned int clusterCount;
    struct { unsigned int x1; double x2; double x3; double x4; } *xStats;
    unsigned int levels;
    struct { unsigned int x1; double x2; double x3; double x4; } *dxStats;
    BOOL ownData;
    BOOL ownDifferences;
}

+ (void)reclusterTextLine:(id)arg1 fromWordIndex:(unsigned int)arg2 count:(unsigned int*)arg3;
+ (unsigned int*)createOrderIndexFor:(double*)arg1 ofSize:(unsigned int)arg2;
+ (void)clusterTextLine:(id)arg1;

- (void)finalize;
- (void)findClustersFromCharacterSequence:(id)arg1 withSpaceHint:(BOOL)arg2;
- (void)makeWords:(struct { unsigned int x1; unsigned int x2; int x3; int x4; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_5_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_5_1_2; } x5; }*)arg1 count:(unsigned int)arg2 fromCharacterSequence:(id)arg3 charOffset:(unsigned int)arg4;
- (void)tryLevel0SplitBetween:(double)arg1 and:(double)arg2 usingHints:(struct { unsigned int x1; double x2; double x3; double x4; }*)arg3;
- (void)setMinimumClusterSize:(unsigned int)arg1;
- (void)setMaximumClusterSpread:(double)arg1;
- (void)setMinimumRecognizedInterClusterDifference:(double)arg1;
- (void)setMinimumRecognizedInterLevel2ndDifference:(double)arg1;
- (void)findClusters:(double*)arg1 count:(unsigned int)arg2;
- (void)findClustersFromDifferences:(double*)arg1 count:(unsigned int)arg2;
- (void)findDensityClusters:(double*)arg1 count:(unsigned int)arg2;
- (BOOL)applyDifferenceHints:(struct { unsigned int x1; double x2; double x3; double x4; }*)arg1 count:(unsigned int)arg2;
- (unsigned int)clusterCount;
- (struct { unsigned int x1; double x2; double x3; double x4; })clusterStatisticsAtIndex:(unsigned int)arg1;
- (struct { unsigned int x1; double x2; double x3; double x4; })differenceClusterStatisticsAtIndex:(unsigned int)arg1;
- (struct { unsigned int x1; double x2; double x3; double x4; })largestClusterStatistics;
- (id)initWithProfile:(const struct { double x1; unsigned int x2; double x3; double x4; unsigned int x5; double x6; double x7; BOOL x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; double x17; double x18; double x19; BOOL x20; }*)arg1;
- (BOOL)joinLevelsFrom:(unsigned int)arg1 to:(unsigned int)arg2;
- (void)splitSecondDifferences;
- (void)assembleDifferenceStats;
- (BOOL)coalesceFrom:(unsigned int)arg1 to:(unsigned int)arg2;
- (void)computeDataFromDifferences;
- (void)assembleDensityDifferenceStats;
- (void)computeDifferencesFromData;
- (void)analyzeDifferences;
- (void)analyzeDensities;
- (BOOL)splitLevelAtIndex:(unsigned int)arg1 betweenValue:(double)arg2 andValue:(double)arg3;
- (BOOL)joinClosestLevelPairFrom:(unsigned int)arg1 to:(unsigned int)arg2;
- (void)assembleDataStats;
- (unsigned int)levels;
- (void)dispose;
- (id)init;
- (void)dealloc;

@end
