/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class MFSMTPConnection, NSTimer;

@interface SMTPAccount : DeliveryAccount  {
    Class _deliveryClass;
    MFSMTPConnection *_connection;
    NSTimer *_timer;
    int _lastTimerSetTime;
    unsigned int _supportsPipelining : 1;
    unsigned int _supportsOutboxCopy : 1;
    unsigned int _useCellDataOnly : 1;
}

+ (void)registerAppleServiceDeliveryHostname:(id)arg1;
+ (id)newDefaultInstance;
+ (id)saslProfileName;
+ (id)displayedAccountTypeString;
+ (id)displayedShortAccountTypeString;
+ (id)accountTypeString;
+ (void*)keychainProtocol;

- (void)setDeliveryClass:(Class)arg1;
- (id)customAuthenticationErrorStringForError:(id)arg1 authScheme:(id)arg2;
- (id)_defaultSettingsWithPort:(unsigned int)arg1 useSSL:(BOOL)arg2 directSSL:(BOOL)arg3;
- (id)connectionSettingsForAuthentication:(BOOL)arg1 secure:(id)arg2 insecure:(id)arg3;
- (void)setSupportsPipelining:(BOOL)arg1;
- (void)disconnect:(id)arg1;
- (void)connectionExpired:(id)arg1;
- (void)setTimer;
- (BOOL)_isAppleServiceDeliveryHostname:(id)arg1;
- (BOOL)supportsPipelining;
- (id)authenticatedConnection:(BOOL)arg1;
- (void)setSupportsOutboxCopy:(BOOL)arg1;
- (void)checkInConnection:(id)arg1;
- (BOOL)canBeFallbackAccount;
- (BOOL)supportsOutboxCopy;
- (Class)deliveryClass;
- (void)releaseAllForcedConnections;
- (void)setPreferredAuthScheme:(id)arg1;
- (id)alternateConnectionSettings;
- (id)insecureConnectionSettings;
- (id)secureConnectionSettings;
- (void)releaseAllConnections;
- (BOOL)isCommonPortNumber:(unsigned int)arg1;
- (unsigned int)keychainPortNumber;
- (void)setPasswordInKeychain:(id)arg1;
- (id)passwordFromKeychain;
- (id)preferredAuthScheme;
- (unsigned int)defaultPortNumber;
- (BOOL)_shouldTryDirectSSLConnectionOnPort:(unsigned int)arg1;
- (Class)connectionClass;
- (id)certUIService;
- (struct __CFString { }*)connectionServiceType;
- (id)serviceName;
- (void)dealloc;

@end
