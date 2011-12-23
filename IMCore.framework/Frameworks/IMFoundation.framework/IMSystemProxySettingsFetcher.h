/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/IMCore.framework/Frameworks/IMFoundation.framework/IMFoundation
 */

@class NSString;

@interface IMSystemProxySettingsFetcher : NSObject  {
    id _delegate;
    NSString *_host;
    unsigned short _port;
    int _proxyProtocol;
    NSString *_proxyHost;
    unsigned short _proxyPort;
    NSString *_proxyAccount;
    NSString *_proxyPassword;
}

@property id delegate;
@property(copy) NSString * _host;
@property unsigned short _port;
@property int _proxyProtocol;
@property(copy) NSString * _proxyHost;
@property unsigned short _proxyPort;
@property(copy) NSString * _proxyAccount;
@property(copy) NSString * _proxyPassword;


- (void)setDelegate:(id)arg1;
- (void)set_proxyPassword:(id)arg1;
- (id)_proxyPassword;
- (void)set_proxyAccount:(id)arg1;
- (id)_proxyAccount;
- (void)set_proxyPort:(unsigned short)arg1;
- (unsigned short)_proxyPort;
- (void)set_proxyHost:(id)arg1;
- (id)_proxyHost;
- (void)set_proxyProtocol:(int)arg1;
- (int)_proxyProtocol;
- (void)set_port:(unsigned short)arg1;
- (unsigned short)_port;
- (void)set_host:(id)arg1;
- (id)_host;
- (void)retrieveProxyAccountSettings;
- (void)retrieveProxySettings;
- (id)initWithProxyProtocol:(int)arg1 proxyHost:(id)arg2 proxyPort:(unsigned short)arg3 delegate:(id)arg4;
- (id)initWithHost:(id)arg1 port:(unsigned short)arg2 delegate:(id)arg3;
- (void)_takeProxySettingsFromDictionary:(struct __CFDictionary { }*)arg1;
- (void)_callProxySettingsDelegateMethod;
- (void)_getProxyAccountAndPasswordFromKeychain;
- (void)_callAccountSettingsDelegateMethod;
- (id)delegate;
- (void)dealloc;

@end
