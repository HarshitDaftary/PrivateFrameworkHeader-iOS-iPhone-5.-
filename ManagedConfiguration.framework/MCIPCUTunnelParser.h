/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@class NSMutableDictionary, NSString;

@interface MCIPCUTunnelParser : MCTunnelParser  {
    NSMutableDictionary *_CSR;
    NSString *_hostIdentifier;
}


- (id)_commandGetEncryptionKey:(id)arg1;
- (id)_commandSetCertificate:(id)arg1;
- (id)_commandHello:(id)arg1;
- (id)_commandGetProfileList:(id)arg1;
- (id)_commandInstallProfile:(id)arg1;
- (id)_commandRemoveProfile:(id)arg1;
- (id)processRequest:(id)arg1;
- (void)dealloc;

@end
