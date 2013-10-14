/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class UILabel;

@interface KeychainSyncHeaderView : UIView <PSHeaderFooterView> {
    UILabel *_titleLabel;
    UILabel *_detailLabel;
    BOOL _usesCompactLayout;
}

@property BOOL usesCompactLayout;


- (BOOL)usesCompactLayout;
- (void)setDetailText:(id)arg1;
- (void)setUsesCompactLayout:(BOOL)arg1;
- (float)preferredHeightForWidth:(float)arg1 inTableView:(id)arg2;
- (id)initWithSpecifier:(id)arg1;
- (void)dealloc;
- (void)setTitleText:(id)arg1;
- (void)layoutSubviews;

@end