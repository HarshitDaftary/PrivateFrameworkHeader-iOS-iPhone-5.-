/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OADTableCell3DProperties, OADStroke, OADFill;

@interface OADTableCellProperties : NSObject  {
    OADStroke *mLeftStroke;
    BOOL mIsLeftStrokeOverridden;
    OADStroke *mRightStroke;
    BOOL mIsRightStrokeOverridden;
    OADStroke *mTopStroke;
    BOOL mIsTopStrokeOverridden;
    OADStroke *mBottomStroke;
    BOOL mIsBottomStrokeOverridden;
    OADStroke *mTopLeftToBottomRightStroke;
    BOOL mIsTopLeftToBottomRightStrokeOverridden;
    OADStroke *mBottomLeftToTopRightStroke;
    BOOL mIsBottomLeftToTopRightStrokeOverridden;
    OADTableCell3DProperties *mThreeDProperties;
    BOOL mIsThreeDPropertiesOverridden;
    OADFill *mFill;
    BOOL mIsFillOverridden;
    float mLeftMargin;
    BOOL mIsLeftMarginOverridden;
    float mRightMargin;
    BOOL mIsRightMarginOverridden;
    float mTopMargin;
    BOOL mIsTopMarginOverridden;
    float mBottomMargin;
    BOOL mIsBottomMarginOverridden;
    int mTextVertical;
    BOOL mIsTextVerticalOverridden;
    int mTextAnchor;
    BOOL mIsTextAnchorOverridden;
    BOOL mTextAnchorCenter;
    BOOL mIsTextAnchorCenterOverridden;
    int mTextHorizontalOverflow;
    BOOL mIsTextHorizontalOverflowOverridden;
}


- (id)stroke:(int)arg1;
- (BOOL)isLeftStrokeOverridden;
- (BOOL)isRightStrokeOverridden;
- (BOOL)isTopStrokeOverridden;
- (BOOL)isBottomStrokeOverridden;
- (BOOL)isTopLeftToBottomRightStrokeOverridden;
- (BOOL)isBottomLeftToTopRightStrokeOverridden;
- (id)strokeNormalToDir:(int)arg1 bound:(int)arg2;
- (id)threeDProperties;
- (void)setThreeDProperties:(id)arg1;
- (BOOL)isThreeDPropertiesOverridden;
- (int)textVertical;
- (void)setTextVertical:(int)arg1;
- (BOOL)isTextVerticalOverridden;
- (int)textAnchor;
- (void)setTextAnchor:(int)arg1;
- (BOOL)isTextAnchorOverridden;
- (BOOL)textAnchorCenter;
- (void)setTextAnchorCenter:(BOOL)arg1;
- (BOOL)isTextAnchorCenterOverridden;
- (int)textHorizontalOverflow;
- (void)setTextHorizontalOverflow:(int)arg1;
- (BOOL)isTextHorizontalOverflowOverridden;
- (id)leftStroke;
- (id)rightStroke;
- (id)topStroke;
- (id)bottomStroke;
- (id)topLeftToBottomRightStroke;
- (id)bottomLeftToTopRightStroke;
- (void)setLeftStroke:(id)arg1;
- (void)setRightStroke:(id)arg1;
- (void)setTopStroke:(id)arg1;
- (void)setBottomStroke:(id)arg1;
- (void)setTopLeftToBottomRightStroke:(id)arg1;
- (void)setBottomLeftToTopRightStroke:(id)arg1;
- (BOOL)isLeftMarginOverridden;
- (BOOL)isRightMarginOverridden;
- (BOOL)isTopMarginOverridden;
- (BOOL)isBottomMarginOverridden;
- (BOOL)isFillOverridden;
- (float)rightMargin;
- (float)topMargin;
- (void)setTopMargin:(float)arg1;
- (float)bottomMargin;
- (void)setBottomMargin:(float)arg1;
- (float)leftMargin;
- (void)setLeftMargin:(float)arg1;
- (void)setFill:(id)arg1;
- (void)setRightMargin:(float)arg1;
- (id)fill;
- (void)dealloc;

@end
