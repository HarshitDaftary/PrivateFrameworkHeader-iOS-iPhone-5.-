/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class NSNumber, NSMutableOrderedSet, PLManagedAsset, NSOrderedSet, NSURL, NSMutableArray, NSDictionary, NSString, PLPlacesMapAnnotation, UIImage, NSSet;

@interface PLPlace : NSObject <PLAssetContainer> {
    PLPlacesMapAnnotation *_annotation;
    BOOL _titleIsNumberOfPhotos;
    NSMutableArray *_photos;
    BOOL _needsToUpdateAlbumPhotos;
    unsigned int numberOfPhotos;
    unsigned int numberOfVideos;
    NSSet *assetsSet;
    NSDictionary *slideshowSettings;
    struct { 
        struct { 
            double latitude; 
            double longitude; 
        } center; 
        struct { 
            double latitudeDelta; 
            double longitudeDelta; 
        } span; 
    } region;
    NSString *_uuid;
    NSMutableOrderedSet *_assets;
    struct { 
        struct { 
            double latitude; 
            double longitude; 
        } center; 
        struct { 
            double latitudeDelta; 
            double longitudeDelta; 
        } span; 
    } originalRegion;
    struct { 
        struct { 
            double latitude; 
            double longitude; 
        } center; 
        struct { 
            double latitudeDelta; 
            double longitudeDelta; 
        } span; 
    } destinationRegion;
}

@property struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; } originalRegion;
@property struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; } destinationRegion;
@property struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; } region;
@property(copy) NSString * _uuid;
@property(retain) NSMutableOrderedSet * _assets;
@property unsigned int numberOfPhotos;
@property unsigned int numberOfVideos;
@property(retain) NSSet * assetsSet;
@property(readonly) NSString * uuid;
@property(readonly) NSNumber * kind;
@property(readonly) int kindValue;
@property(readonly) NSString * title;
@property(readonly) NSString * localizedTitle;
@property(readonly) NSOrderedSet * assets;
@property(readonly) NSMutableOrderedSet * mutableAssets;
@property(readonly) unsigned int count;
@property(readonly) unsigned int photosCount;
@property(readonly) unsigned int videosCount;
@property(readonly) BOOL isEmpty;
@property(readonly) NSString * name;
@property(retain) PLManagedAsset * keyAsset;
@property(readonly) UIImage * posterImage;
@property(readonly) BOOL isLibrary;
@property(readonly) BOOL isCameraAlbum;
@property(readonly) BOOL isPhotoStreamAlbum;
@property(readonly) BOOL shouldDeleteWhenEmpty;
@property(retain) NSDictionary * slideshowSettings;
@property(retain) NSString * importSessionID;
@property(readonly) NSURL * groupURL;
@property unsigned int pendingItemsCount;
@property unsigned int pendingItemsType;


- (id)localizedTitle;
- (id)posterImage;
- (id)kind;
- (id)annotation;
- (id)title;
- (id)name;
- (BOOL)isEmpty;
- (void)_updatePlaceToPlace:(id)arg1;
- (void)_setRegion:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDestinationRegion:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })destinationRegion;
- (void)setOriginalRegion:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })originalRegion;
- (id)_uuid;
- (BOOL)hasSameEffectiveLocationAs:(struct { double x1; double x2; })arg1;
- (BOOL)shouldGroupPhoto:(id)arg1;
- (BOOL)hasPhoto:(id)arg1;
- (void)removePhoto:(id)arg1;
- (void)addPhoto:(id)arg1;
- (unsigned int)indexOfPosterImage;
- (void)setAssets:(id)arg1;
- (id)initWithRegion:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setPendingItemsType:(unsigned int)arg1;
- (unsigned int)pendingItemsType;
- (void)setPendingItemsCount:(unsigned int)arg1;
- (unsigned int)pendingItemsCount;
- (id)groupURL;
- (void)setImportSessionID:(id)arg1;
- (id)importSessionID;
- (BOOL)shouldDeleteWhenEmpty;
- (BOOL)isLibrary;
- (void)setKeyAsset:(id)arg1;
- (id)keyAsset;
- (void)updateStackedImage;
- (void)reducePendingItemsCountBy:(unsigned int)arg1;
- (id)displayableIndexesForCount:(unsigned int)arg1;
- (struct { double x1; double x2; })effectiveLocation;
- (BOOL)isEqualToPlace:(id)arg1;
- (id)assetsSet;
- (id)_newAnnotationWith2DLocation:(struct { double x1; double x2; })arg1 title:(id)arg2 subtitle:(id)arg3;
- (struct { double x1; double x2; })_placeLocation;
- (id)_annotationTitle;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })region;
- (unsigned int)numberOfVideos;
- (unsigned int)numberOfPhotos;
- (void)setNumberOfVideos:(unsigned int)arg1;
- (void)setNumberOfPhotos:(unsigned int)arg1;
- (void)_updateAnnotationTitle;
- (id)_assets;
- (void)setAssetsSet:(id)arg1;
- (void)set_uuid:(id)arg1;
- (void)setTitleIsNumberOfPhotos:(BOOL)arg1;
- (void)setRegion:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)set_assets:(id)arg1;
- (unsigned int)videosCount;
- (unsigned int)photosCount;
- (int)kindValue;
- (BOOL)isPhotoStreamAlbum;
- (BOOL)isCameraAlbum;
- (id)mutableAssets;
- (BOOL)canPerformEditOperation:(int)arg1;
- (void)setSlideshowSettings:(id)arg1;
- (id)slideshowSettings;
- (id)uuid;
- (id)assets;
- (unsigned int)count;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;

@end
