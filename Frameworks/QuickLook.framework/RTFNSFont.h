/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@class NSString;

@interface RTFNSFont : NSObject  {
    NSString *_fontName;
    float _fontSize;
    float _pointSize;
}

@property(retain) NSString * fontName;
@property float fontSize;
@property float pointSize;

+ (id)userFixedPitchFontOfSize:(float)arg1;
+ (id)fontWithName:(id)arg1 size:(float)arg2;
+ (id)userFontOfSize:(float)arg1;
+ (id)systemFontOfSize:(float)arg1;

- (float)fontSize;
- (unsigned int)mostCompatibleStringEncoding;
- (id)initWithName:(id)arg1 size:(float)arg2;
- (void)setPointSize:(float)arg1;
- (void)setFontName:(id)arg1;
- (id)fontName;
- (float)pointSize;
- (void)setFontSize:(float)arg1;

@end