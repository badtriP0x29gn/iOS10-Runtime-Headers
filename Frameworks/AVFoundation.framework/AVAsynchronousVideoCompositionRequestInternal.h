/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSArray, AVVideoCompositionRenderContext, <AVVideoCompositionInstruction>, NSDictionary, AVWeakReference;

@interface AVAsynchronousVideoCompositionRequestInternal : NSObject  {
    AVWeakReference *_session;
    AVVideoCompositionRenderContext *_renderContext;
    struct OpaqueFigVideoCompositorFrame { } *_compositionFrame;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } _compositionTime;
    NSDictionary *_sourcesByTrackID;
    NSArray *_sourceTrackIDsInClientOrder;
    <AVVideoCompositionInstruction> *_instruction;
    BOOL _isFinished;
}

@property(retain) AVWeakReference * session;
@property(retain) AVVideoCompositionRenderContext * renderContext;
@property struct OpaqueFigVideoCompositorFrame { }* compositionFrame;
@property struct { long long x1; int x2; unsigned int x3; long long x4; } compositionTime;
@property(retain) NSDictionary * sourcesByTrackID;
@property(retain) NSArray * sourceTrackIDsInClientOrder;
@property(retain) <AVVideoCompositionInstruction> * instruction;
@property BOOL isFinished;


- (void)setSourceTrackIDsInClientOrder:(id)arg1;
- (id)sourceTrackIDsInClientOrder;
- (void)setIsFinished:(BOOL)arg1;
- (void)setInstruction:(id)arg1;
- (id)instruction;
- (void)setSourcesByTrackID:(id)arg1;
- (id)sourcesByTrackID;
- (void)setCompositionTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })compositionTime;
- (void)setCompositionFrame:(struct OpaqueFigVideoCompositorFrame { }*)arg1;
- (void)setRenderContext:(id)arg1;
- (struct OpaqueFigVideoCompositorFrame { }*)compositionFrame;
- (id)renderContext;
- (void)dealloc;
- (void)setSession:(id)arg1;
- (id)session;
- (BOOL)isFinished;

@end