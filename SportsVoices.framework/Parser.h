/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SportsVoices.framework/SportsVoices
 */

@class GrammarPart, NSMutableArray, NSMutableDictionary;

@interface Parser : NSObject  {
    NSMutableArray *_productionRules;
    NSMutableDictionary *_grammarsPlist;
    bool_debugging;
    GrammarPart *_theGrammar;
}

@property(readonly) NSMutableArray * productionRules;

+ (id)retrievePlistForPathArray:(id)arg1 from:(id)arg2;
+ (id)retrievePlistForStringInDotNotation:(id)arg1 from:(id)arg2;
+ (BOOL)insertStatementsFromOriginal:(id)arg1 intoBranch:(id)arg2;
+ (id)loadGrammarsFromPlistAtPath:(id)arg1;

- (id)resultOfRulesAppliedTo:(id)arg1;
- (id)resultOfRulesAppliedToStrings:(id)arg1;
- (void)setGrammar:(id)arg1;
- (id)initWithPlistAtPath:(id)arg1 grammar:(id)arg2;
- (void)dealloc;
- (id)productionRules;

@end
