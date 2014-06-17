/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKReloadFrameErrorRecoveryAttempter : NSObject <_WKErrorRecoveryAttempting> {
    struct WeakObjCPtr<WKWebView> { 
        id m_weakReference; 
    } _webView;
    struct RetainPtr<_WKFrameHandle> { 
        void *m_ptr; 
    } _frameHandle;
    struct String { 
        struct RefPtr<WTF::StringImpl> { 
            struct StringImpl {} *m_ptr; 
        } m_impl; 
    } _urlString;
}


- (id)initWithWebView:(id)arg1 frameHandle:(id)arg2 urlString:(const struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_1_1; } x1; }*)arg3;
- (bool)attemptRecovery;
- (void).cxx_destruct;
- (id).cxx_construct;

@end