/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSData, NSMutableDictionary;

@interface PLPhotoBakedThumbnailsCollection : NSObject  {
    NSData *_data;
    NSMutableDictionary *_bakedThumbnails;
}

+ (void)setTesting:(BOOL)arg1;

- (id)initWithContentsOfFile:(id)arg1;
- (id)availableFormats;
- (void)_parseDataWithContentsOfFile:(id)arg1;
- (id)bakedThumbnailsForFormat:(int)arg1;
- (void)setBakedThumbnails:(id)arg1 forFormat:(int)arg2;
- (void)saveToFile:(id)arg1;
- (id)init;
- (void)dealloc;

@end
