/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SportsVoices.framework/SportsVoices
 */

@interface SWUtils : NSObject  {
}

+ (void)log:(id)arg1;
+ (void)setShouldUseNikeAppPreferenceKeyForLogging:(BOOL)arg1;
+ (void)setShouldLogToFilesInDirectory:(id)arg1;
+ (id)__dateStringForDate:(id)arg1;
+ (void)__logToFileForMessageType:(id)arg1 message:(id)arg2 arguments:(void*)arg3;
+ (void)resetLogs;
+ (void)nikeUserDefaultsSetString:(id)arg1 forKey:(id)arg2;
+ (void)nikeUserDefaultsRemoveObjectForKey:(id)arg1;
+ (id)nikeUserDefaultsStringForKey:(id)arg1;
+ (id)nikeUserDefaultsNumberForKey:(id)arg1;
+ (BOOL)nikeUserDefaultsBoolForKey:(id)arg1;
+ (void)forDefault:(id)arg1 log:(id)arg2;
+ (void)ensureDirectoryExists:(id)arg1;


@end
