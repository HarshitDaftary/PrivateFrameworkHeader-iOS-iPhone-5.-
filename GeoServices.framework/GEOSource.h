/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSString;

@interface GEOSource : PBCodable  {
    NSString *_sourceName;
    NSString *_sourceId;
    NSString *_sourceVersion;
}

@property(retain) NSString * sourceName;
@property(retain) NSString * sourceId;
@property(readonly) BOOL hasSourceVersion;
@property(retain) NSString * sourceVersion;


- (BOOL)readFrom:(id)arg1;
- (id)sourceVersion;
- (id)sourceId;
- (id)sourceName;
- (BOOL)hasSourceVersion;
- (void)setSourceVersion:(id)arg1;
- (void)setSourceId:(id)arg1;
- (void)setSourceName:(id)arg1;
- (void)writeTo:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (void)dealloc;

@end
