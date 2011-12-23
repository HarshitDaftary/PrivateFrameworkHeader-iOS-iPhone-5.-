/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Notes.framework/Notes
 */

@class NSNumber, NSData, NoteBodyObject, NoteStoreObject, NSURL, NSString, NSDate;

@interface NoteObject : NSManagedObject  {
}

@property(retain) NSNumber * externalFlags;
@property(retain) NSNumber * externalServerIntId;
@property(retain) NSNumber * deletedFlag;
@property(retain) NSString * summary;
@property(retain) NSString * author;
@property(retain) NSDate * modificationDate;
@property(retain) NSDate * creationDate;
@property(retain) NSString * title;
@property(retain) NSNumber * contentType;
@property(retain) NSNumber * containsCJK;
@property(retain) NoteBodyObject * body;
@property(retain) NoteStoreObject * store;
@property(retain) NSNumber * integerId;
@property(retain) NSString * content;
@property(readonly) NSString * contentAsPlainText;
@property BOOL isPlainText;
@property(readonly) NSURL * noteId;
@property(readonly) BOOL isMarkedForDeletion;
@property(retain) NSNumber * isBookkeepingEntry;
@property(retain) NSString * serverId;
@property(readonly) BOOL hasValidServerIntId;
@property long long serverIntId;
@property(retain) NSString * guid;
@property unsigned long long flags;
@property(retain) NSData * externalRepresentation;
@property(retain) NSString * externalContentRef;


- (id)noteId;
- (void)setExternalContentRef:(id)arg1;
- (id)externalContentRef;
- (id)contentAsPlainTextPreservingNewlines;
- (id)contentAsPlainText;
- (void)markForDeletion;
- (void)setFlags:(unsigned long long)arg1;
- (BOOL)isPlainText;
- (void)setIsPlainText:(BOOL)arg1;
- (void)setContent:(id)arg1;
- (unsigned long long)flags;
- (id)content;
- (id)externalRepresentation;
- (BOOL)isMarkedForDeletion;
- (void)setExternalRepresentation:(id)arg1;
- (void)setServerIntId:(long long)arg1;
- (long long)serverIntId;
- (BOOL)hasValidServerIntId;

@end
