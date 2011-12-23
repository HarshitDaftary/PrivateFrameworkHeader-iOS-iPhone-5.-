/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSMutableSet, NSString, GEOTileDBMRU, NSLock, NSMutableArray;

@interface GEOTileDBWriter : NSObject  {
    NSString *_path;
    struct sqlite3 { } *_db;
    struct sqlite3_stmt { } *_versionQuery;
    struct sqlite3_stmt { } *_versionInsert;
    struct sqlite3_stmt { } *_editionQuery;
    struct sqlite3_stmt { } *_editionDelete;
    struct sqlite3_stmt { } *_editionUpdate;
    struct sqlite3_stmt { } *_tileInsert;
    struct sqlite3_stmt { } *_sizeQuery;
    long long _lastRowID;
    unsigned long long _databaseSize;
    BOOL _closed;
    BOOL _defunct;
    NSMutableArray *_writeList;
    NSMutableSet *_uncommitedWriteSet;
    unsigned int _pendingWriteBytes;
    NSLock *_writeListLock;
    struct dispatch_queue_s { } *_writeQueue;
    void *_editionMap;
    long long _evictionRowsThreshold;
    GEOTileDBMRU *_tileDBMRU;
}

@property(readonly) NSString * path;
@property BOOL closed;
@property(retain) GEOTileDBMRU * tileDBMRU;
@property(readonly) unsigned long long databaseSize;


- (void)_localeChanged:(id)arg1;
- (unsigned long long)databaseSize;
- (void)pendingWritesForKeys:(id)arg1 handler:(id)arg2;
- (id)pendingWriteForKey:(struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (void)addTile:(id)arg1 forKey:(struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg2 edition:(unsigned int)arg3 tileSet:(unsigned int)arg4;
- (void)flushPendingWrites;
- (void)_evict;
- (void)_writeEntry:(id)arg1;
- (void)_updateEdition:(id)arg1;
- (void)_openIfNecessary;
- (BOOL)_readEditions;
- (void)_prepareStatements;
- (void)_createTables;
- (void)_performWrites:(BOOL)arg1;
- (void)_openDBForceRecreate:(BOOL)arg1;
- (void)_deviceLocked;
- (void)setTileDBMRU:(id)arg1;
- (id)tileDBMRU;
- (void)setClosed:(BOOL)arg1;
- (BOOL)closed;
- (void)_closeDB;
- (id)path;
- (id)initWithPath:(id)arg1;
- (void)_updateSize;
- (void)_writeVersion;
- (void)dealloc;

@end
