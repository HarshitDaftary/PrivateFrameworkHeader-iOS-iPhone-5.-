/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

@class WebDataSource, NSTimer, WAKView, WebPluginController, WebEvent, NSString, NSMutableDictionary, NSArray;

@interface WebHTMLViewPrivate : NSObject  {
    BOOL closed;
    BOOL ignoringMouseDraggedEvents;
    BOOL printing;
    BOOL paginateScreenContent;
    WAKView *layerHostingView;
    BOOL drawingIntoLayer;
    WebEvent *mouseDownEvent;
    BOOL handlingMouseDownEvent;
    WebEvent *keyDownEvent;
    BOOL exposeInputContext;
    struct CGPoint { 
        float x; 
        float y; 
    } lastScrollPosition;
    BOOL inScrollPositionChanged;
    WebPluginController *pluginController;
    NSString *toolTip;
    id trackingRectOwner;
    void *trackingRectUserData;
    NSTimer *autoscrollTimer;
    WebEvent *autoscrollTriggerEvent;
    NSArray *pageRects;
    NSMutableDictionary *highlighters;
    BOOL transparentBackground;
    struct WebHTMLViewInterpretKeyEventsParameters { struct KeyboardEvent {} *x1; boolx2; boolx3; boolx4; boolx5; } *interpretKeyEventsParameters;
    WebDataSource *dataSource;
    SEL selectorForDoCommandBySelector;
}

+ (void)initialize;

- (void)finalize;
- (void)clear;
- (void)dealloc;

@end
