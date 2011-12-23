/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class NSString;

@interface GMMLink : PBCodable  {
    BOOL _hasYawDegreeE6;
    int _yawDegreeE6;
    NSString *_panoId;
    BOOL _hasRoadArgb;
    int _roadArgb;
    NSString *_linkText;
    NSString *_linkStreetRange;
}

@property BOOL hasYawDegreeE6;
@property int yawDegreeE6;
@property(retain) NSString * panoId;
@property BOOL hasRoadArgb;
@property int roadArgb;
@property(readonly) BOOL hasLinkText;
@property(retain) NSString * linkText;
@property(readonly) BOOL hasLinkStreetRange;
@property(retain) NSString * linkStreetRange;


- (BOOL)readFrom:(id)arg1;
- (void)setHasRoadArgb:(BOOL)arg1;
- (BOOL)hasRoadArgb;
- (void)setHasYawDegreeE6:(BOOL)arg1;
- (BOOL)hasYawDegreeE6;
- (id)linkStreetRange;
- (BOOL)hasLinkStreetRange;
- (id)linkText;
- (BOOL)hasLinkText;
- (int)roadArgb;
- (int)yawDegreeE6;
- (void)setRoadArgb:(int)arg1;
- (void)setYawDegreeE6:(int)arg1;
- (void)setLinkStreetRange:(id)arg1;
- (void)setLinkText:(id)arg1;
- (id)panoId;
- (void)setPanoId:(id)arg1;
- (void)writeTo:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (void)dealloc;

@end
