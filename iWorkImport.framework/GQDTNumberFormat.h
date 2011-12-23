/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSIndexSet, NSArray;

@interface GQDTNumberFormat : NSObject <GQDNameMappable> {
    char *mUid;
    struct __CFString { } *mFormatString;
    struct __CFString { } *mCurrencyCode;
    long mDecimalPlaces;
    BOOL mUseAccountingStyle;
    BOOL mShowThousandsSeparator;
    int mValueType;
    int mNegativeStyle;
    int mFractionAccuracy;
    BOOL mFormatStringRequiresSuppressionOfMinusSign;
    double mScaleFactor;
    BOOL mIsCustom;
    BOOL mRequiresFractionReplacement;
    unsigned char mNumberOfNonSpaceIntegerPlaceholderDigits;
    unsigned char mNumberOfNonSpaceDecimalPlaceholderDigits;
    unsigned short mIndexFromRightOfLastDigitPlaceholder;
    unsigned char mBase;
    unsigned short mBasePlaces;
    BOOL mBaseUsesMinusSign;
    BOOL mUseScientificFormattingAutomatically;
    BOOL mIgnoreDecimalPlacesForZeroValue;
    BOOL mIsTextFormat;
    BOOL mFormatContainsSpecialTokens;
    BOOL mFormatContainsIntegerToken;
    NSArray *mInterstitialStrings;
    NSIndexSet *mInterstitialStringInsertionIndexes;
    unsigned char mMinimumIntegerWidth;
    unsigned char mDecimalWidth;
    struct __CFString { } *mSuffixString;
}

+ (id)numberFormatWithValueType:(int)arg1 formatString:(id)arg2 decimalPlaces:(unsigned short)arg3 currencyCode:(id)arg4 useAccountingStyle:(BOOL)arg5 negativeStyle:(int)arg6 showThousandsSeparator:(BOOL)arg7 fractionAccuracy:(int)arg8 suffixString:(struct __CFString { }*)arg9;
+ (BOOL)needToSuppressMinusSignForFormatString:(struct __CFString { }*)arg1;
+ (const struct StateSpec { int (**x1)(); char *x2; int x3; int x4; struct Action {} *x5; int (*x6)(); int (*x7)(); int (*x8)(); struct ActionFinder {} *x9; }*)stateForReading;

- (id)fractionStringFromDouble:(double)arg1;
- (id)baseStringFromDouble:(double)arg1;
- (id)numberFormatBySettingValueType:(int)arg1;
- (id)numberFormatBySettingNegativeStyle:(int)arg1;
- (id)customNumberFormatTokens;
- (BOOL)isTextFormat;
- (id)currencyCode;
- (BOOL)showThousandsSeparator;
- (int)fractionAccuracy;
- (BOOL)hasValidDecimalPlaces;
- (BOOL)isCustom;
- (void)setUseScientificFormattingAutomatically:(BOOL)arg1;
- (id)stringFromDouble:(double)arg1;
- (id)formatString;
- (int)valueType;
- (BOOL)useAccountingStyle;
- (id)initWithValueType:(int)arg1 formatString:(id)arg2 decimalPlaces:(unsigned short)arg3 currencyCode:(id)arg4 useAccountingStyle:(BOOL)arg5 negativeStyle:(int)arg6 showThousandsSeparator:(BOOL)arg7 fractionAccuracy:(int)arg8 suffixString:(struct __CFString { }*)arg9 scaleFactor:(double)arg10 base:(unsigned short)arg11 basePlaces:(unsigned short)arg12 baseUseMinusSign:(BOOL)arg13 isCustom:(BOOL)arg14 interstitialStrings:(id)arg15 interstitialStringInsertionIndexes:(id)arg16 indexFromRightOfLastDigitPlaceholder:(unsigned short)arg17 minimumIntegerWidth:(unsigned char)arg18 decimalWidth:(unsigned char)arg19 numberOfNonSpaceIntegerPlaceholderDigits:(unsigned char)arg20 numberOfNonSpaceDecimalPlaceholderDigits:(unsigned char)arg21 isTextFormat:(BOOL)arg22 formatName:(id)arg23;
- (struct __CFString { }*)createStringFromDouble:(double)arg1;
- (int)readAttributesFromReader:(struct _xmlTextReader { }*)arg1;
- (void)dealloc;

@end
