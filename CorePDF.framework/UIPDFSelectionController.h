/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@class UIPDFPageView, <UIPDFSelectionWidget>, <UIPDFSelectionWidget><NSObject>;

@interface UIPDFSelectionController : NSObject  {
    UIPDFPageView *_pageView;
    BOOL _rangeMode;
    <UIPDFSelectionWidget><NSObject> *_selectionWidget;
    BOOL _resizingWidget;
    struct CGPoint { 
        float x; 
        float y; 
    } _selectionFixedPoint;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _selectionBounds;
    BOOL _preceeds;
    BOOL _isTracking;
    struct CGPoint { 
        float x; 
        float y; 
    } _adjustedPoint;
    BOOL _hiding;
    int _firstIndex;
    int _lastIndex;
}

@property(readonly) struct CGPoint { float x; float y; } initialSelectionPoint;
@property(readonly) struct CGPoint { float x; float y; } currentSelectionPoint;
@property(readonly) struct CGPoint { float x; float y; } adjustedPoint;
@property(readonly) BOOL isTracking;
@property(readonly) <UIPDFSelectionWidget> * selectionWidget;
@property(readonly) BOOL rangeMode;
@property UIPDFPageView * pageView;


- (void)extendSelectionToParagraph;
- (BOOL)shouldTrackAt:(struct CGPoint { float x1; float x2; })arg1;
- (void)startTracking:(struct CGPoint { float x1; float x2; })arg1 showMagnifier:(BOOL*)arg2;
- (void)tracking:(struct CGPoint { float x1; float x2; })arg1 showMagnifier:(BOOL*)arg2;
- (void)endTracking:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGPoint { float x1; float x2; })selectedPointOffset;
- (struct CGPoint { float x1; float x2; })initialSelectionPoint;
- (struct CGPoint { float x1; float x2; })currentSelectionPoint;
- (struct CGPoint { float x1; float x2; })adjustedPoint;
- (id)selectionWidget;
- (BOOL)rangeMode;
- (void)selectionHide:(id)arg1;
- (void)selectionShow:(id)arg1;
- (void)selectionShowDelayed:(id)arg1;
- (void)setSelectionFor:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)useParagraphMode;
- (void)startSelectingAt:(struct CGPoint { float x1; float x2; })arg1;
- (void)adjustSelection:(struct CGPoint { float x1; float x2; })arg1;
- (id)pageView;
- (void)setPageView:(id)arg1;
- (void)layoutSelections;
- (void)hideWidget;
- (void)clearSelection;
- (BOOL)isTracking;
- (id)init;
- (void)dealloc;

@end
