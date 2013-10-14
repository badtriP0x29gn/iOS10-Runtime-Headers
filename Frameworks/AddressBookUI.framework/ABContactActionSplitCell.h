/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class UIButton, UIView;

@interface ABContactActionSplitCell : ABContactCell  {
    BOOL _displayConstraintsActive;
    UIButton *_leftLabel;
    UIButton *_rightLabel;
    UIView *_spacer;
}

@property(readonly) UIButton * leftLabel;
@property(readonly) UIButton * rightLabel;
@property(readonly) UIView * spacer;
@property BOOL displayConstraintsActive;


- (id)spacer;
- (BOOL)displayConstraintsActive;
- (void)setRightContentMargin:(float)arg1;
- (void)setDisplayConstraintsActive:(BOOL)arg1;
- (void)setLeftContentMargin:(float)arg1;
- (id)rightLabel;
- (void)_setupButton:(id)arg1 forAction:(id)arg2;
- (id)leftLabel;
- (void)setCardGroupItem:(id)arg1;
- (void)dealloc;
- (void)updateConstraints;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end