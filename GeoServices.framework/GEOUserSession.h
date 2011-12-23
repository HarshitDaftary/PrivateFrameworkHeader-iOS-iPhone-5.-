/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOSessionID;

@interface GEOUserSession : NSObject  {
    double _lastSessionCreationTime;
    GEOSessionID *_sessionID;
}

@property(readonly) GEOSessionID * sessionID;

+ (id)sharedInstance;

- (void)_updateSessionIDIfNeeded;
- (id)sessionID;
- (id)init;
- (void)dealloc;

@end
