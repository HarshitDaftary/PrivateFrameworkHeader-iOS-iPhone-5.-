/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class WebInspectorServerConnection, WebNodeHighlighter, WebInspectorRemoteChannel, WebInspectorWindowController;

@interface WebInspectorRemoteChannel : NSObject  {
    WebInspectorServerConnection *_remote;

  /* Error parsing encoded ivar type info: ^{WebInspectorClient=^^?@"WebView"{RetainPtr<WebNodeHighlighter>="m_ptr"@"WebNodeHighlighter"}^{Page}{RetainPtr<WebInspectorWindowController>="m_ptr"@"WebInspectorWindowController"}{HashMap<WTF::String,WTF::String,WTF::StringHash,WTF::HashTraits<WTF::String>,WTF::HashTraits<WTF::String> >="m_impl"{HashTable<WTF::String,std::pair<WTF::String, WTF::String>,WTF::PairFirstExtractor<std::pair<WTF::String, WTF::String> >,WTF::StringHash,WTF::PairHashTraits<WTF::HashTraits<WTF::String>, WTF::HashTraits<WTF::String> >,WTF::HashTraits<WTF::String> >="m_table"^{pair<WTF::String,WTF::String>}"m_tableSize"i"m_tableSizeMask"i"m_keyCount"i"m_deletedCount"i}}i@"WebInspectorRemoteChannel"} */
    struct WebInspectorClient { int (**x1)(); id x2; /* Warning: Unrecognized filer type: '"' using 'void*' */ void*x3; void*x4; void*x5; unsigned int x6/* : ? */; oneway int x7; void*x8; void*x9; void*x10; struct RetainPtr<WebNodeHighlighter> { 
            WebNodeHighlighter *m_ptr; 
        } x11; struct Page {} *x12; struct RetainPtr<WebInspectorWindowController> { 
            WebInspectorWindowController *m_ptr; 
        } x13; struct HashMap<WTF::String,WTF::String,WTF::StringHash,WTF::HashTraits<WTF::String>,WTF::HashTraits<WTF::String> > { 
            struct HashTable<WTF::String,std::pair<WTF::String, WTF::String>,WTF::PairFirstExtractor<std::pair<WTF::String, WTF::String> >,WTF::StringHash,WTF::PairHashTraits<WTF::HashTraits<WTF::String>, WTF::HashTraits<WTF::String> >,WTF::HashTraits<WTF::String> > { 
                struct pair<WTF::String,WTF::String> {} *m_table; 
                int m_tableSize; 
                int m_tableSizeMask; 
                int m_keyCount; 
                int m_deletedCount; 
            } m_impl; 
        } x14; int x15; WebInspectorRemoteChannel *x16; } *_local;

}

+ (id)createChannelForPageId:(unsigned int)arg1 connection:(id)arg2;

- (void)closeFromRemoteSide;
- (void)sendMessageToBackend:(id)arg1;
- (id)initWithRemote:(id)arg1 local:(struct WebInspectorClient { int (**x1)(); id x2; struct RetainPtr<WebNodeHighlighter> { id x_3_1_1; } x3; struct Page {} *x4; struct RetainPtr<WebInspectorWindowController> { id x_5_1_1; } x5; struct HashMap<WTF::String,WTF::String,WTF::StringHash,WTF::HashTraits<WTF::String>,WTF::HashTraits<WTF::String> > { struct HashTable<WTF::String,std::pair<WTF::String, WTF::String>,WTF::PairFirstExtractor<std::pair<WTF::String, WTF::String> >,WTF::StringHash,WTF::PairHashTraits<WTF::HashTraits<WTF::String>, WTF::HashTraits<WTF::String> >,WTF::HashTraits<WTF::String> > { struct pair<WTF::String,WTF::String> {} *x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_6_1_1; } x6; int x7; id x8; }*)arg2;
- (void)sendMessageToFrontend:(id)arg1;
- (void)closeFromLocalSide;

@end
