/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@interface ISSQLiteDatabase : NSObject  {
    struct sqlite3 { } *_db;
    BOOL _isInTransaction;
    struct dispatch_queue_s { } *_dispatchQueue;
    struct __CFDictionary { } *_statementCache;
}

+ (void)_stepStatement:(struct sqlite3_stmt { }*)arg1 hasRow:(BOOL*)arg2 didFinish:(BOOL*)arg3;
+ (BOOL)statementDidFinishAfterStepping:(struct sqlite3_stmt { }*)arg1;
+ (BOOL)statementHasRowAfterStepping:(struct sqlite3_stmt { }*)arg1;

- (BOOL)executeSQL:(id)arg1;
- (void)prepareStatementForSQL:(id)arg1 cache:(BOOL)arg2 usingBlock:(id)arg3;
- (void)performTransactionWithBlock:(id)arg1;
- (void)accessDatabaseUsingBlock:(id)arg1;
- (struct sqlite3_stmt { }*)_statementForSQL:(id)arg1 cache:(BOOL)arg2;
- (void)_accessDatabaseUsingBlock:(id)arg1;
- (int)_resetAndReopenDatabaseWithPath:(id)arg1;
- (id)initWithDatabaseURL:(id)arg1;
- (void)dealloc;

@end
