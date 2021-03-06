/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNCommonProfileProgramGenerator : NSObject {
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _programMutex;
    struct __CFDictionary { } * _shaders;
    struct __CFDictionary { } * _trackedResourcesToHashcode;
}

@property (nonatomic, readonly) int profile;

+ (id)deferredGeneratorWithProfile:(int)arg1;
+ (id)generatorWithProfile:(int)arg1;

- (void)dealloc;
- (void)emptyShaderCache;
- (id)init;
- (int)profile;
- (struct __C3DFXProgram { }*)programWithHashCode:(struct __C3DRendererElementProgramHashCode { }*)arg1 trackedResource:(id)arg2 introspectionDataPtr:(void*)arg3;
- (void)releaseProgramForResource:(id)arg1;

@end
