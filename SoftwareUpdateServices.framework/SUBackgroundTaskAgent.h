/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
 */

@class SUManager;

@interface SUBackgroundTaskAgent : NSObject  {
    SUManager *_manager;
}

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)cancelAllTasks;
- (void)cancelAllAutoscanTasks;
- (void)scheduleAnyTasksIfNecessary;
- (void)_scheduleNewBackgroundAgentAutoScanForType:(int)arg1 jobName:(const char *)arg2 previousStartDate:(id)arg3 previousEndDate:(id)arg4;
- (void)_addAutodownloadPowerRequirementsToRequest:(void*)arg1;
- (void)_scheduleAutoScanForTypeIfNecessary:(int)arg1 jobName:(const char *)arg2;
- (void)cancelAutodownloadWifiPeriodEndTask;
- (void)cancelAutodownloadRetryTask;
- (void)cancelEmergencyAutoScanTask;
- (void)cancelDefaultAutoScanTask;
- (void)scheduleAutodownloadWifiPeriodEndTaskIfNecessary;
- (void)scheduleAutodownloadRetryTaskIfNecessary;
- (void)scheduleEmergencyAutoScanTaskIfNecessary;
- (void)scheduleDefaultAutoScanTaskIfNecessary;
- (void)_printDetailsForJob:(const char *)arg1;
- (void)_handleAutodownloadWifiPeriodEndTask:(void*)arg1;
- (void)_handleAutodownloadRetryTask:(void*)arg1;
- (void)_handleBackgroundAgentAutoScan:(const char *)arg1 parameters:(void*)arg2;
- (void)_initBackgroundTaskAgent;
- (void)cancelAllAutodownloadTasks;
- (void)scheduleAutodownloadRetryTaskFromDate:(id)arg1 toDate:(id)arg2 policy:(id)arg3;
- (void)scheduleAutodownloadWifiPeriodEndTask;

@end
