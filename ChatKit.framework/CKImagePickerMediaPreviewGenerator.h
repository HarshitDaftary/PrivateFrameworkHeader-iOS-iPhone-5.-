/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class UIImagePickerController, UIImage, NSData, NSDictionary;

@interface CKImagePickerMediaPreviewGenerator : CKMediaPreviewGenerator  {
    UIImage *_image;
    NSData *_imageData;
    NSDictionary *_editingInfo;
    UIImagePickerController *_imagePickerController;
    UIImage *_videoPreviewImage;
}

@property(retain) UIImagePickerController * imagePickerController;
@property(retain) NSDictionary * editingInfo;
@property(retain) NSData * imageData;
@property(retain) UIImage * image;


- (id)imageData;
- (void)setImageData:(id)arg1;
- (id)image;
- (void)setImage:(id)arg1;
- (id)imagePickerController;
- (id)editingInfo;
- (void)_generatePreviewOnMainThreadForVideoFile:(id)arg1;
- (void)setEditingInfo:(id)arg1;
- (void)setImagePickerController:(id)arg1;
- (void)main;
- (void)dealloc;

@end
