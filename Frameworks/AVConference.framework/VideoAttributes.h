/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
 */

@interface VideoAttributes : NSObject <NSCopying, NSCoding> {
    struct CGSize { 
        float width; 
        float height; 
    } ratio;
    int orientation;
    int camera;
    BOOL cameraSwitching;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } contentsRect;
}

@property struct CGSize { float x1; float x2; } ratio;
@property int orientation;
@property int camera;
@property BOOL cameraSwitching;
@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } contentsRect;

+ (id)videoAttributesWithVideoAttributes:(id)arg1;

- (BOOL)isEqualToVideoAttributes:(id)arg1;
- (id)initWithCameraStatusBits:(unsigned char)arg1 aspectRatio:(struct CGSize { float x1; float x2; })arg2 contentsRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3;
- (void)setCameraSwitching:(BOOL)arg1;
- (BOOL)cameraSwitching;
- (void)setCamera:(int)arg1;
- (void)setRatio:(struct CGSize { float x1; float x2; })arg1;
- (struct CGSize { float x1; float x2; })ratio;
- (id)encodeToNewNSDictionary;
- (void)decodeFromNSDictionary:(id)arg1;
- (int)camera;
- (id)initWithEncodedDictionary:(id)arg1;
- (void)setContentsRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setOrientation:(int)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })contentsRect;
- (int)orientation;
- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end