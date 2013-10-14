/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface WebDataSource : NSObject  {
    void *_private;
}

+ (id)_repTypesAllowImageTypeOmission:(BOOL)arg1;
+ (Class)_representationClassForMIMEType:(id)arg1 allowingPlugins:(BOOL)arg2;
+ (void)initialize;

- (id)unreachableURL;
- (id)pageTitle;
- (BOOL)isLoading;
- (id)initialRequest;
- (id)textEncodingName;
- (id)_initWithDocumentLoader:(struct PassRefPtr<WebDocumentLoaderMac> { struct WebDocumentLoaderMac {} *x1; })arg1;
- (struct DocumentLoader { int (**x1)(); unsigned int x2; boolx3; struct Frame {} *x4; struct RefPtr<WebCore::CachedResourceLoader> { struct CachedResourceLoader {} *x_5_1_1; } x5; struct CachedResourceHandle<WebCore::CachedRawResource> { struct CachedResource {} *x_6_1_1; } x6; struct HashSet<WTF::RefPtr<WebCore::ResourceLoader>, WTF::PtrHash<WTF::RefPtr<WebCore::ResourceLoader> >, WTF::HashTraits<WTF::RefPtr<WebCore::ResourceLoader> > > { struct HashTable<WTF::RefPtr<WebCore::ResourceLoader>, WTF::RefPtr<WebCore::ResourceLoader>, WTF::IdentityExtractor, WTF::PtrHash<WTF::RefPtr<WebCore::ResourceLoader> >, WTF::HashTraits<WTF::RefPtr<WebCore::ResourceLoader> >, WTF::HashTraits<WTF::RefPtr<WebCore::ResourceLoader> > > { struct RefPtr<WebCore::ResourceLoader> {} *x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_7_1_1; } x7; struct HashSet<WTF::RefPtr<WebCore::ResourceLoader>, WTF::PtrHash<WTF::RefPtr<WebCore::ResourceLoader> >, WTF::HashTraits<WTF::RefPtr<WebCore::ResourceLoader> > > { struct HashTable<WTF::RefPtr<WebCore::ResourceLoader>, WTF::RefPtr<WebCore::ResourceLoader>, WTF::IdentityExtractor, WTF::PtrHash<WTF::RefPtr<WebCore::ResourceLoader> >, WTF::HashTraits<WTF::RefPtr<WebCore::ResourceLoader> >, WTF::HashTraits<WTF::RefPtr<WebCore::ResourceLoader> > > { struct RefPtr<WebCore::ResourceLoader> {} *x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_8_1_1; } x8; struct HashSet<WTF::RefPtr<WebCore::ResourceLoader>, WTF::PtrHash<WTF::RefPtr<WebCore::ResourceLoader> >, WTF::HashTraits<WTF::RefPtr<WebCore::ResourceLoader> > > { struct HashTable<WTF::RefPtr<WebCore::ResourceLoader>, WTF::RefPtr<WebCore::ResourceLoader>, WTF::IdentityExtractor, WTF::PtrHash<WTF::RefPtr<WebCore::ResourceLoader> >, WTF::HashTraits<WTF::RefPtr<WebCore::ResourceLoader> >, WTF::HashTraits<WTF::RefPtr<WebCore::ResourceLoader> > > { struct RefPtr<WebCore::ResourceLoader> {} *x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_9_1_1; } x9; struct DocumentWriter { struct Frame {} *x_10_1_1; boolx_10_1_2; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_3_1; } x_3_2_1; } x_10_1_3; boolx_10_1_4; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_3_1; } x_5_2_1; } x_10_1_5; struct RefPtr<WebCore::TextResourceDecoder> { struct TextResourceDecoder {} *x_6_2_1; } x_10_1_6; struct RefPtr<WebCore::DocumentParser> { struct DocumentParser {} *x_7_2_1; } x_10_1_7; int x_10_1_8; } x10; struct ResourceRequest { struct KURL { struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_4_1; } x_1_3_1; } x_1_2_1; unsigned int x_1_2_2 : 1; unsigned int x_1_2_3 : 1; int x_1_2_4; int x_1_2_5; int x_1_2_6; int x_1_2_7; int x_1_2_8; int x_1_2_9; int x_1_2_10; int x_1_2_11; int x_1_2_12; int x_1_2_13; } x_11_1_1; int x_11_1_2; double x_11_1_3; struct KURL { struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_4_1; } x_1_3_1; } x_4_2_1; unsigned int x_4_2_2 : 1; unsigned int x_4_2_3 : 1; int x_4_2_4; int x_4_2_5; int x_4_2_6; int x_4_2_7; int x_4_2_8; int x_4_2_9; int x_4_2_10; int x_4_2_11; int x_4_2_12; int x_4_2_13; } x_11_1_4; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_3_1; } x_5_2_1; } x_11_1_5; struct HTTPHeaderMap { struct HashTable<WTF::AtomicString, WTF::KeyValuePair<WTF::AtomicString, WTF::String>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WTF::AtomicString, WTF::String> >, WTF::CaseFoldingHash, WTF::HashMapValueTraits<WTF::HashTraits<WTF::AtomicString>, WTF::HashTraits<WTF::String> >, WTF::HashTraits<WTF::AtomicString> > { struct KeyValuePair<WTF::AtomicString, WTF::String> {} *x_1_3_1; int x_1_3_2; int x_1_3_3; int x_1_3_4; int x_1_3_5; } x_6_2_1; } x_11_1_6; struct Vector<WTF::String, 0, WTF::CrashOnOverflow> { struct String {} *x_7_2_1; unsigned int x_7_2_2; unsigned int x_7_2_3; } x_11_1_7; struct RefPtr<WebCore::FormData> { struct FormData {} *x_8_2_1; } x_11_1_8; unsigned int x_11_1_9 : 1; unsigned int x_11_1_10 : 1; unsigned int x_11_1_11 : 1; unsigned int x_11_1_12 : 1; unsigned int x_11_1_13 : 1; unsigned int x_11_1_14 : 1; unsigned int x_11_1_15 : 1; unsigned int x_11_1_16 : 1; int x_11_1_17; boolx_11_1_18; struct RetainPtr<const _CFURLRequest *> { struct _CFURLRequest {} *x_19_2_1; } x_11_1_19; struct RetainPtr<NSURLRequest> { struct NSURLRequest { Class x_1_3_1; id x_1_3_2; } *x_20_2_1; } x_11_1_20; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_3_1; } x_21_2_1; } x_11_1_21; } x11; struct SubstituteData { struct RefPtr<WebCore::SharedBuffer> { struct SharedBuffer {} *x_1_2_1; } x_12_1_1; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_3_1; } x_2_2_1; } x_12_1_2; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_3_1; } x_3_2_1; } x_12_1_3; struct KURL { struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_4_1; } x_1_3_1; } x_4_2_1; unsigned int x_4_2_2 : 1; unsigned int x_4_2_3 : 1; int x_4_2_4; int x_4_2_5; int x_4_2_6; int x_4_2_7; int x_4_2_8; int x_4_2_9; int x_4_2_10; int x_4_2_11; int x_4_2_12; int x_4_2_13; } x_12_1_4; struct KURL { struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_4_1; } x_1_3_1; } x_5_2_1; unsigned int x_5_2_2 : 1; unsigned int x_5_2_3 : 1; int x_5_2_4; int x_5_2_5; int x_5_2_6; int x_5_2_7; int x_5_2_8; int x_5_2_9; int x_5_2_10; int x_5_2_11; int x_5_2_12; int x_5_2_13; } x_12_1_5; } x12; struct ResourceRequest { struct KURL { struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_4_1; } x_1_3_1; } x_1_2_1; unsigned int x_1_2_2 : 1; unsigned int x_1_2_3 : 1; int x_1_2_4; int x_1_2_5; int x_1_2_6; int x_1_2_7; int x_1_2_8; int x_1_2_9; int x_1_2_10; int x_1_2_11; int x_1_2_12; int x_1_2_13; } x_13_1_1; int x_13_1_2; double x_13_1_3; struct KURL { struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_4_1; } x_1_3_1; } x_4_2_1; unsigned int x_4_2_2 : 1; unsigned int x_4_2_3 : 1; int x_4_2_4; int x_4_2_5; int x_4_2_6; int x_4_2_7; int x_4_2_8; int x_4_2_9; int x_4_2_10; int x_4_2_11; int x_4_2_12; int x_4_2_13; } x_13_1_4; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_3_1; } x_5_2_1; } x_13_1_5; struct HTTPHeaderMap { struct HashTable<WTF::AtomicString, WTF::KeyValuePair<WTF::AtomicString, WTF::String>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WTF::AtomicString, WTF::String> >, WTF::CaseFoldingHash, WTF::HashMapValueTraits<WTF::HashTraits<WTF::AtomicString>, WTF::HashTraits<WTF::String> >, WTF::HashTraits<WTF::AtomicString> > { struct KeyValuePair<WTF::AtomicString, WTF::String> {} *x_1_3_1; int x_1_3_2; int x_1_3_3; int x_1_3_4; int x_1_3_5; } x_6_2_1; } x_13_1_6; struct Vector<WTF::String, 0, WTF::CrashOnOverflow> { struct String {} *x_7_2_1; unsigned int x_7_2_2; unsigned int x_7_2_3; } x_13_1_7; struct RefPtr<WebCore::FormData> { struct FormData {} *x_8_2_1; } x_13_1_8; unsigned int x_13_1_9 : 1; unsigned int x_13_1_10 : 1; unsigned int x_13_1_11 : 1; unsigned int x_13_1_12 : 1; unsigned int x_13_1_13 : 1; unsigned int x_13_1_14 : 1; unsigned int x_13_1_15 : 1; unsigned int x_13_1_16 : 1; int x_13_1_17; boolx_13_1_18; struct RetainPtr<const _CFURLRequest *> { struct _CFURLRequest {} *x_19_2_1; } x_13_1_19; struct RetainPtr<NSURLRequest> { struct NSURLRequest { Class x_1_3_1; id x_1_3_2; } *x_20_2_1; } x_13_1_20; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_3_1; } x_21_2_1; } x_13_1_21; } x13; struct ResourceRequest { struct KURL { struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_4_1; } x_1_3_1; } x_1_2_1; unsigned int x_1_2_2 : 1; unsigned int x_1_2_3 : 1; int x_1_2_4; int x_1_2_5; int x_1_2_6; int x_1_2_7; int x_1_2_8; int x_1_2_9; int x_1_2_10; int x_1_2_11; int x_1_2_12; int x_1_2_13; } x_14_1_1; int x_14_1_2; double x_14_1_3; struct KURL { struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_4_1; } x_1_3_1; } x_4_2_1; unsigned int x_4_2_2 : 1; unsigned int x_4_2_3 : 1; int x_4_2_4; int x_4_2_5; int x_4_2_6; int x_4_2_7; int x_4_2_8; int x_4_2_9; int x_4_2_10; int x_4_2_11; int x_4_2_12; int x_4_2_13; } x_14_1_4; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_3_1; } x_5_2_1; } x_14_1_5; struct HTTPHeaderMap { struct HashTable<WTF::AtomicString, WTF::KeyValuePair<WTF::AtomicString, WTF::String>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WTF::AtomicString, WTF::String> >, WTF::CaseFoldingHash, WTF::HashMapValueTraits<WTF::HashTraits<WTF::AtomicString>, WTF::HashTraits<WTF::String> >, WTF::HashTraits<WTF::AtomicString> > { struct KeyValuePair<WTF::AtomicString, WTF::String> {} *x_1_3_1; int x_1_3_2; int x_1_3_3; int x_1_3_4; int x_1_3_5; } x_6_2_1; } x_14_1_6; struct Vector<WTF::String, 0, WTF::CrashOnOverflow> { struct String {} *x_7_2_1; unsigned int x_7_2_2; unsigned int x_7_2_3; } x_14_1_7; struct RefPtr<WebCore::FormData> { struct FormData {} *x_8_2_1; } x_14_1_8; unsigned int x_14_1_9 : 1; unsigned int x_14_1_10 : 1; unsigned int x_14_1_11 : 1; unsigned int x_14_1_12 : 1; unsigned int x_14_1_13 : 1; unsigned int x_14_1_14 : 1; unsigned int x_14_1_15 : 1; unsigned int x_14_1_16 : 1; int x_14_1_17; boolx_14_1_18; struct RetainPtr<const _CFURLRequest *> { struct _CFURLRequest {} *x_19_2_1; } x_14_1_19; struct RetainPtr<NSURLRequest> { struct NSURLRequest { Class x_1_3_1; id x_1_3_2; } *x_20_2_1; } x_14_1_20; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_3_1; } x_21_2_1; } x_14_1_21; } x14; struct ResourceResponse { struct KURL { struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_4_1; } x_1_3_1; } x_1_2_1; unsigned int x_1_2_2 : 1; unsigned int x_1_2_3 : 1; int x_1_2_4; int x_1_2_5; int x_1_2_6; int x_1_2_7; int x_1_2_8; int x_1_2_9; int x_1_2_10; int x_1_2_11; int x_1_2_12; int x_1_2_13; } x_15_1_1; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_3_1; } x_2_2_1; } x_15_1_2; long long x_15_1_3; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_3_1; } x_4_2_1; } x_15_1_4; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_3_1; } x_5_2_1; } x_15_1_5; int x_15_1_6; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_3_1; } x_7_2_1; } x_15_1_7; struct HTTPHeaderMap { struct HashTable<WTF::AtomicString, WTF::KeyValuePair<WTF::AtomicString, WTF::String>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WTF::AtomicString, WTF::String> >, WTF::CaseFoldingHash, WTF::HashMapValueTraits<WTF::HashTraits<WTF::AtomicString>, WTF::HashTraits<WTF::String> >, WTF::HashTraits<WTF::AtomicString> > { struct KeyValuePair<WTF::AtomicString, WTF::String> {} *x_1_3_1; int x_1_3_2; int x_1_3_3; int x_1_3_4; int x_1_3_5; } x_8_2_1; } x_15_1_8; unsigned int x_15_1_9 : 1; unsigned int x_15_1_10; unsigned int x_15_1_11 : 1; struct RefPtr<WebCore::ResourceLoadTiming> { struct ResourceLoadTiming {} *x_12_2_1; } x_15_1_12; unsigned int x_15_1_13 : 1; unsigned int x_15_1_14 : 1; unsigned int x_15_1_15 : 1; unsigned int x_15_1_16 : 1; unsigned int x_15_1_17 : 1; unsigned int x_15_1_18 : 1; unsigned int x_15_1_19 : 1; unsigned int x_15_1_20 : 1; unsigned int x_15_1_21 : 1; double x_15_1_22; double x_15_1_23; double x_15_1_24; double x_15_1_25; double x_15_1_26; struct RetainPtr<_CFURLResponse *> { struct _CFURLResponse {} *x_27_2_1; } x_15_1_27; struct RetainPtr<NSURLResponse> { struct NSURLResponse { Class x_1_3_1; id x_1_3_2; } *x_28_2_1; } x_15_1_28; struct RetainPtr<const __CFArray *> { struct __CFArray {} *x_29_2_1; } x_15_1_29; int x_15_1_30; boolx_15_1_31; } x15; struct ResourceError { struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_3_1; } x_1_2_1; } x_16_1_1; int x_16_1_2; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_3_1; } x_3_2_1; } x_16_1_3; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_3_1; } x_4_2_1; } x_16_1_4; boolx_16_1_5; boolx_16_1_6; boolx_16_1_7; boolx_16_1_8; struct RetainPtr<__CFError *> { struct __CFError {} *x_9_2_1; } x_16_1_9; struct RetainPtr<NSError> { struct NSError { Class x_1_3_1; void *x_1_3_2; int x_1_3_3; id x_1_3_4; id x_1_3_5; } *x_10_2_1; } x_16_1_10; } x16; boolx17; boolx18; boolx19; boolx20; boolx21; boolx22; boolx23; struct StringWithDirection { struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_3_1; } x_1_2_1; } x_24_1_1; int x_24_1_2; } x24; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_25_1_1; } x25; struct NavigationAction { struct ResourceRequest { struct KURL { struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_5_1; } x_1_4_1; } x_1_3_1; unsigned int x_1_3_2 : 1; unsigned int x_1_3_3 : 1; int x_1_3_4; int x_1_3_5; int x_1_3_6; int x_1_3_7; int x_1_3_8; int x_1_3_9; int x_1_3_10; int x_1_3_11; int x_1_3_12; int x_1_3_13; } x_1_2_1; int x_1_2_2; double x_1_2_3; struct KURL { struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_5_1; } x_1_4_1; } x_4_3_1; unsigned int x_4_3_2 : 1; unsigned int x_4_3_3 : 1; int x_4_3_4; int x_4_3_5; int x_4_3_6; int x_4_3_7; int x_4_3_8; int x_4_3_9; int x_4_3_10; int x_4_3_11; int x_4_3_12; int x_4_3_13; } x_1_2_4; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_4_1; } x_5_3_1; } x_1_2_5; struct HTTPHeaderMap { struct HashTable<WTF::AtomicString, WTF::KeyValuePair<WTF::AtomicString, WTF::String>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WTF::AtomicString, WTF::String> >, WTF::CaseFoldingHash, WTF::HashMapValueTraits<WTF::HashTraits<WTF::AtomicString>, WTF::HashTraits<WTF::String> >, WTF::HashTraits<WTF::AtomicString> > { struct KeyValuePair<WTF::AtomicString, WTF::String> {} *x_1_4_1; int x_1_4_2; int x_1_4_3; int x_1_4_4; int x_1_4_5; } x_6_3_1; } x_1_2_6; struct Vector<WTF::String, 0, WTF::CrashOnOverflow> { struct String {} *x_7_3_1; unsigned int x_7_3_2; unsigned int x_7_3_3; } x_1_2_7; struct RefPtr<WebCore::FormData> { struct FormData {} *x_8_3_1; } x_1_2_8; unsigned int x_1_2_9 : 1; unsigned int x_1_2_10 : 1; unsigned int x_1_2_11 : 1; unsigned int x_1_2_12 : 1; unsigned int x_1_2_13 : 1; unsigned int x_1_2_14 : 1; unsigned int x_1_2_15 : 1; unsigned int x_1_2_16 : 1; int x_1_2_17; boolx_1_2_18; struct RetainPtr<const _CFURLRequest *> { struct _CFURLRequest {} *x_19_3_1; } x_1_2_19; struct RetainPtr<NSURLRequest> { struct NSURLRequest { Class x_1_4_1; id x_1_4_2; } *x_20_3_1; } x_1_2_20; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_4_1; } x_21_3_1; } x_1_2_21; } x_26_1_1; int x_26_1_2; struct RefPtr<WebCore::Event> { struct Event {} *x_3_2_1; } x_26_1_3; } x26; struct ResourceRequest { struct KURL { struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_4_1; } x_1_3_1; } x_1_2_1; unsigned int x_1_2_2 : 1; unsigned int x_1_2_3 : 1; int x_1_2_4; int x_1_2_5; int x_1_2_6; int x_1_2_7; int x_1_2_8; int x_1_2_9; int x_1_2_10; int x_1_2_11; int x_1_2_12; int x_1_2_13; } x_27_1_1; int x_27_1_2; double x_27_1_3; struct KURL { struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_4_1; } x_1_3_1; } x_4_2_1; unsigned int x_4_2_2 : 1; unsigned int x_4_2_3 : 1; int x_4_2_4; int x_4_2_5; int x_4_2_6; int x_4_2_7; int x_4_2_8; int x_4_2_9; int x_4_2_10; int x_4_2_11; int x_4_2_12; int x_4_2_13; } x_27_1_4; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_3_1; } x_5_2_1; } x_27_1_5; struct HTTPHeaderMap { struct HashTable<WTF::AtomicString, WTF::KeyValuePair<WTF::AtomicString, WTF::String>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WTF::AtomicString, WTF::String> >, WTF::CaseFoldingHash, WTF::HashMapValueTraits<WTF::HashTraits<WTF::AtomicString>, WTF::HashTraits<WTF::String> >, WTF::HashTraits<WTF::AtomicString> > { struct KeyValuePair<WTF::AtomicString, WTF::String> {} *x_1_3_1; int x_1_3_2; int x_1_3_3; int x_1_3_4; int x_1_3_5; } x_6_2_1; } x_27_1_6; struct Vector<WTF::String, 0, WTF::CrashOnOverflow> { struct String {} *x_7_2_1; unsigned int x_7_2_2; unsigned int x_7_2_3; } x_27_1_7; struct RefPtr<WebCore::FormData> { struct FormData {} *x_8_2_1; } x_27_1_8; unsigned int x_27_1_9 : 1; unsigned int x_27_1_10 : 1; unsigned int x_27_1_11 : 1; unsigned int x_27_1_12 : 1; unsigned int x_27_1_13 : 1; unsigned int x_27_1_14 : 1; unsigned int x_27_1_15 : 1; unsigned int x_27_1_16 : 1; int x_27_1_17; boolx_27_1_18; struct RetainPtr<const _CFURLRequest *> { struct _CFURLRequest {} *x_19_2_1; } x_27_1_19; struct RetainPtr<NSURLRequest> { struct NSURLRequest { Class x_1_3_1; id x_1_3_2; } *x_20_2_1; } x_27_1_20; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_3_1; } x_21_2_1; } x_27_1_21; } x27; struct Vector<WebCore::ResourceResponse, 0, WTF::CrashOnOverflow> { struct ResourceResponse {} *x_28_1_1; unsigned int x_28_1_2; unsigned int x_28_1_3; } x28; boolx29; struct HashMap<WTF::RefPtr<WebCore::ResourceLoader>, WTF::RefPtr<WebCore::SubstituteResource>, WTF::PtrHash<WTF::RefPtr<WebCore::ResourceLoader> >, WTF::HashTraits<WTF::RefPtr<WebCore::ResourceLoader> >, WTF::HashTraits<WTF::RefPtr<WebCore::SubstituteResource> > > { struct HashTable<WTF::RefPtr<WebCore::ResourceLoader>, WTF::KeyValuePair<WTF::RefPtr<WebCore::ResourceLoader>, WTF::RefPtr<WebCore::SubstituteResource> >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WTF::RefPtr<WebCore::ResourceLoader>, WTF::RefPtr<WebCore::SubstituteResource> > >, WTF::PtrHash<WTF::RefPtr<WebCore::ResourceLoader> >, WTF::KeyValuePairHashTraits<WTF::HashTraits<WTF::RefPtr<WebCore::ResourceLoader> >, WTF::HashTraits<WTF::RefPtr<WebCore::SubstituteResource> > >, WTF::HashTraits<WTF::RefPtr<WebCore::ResourceLoader> > > { struct KeyValuePair<WTF::RefPtr<WebCore::ResourceLoader>, WTF::RefPtr<WebCore::SubstituteResource> > {} *x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_30_1_1; } x30; struct Timer<WebCore::DocumentLoader> { int (**x_31_1_1)(); double x_31_1_2; double x_31_1_3; double x_31_1_4; int x_31_1_5; unsigned int x_31_1_6; struct Vector<WebCore::TimerBase *, 0, WTF::CrashOnOverflow> {} *x_31_1_7; struct DocumentLoader {} *x_31_1_8; } x31; struct OwnPtr<WebCore::ArchiveResourceCollection> { struct ArchiveResourceCollection {} *x_32_1_1; } x32; struct RefPtr<WebCore::Archive> { struct Archive {} *x_33_1_1; } x33; struct RefPtr<WebCore::SharedBuffer> { struct SharedBuffer {} *x_34_1_1; } x34; struct HashSet<WTF::String, WTF::StringHash, WTF::HashTraits<WTF::String> > { struct HashTable<WTF::String, WTF::String, WTF::IdentityExtractor, WTF::StringHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<WTF::String> > { struct String {} *x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_35_1_1; } x35; struct Vector<WebCore::ResourceRequest, 0, WTF::CrashOnOverflow> { struct ResourceRequest {} *x_36_1_1; unsigned int x_36_1_2; unsigned int x_36_1_3; } x36; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_37_1_1; } x37; boolx38; boolx39; struct DocumentLoadTiming { double x_40_1_1; double x_40_1_2; double x_40_1_3; double x_40_1_4; double x_40_1_5; double x_40_1_6; double x_40_1_7; short x_40_1_8; double x_40_1_9; double x_40_1_10; double x_40_1_11; double x_40_1_12; boolx_40_1_13; boolx_40_1_14; } x40; double x41; unsigned long x42; struct Timer<WebCore::DocumentLoader> { int (**x_43_1_1)(); double x_43_1_2; double x_43_1_3; double x_43_1_4; int x_43_1_5; unsigned int x_43_1_6; struct Vector<WebCore::TimerBase *, 0, WTF::CrashOnOverflow> {} *x_43_1_7; struct DocumentLoader {} *x_43_1_8; } x43; boolx44; struct RefPtr<WebCore::EnumCallback<WebCore::IconLoadDecision> > { struct EnumCallback<WebCore::IconLoadDecision> {} *x_45_1_1; } x45; struct RefPtr<WebCore::ObjectCallback<WebCore::SharedBuffer *> > { struct ObjectCallback<WebCore::SharedBuffer *> {} *x_46_1_1; } x46; boolx47; struct RefPtr<WebCore::ContentFilter> { struct ContentFilter {} *x_48_1_1; } x48; struct OwnPtr<WebCore::ApplicationCacheHost> { struct ApplicationCacheHost {} *x_49_1_1; } x49; struct RefPtr<WebCore::ContentFilter> { struct ContentFilter {} *x_50_1_1; } x50; }*)_documentLoader;
- (void)_makeRepresentation;
- (BOOL)_isDocumentHTML;
- (id)_URL;
- (void)_replaceSelectionWithArchive:(id)arg1 selectReplacement:(BOOL)arg2;
- (void)_revertToProvisionalState;
- (void)_setMainDocumentError:(id)arg1;
- (void)_receivedData:(id)arg1;
- (void)_finishedLoading;
- (id)_webView;
- (void)addSubresource:(id)arg1;
- (id)_imageElementWithImageResource:(id)arg1;
- (id)_documentFragmentWithImageResource:(id)arg1;
- (id)_documentFragmentWithArchive:(id)arg1;
- (void)setDataSourceDelegate:(id)arg1;
- (void)_setAllowToBeMemoryMapped;
- (void)_setOverrideTextEncodingName:(id)arg1;
- (void)_setDeferMainResourceDataLoad:(BOOL)arg1;
- (BOOL)_transferApplicationCache:(id)arg1;
- (id)_responseMIMEType;
- (void)_addSubframeArchives:(id)arg1;
- (id)_mainDocumentError;
- (id)dataSourceDelegate;
- (void)_setRepresentation:(id)arg1;
- (id)mainResource;
- (id)webArchive;
- (id)representation;
- (id)subresourceForURL:(id)arg1;
- (id)webFrame;
- (id)subresources;
- (id)data;
- (void)finalize;
- (void)dealloc;
- (id)response;
- (id)initWithRequest:(id)arg1;
- (id)request;

@end