/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@interface GMMClientCapabilities : PBCodable  {
    BOOL _hasMaxImageWidth;
    int _maxImageWidth;
    BOOL _hasMaxImageHeight;
    int _maxImageHeight;
    BOOL _hasAvailableImageMemory;
    int _availableImageMemory;
    struct { 
        int *list; 
        unsigned int count; 
        unsigned int size; 
    } _preferredImageFormats;
    BOOL _hasHtmlBodyOnly;
    BOOL _htmlBodyOnly;
    BOOL _hasEmbedImages;
    BOOL _embedImages;
}

@property BOOL hasMaxImageWidth;
@property int maxImageWidth;
@property BOOL hasMaxImageHeight;
@property int maxImageHeight;
@property BOOL hasAvailableImageMemory;
@property int availableImageMemory;
@property(readonly) unsigned int preferredImageFormatsCount;
@property(readonly) int* preferredImageFormats;
@property BOOL hasHtmlBodyOnly;
@property BOOL htmlBodyOnly;
@property BOOL hasEmbedImages;
@property BOOL embedImages;


- (BOOL)readFrom:(id)arg1;
- (void)setHasEmbedImages:(BOOL)arg1;
- (BOOL)hasEmbedImages;
- (void)setHasHtmlBodyOnly:(BOOL)arg1;
- (BOOL)hasHtmlBodyOnly;
- (int)availableImageMemory;
- (void)setHasAvailableImageMemory:(BOOL)arg1;
- (BOOL)hasAvailableImageMemory;
- (int)maxImageHeight;
- (void)setHasMaxImageHeight:(BOOL)arg1;
- (BOOL)hasMaxImageHeight;
- (int)maxImageWidth;
- (void)setHasMaxImageWidth:(BOOL)arg1;
- (BOOL)hasMaxImageWidth;
- (BOOL)embedImages;
- (BOOL)htmlBodyOnly;
- (void)setPreferredImageFormats:(int*)arg1 count:(unsigned int)arg2;
- (int)preferredImageFormatAtIndex:(unsigned int)arg1;
- (void)addPreferredImageFormat:(int)arg1;
- (void)clearPreferredImageFormats;
- (int*)preferredImageFormats;
- (unsigned int)preferredImageFormatsCount;
- (void)setEmbedImages:(BOOL)arg1;
- (void)setHtmlBodyOnly:(BOOL)arg1;
- (void)setAvailableImageMemory:(int)arg1;
- (void)setMaxImageHeight:(int)arg1;
- (void)setMaxImageWidth:(int)arg1;
- (void)writeTo:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (void)dealloc;

@end
