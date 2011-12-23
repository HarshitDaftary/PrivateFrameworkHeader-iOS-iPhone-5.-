/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class NSArray, NSMutableDictionary, NSMutableSet;

@interface CKDraftManager : NSObject  {
    NSMutableDictionary *_cachedDrafts;
    NSMutableSet *_dirtyDraftIDs;
    NSArray *_pendingRecipients;
}

+ (void)_createDraftSavePath;
+ (id)_draftSavePath;
+ (void)_createPendingRecipientPath;
+ (id)_pendingRecipientFile;
+ (id)sharedInstance;

- (id)draftForConversation:(id)arg1;
- (void)setDraft:(id)arg1 forConversation:(id)arg2;
- (id)draftForPendingConversationWithRecipients:(id*)arg1;
- (void)_setDraft:(id)arg1 forKey:(id)arg2;
- (id)_draftForKey:(id)arg1;
- (void)_clearDraftForConversation:(id)arg1;
- (id)_pendingRecipients;
- (void)_setPendingRecipients:(id)arg1;
- (void)setDraftForPendingConversation:(id)arg1 withRecipients:(id)arg2;
- (void)clearDraftForPendingConversation;
- (void)save:(BOOL)arg1;
- (id)init;
- (void)dealloc;

@end
