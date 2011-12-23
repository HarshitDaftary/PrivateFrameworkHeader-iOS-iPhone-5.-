/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOPlace, NSString, NSMutableArray, GEOAddress;

@interface GEOPlaceResult : PBCodable  {
    GEOPlace *_place;
    BOOL _hasConfidence;
    double _confidence;
    NSMutableArray *_additionalPlaces;
    GEOAddress *_tokenEntity;
    NSString *_quad;
}

@property(retain) GEOPlace * place;
@property BOOL hasConfidence;
@property double confidence;
@property(retain) NSMutableArray * additionalPlaces;
@property(readonly) BOOL hasTokenEntity;
@property(retain) GEOAddress * tokenEntity;
@property(readonly) BOOL hasQuad;
@property(retain) NSString * quad;


- (BOOL)readFrom:(id)arg1;
- (void)setPlace:(id)arg1;
- (void)setHasConfidence:(BOOL)arg1;
- (BOOL)hasConfidence;
- (void)setConfidence:(double)arg1;
- (id)tokenEntity;
- (id)additionalPlaces;
- (BOOL)hasQuad;
- (BOOL)hasTokenEntity;
- (id)additionalPlaceAtIndex:(unsigned int)arg1;
- (unsigned int)additionalPlacesCount;
- (void)addAdditionalPlace:(id)arg1;
- (void)setQuad:(id)arg1;
- (void)setTokenEntity:(id)arg1;
- (void)setAdditionalPlaces:(id)arg1;
- (void)writeTo:(id)arg1;
- (id)dictionaryRepresentation;
- (id)quad;
- (id)place;
- (id)description;
- (void)dealloc;
- (double)confidence;

@end
