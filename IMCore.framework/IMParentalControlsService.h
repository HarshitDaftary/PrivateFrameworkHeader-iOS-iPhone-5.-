/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@class NSSet, NSString;

@interface IMParentalControlsService : NSObject  {
    BOOL _disableService;
    BOOL _forceWhiteList;
    NSSet *_whitelist;
    NSString *_name;
}

@property BOOL disableService;
@property BOOL forceWhiteList;
@property(retain) NSSet * whitelist;
@property(retain) NSString * name;


- (id)whitelist;
- (void)setForceWhiteList:(BOOL)arg1;
- (BOOL)forceWhiteList;
- (void)setDisableService:(BOOL)arg1;
- (BOOL)disableService;
- (void)setWhitelist:(id)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (void)dealloc;

@end
