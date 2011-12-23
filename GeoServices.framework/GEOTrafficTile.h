/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSData, NSMutableArray;

@interface GEOTrafficTile : PBCodable  {
    NSData *_vertices;
    NSMutableArray *_trafficSegments;
}

@property(readonly) BOOL hasVertices;
@property(retain) NSData * vertices;
@property(retain) NSMutableArray * trafficSegments;


- (BOOL)readFrom:(id)arg1;
- (void)setTrafficSegments:(id)arg1;
- (void)setVertices:(id)arg1;
- (struct { int x1; int x2; }*)createUnpackedVerticesWithGutterSize:(int)arg1;
- (id)trafficSegmentAtIndex:(unsigned int)arg1;
- (unsigned int)trafficSegmentsCount;
- (BOOL)hasVertices;
- (void)addTrafficSegment:(id)arg1;
- (void)writeTo:(id)arg1;
- (id)dictionaryRepresentation;
- (id)vertices;
- (id)trafficSegments;
- (id)description;
- (void)dealloc;

@end
