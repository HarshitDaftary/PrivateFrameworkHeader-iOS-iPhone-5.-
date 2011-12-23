/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
 */

@class NSFileManager;

@interface ATAirlock : NSObject  {
    NSFileManager *_fm;
}

+ (id)pathForDataclass:(id)arg1;
+ (id)geniusPathForDataclass:(id)arg1 geniusIdentifier:(id)arg2;
+ (id)artworkPathForDataclass:(id)arg1 artworkIdentifier:(id)arg2;
+ (id)sharedInstance;

- (void)handleCompletedAsset:(id)arg1;
- (void)copyAssetToAirlock:(id)arg1;
- (void)evacuateDataclasses:(id)arg1;
- (void)createAirlockForDataclasses:(id)arg1;

@end
