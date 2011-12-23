/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class WDParagraph, NSMutableDictionary, WXState;

@interface WXOAVState : OAVState  {
    WXState *mWxState;
    WDParagraph *mParagraph;
    NSMutableDictionary *mNextVmlShapeIdToTextBoxMap;
}


- (id)currentParagraph;
- (id)nextVmlShapeIdToTextBoxMap;
- (id)initWithWXState:(id)arg1;
- (id)wxState;
- (void)setCurrentParagraph:(id)arg1;
- (void)dealloc;

@end
