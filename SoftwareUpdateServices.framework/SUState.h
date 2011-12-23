/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
 */

@class SUDownload, SUDescriptor, NSString, NSDate;

@interface SUState : NSObject  {
    SUDownload *_lastDownload;
    SUDescriptor *_lastScannedDescriptor;
    NSDate *_lastScannedDescriptorTime;
    NSDate *_scheduledManualDownloadWifiPeriodEndTime;
    NSDate *_scheduledAutodownloadWifiPeriodEndTime;
    NSDate *_scheduledAutodownloadPolicyChangeTime;
    BOOL _autodownloadNeedsOneTimeRetry;
    NSString *_lastProductVersion;
    NSString *_lastProductBuild;
    NSString *_lastProductType;
    NSString *_lastReleaseType;
}

@property(copy) SUDownload * lastDownload;
@property(copy) SUDescriptor * lastScannedDescriptor;
@property(retain) NSDate * lastScannedDescriptorTime;
@property(retain) NSDate * scheduledManualDownloadWifiPeriodEndTime;
@property(retain) NSDate * scheduledAutodownloadWifiPeriodEndTime;
@property(retain) NSDate * scheduledAutodownloadPolicyChangeTime;
@property BOOL autodownloadNeedsOneTimeRetry;
@property(retain) NSString * lastProductVersion;
@property(retain) NSString * lastProductBuild;
@property(retain) NSString * lastProductType;
@property(retain) NSString * lastReleaseType;

+ (id)currentState;
+ (id)statePath;

- (void)load;
- (void)save;
- (id)description;
- (id)init;
- (void)dealloc;
- (void)resetAllHistory;
- (id)lastReleaseType;
- (id)lastProductType;
- (id)lastProductBuild;
- (id)lastProductVersion;
- (BOOL)autodownloadNeedsOneTimeRetry;
- (id)scheduledAutodownloadPolicyChangeTime;
- (id)scheduledAutodownloadWifiPeriodEndTime;
- (id)scheduledManualDownloadWifiPeriodEndTime;
- (id)lastScannedDescriptorTime;
- (id)lastScannedDescriptor;
- (id)lastDownload;
- (id)_stateAsDictionary;
- (void)setLastReleaseType:(id)arg1;
- (void)setLastProductType:(id)arg1;
- (void)setLastProductBuild:(id)arg1;
- (void)setLastProductVersion:(id)arg1;
- (void)resetDownloadAndScanHistory;
- (void)setLastDownload:(id)arg1;
- (void)setAutodownloadNeedsOneTimeRetry:(BOOL)arg1;
- (void)setScheduledAutodownloadPolicyChangeTime:(id)arg1;
- (void)setScheduledAutodownloadWifiPeriodEndTime:(id)arg1;
- (void)setScheduledManualDownloadWifiPeriodEndTime:(id)arg1;
- (void)setLastScannedDescriptorTime:(id)arg1;
- (void)setLastScannedDescriptor:(id)arg1;

@end
