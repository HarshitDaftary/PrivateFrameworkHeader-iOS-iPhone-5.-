/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLCGPathCache : NSObject  {
    struct __CFDictionary { } *_pathCache;
}

+ (id)sharedPathCache;

- (void)setPath:(struct CGPath { }*)arg1 forKey:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (struct CGPath { }*)pathForKey:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)init;
- (void)dealloc;

@end
