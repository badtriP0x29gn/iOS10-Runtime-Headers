/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

@class NSNumber, UIView<RemoteUITableFooter>, NSArray, RUITableViewRow, NSMutableArray, UIView<RemoteUITableHeader>;

@interface RUITableViewSection : RUIElement  {
    NSMutableArray *_rows;
    UIView<RemoteUITableHeader> *_header;
    UIView<RemoteUITableFooter> *_footer;
    id _delegate;
    int _disclosureLimit;
    RUITableViewRow *_showAllRow;
    NSNumber *_drawsTopSeparator;
    BOOL _configured;
    UIView<RemoteUITableFooter> *_footerView;
    float _headerHeight;
    float _footerHeight;
}

@property(readonly) NSArray * rows;
@property(retain) UIView<RemoteUITableHeader> * headerView;
@property(retain) UIView<RemoteUITableFooter> * footerView;
@property float headerHeight;
@property float footerHeight;
@property BOOL drawTopSeparator;
@property BOOL configured;


- (BOOL)hasCustomFooter;
- (BOOL)hasCustomHeader;
- (void)didTapShowAllRowWithTable:(id)arg1;
- (void)removeRowAtIndex:(unsigned int)arg1;
- (BOOL)hasValueForDrawsTopSeparator;
- (BOOL)drawTopSeparator;
- (Class)_customFooterClass;
- (Class)_customHeaderClass;
- (void)setConfigured:(BOOL)arg1;
- (BOOL)configured;
- (void)addRow:(id)arg1;
- (void)remoteUILinkFooterActivatedLink:(id)arg1;
- (void)populatePostbackDictionary:(id)arg1;
- (void)setImageAlignment:(int)arg1;
- (void)setImageSize:(struct CGSize { float x1; float x2; })arg1;
- (void)insertRow:(id)arg1 atIndex:(unsigned int)arg2;
- (void)setDrawTopSeparator:(BOOL)arg1;
- (id)sourceURL;
- (void)setImage:(id)arg1;
- (id)init;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (void)setAttributes:(id)arg1;
- (void)setFooterView:(id)arg1;
- (id)footerView;
- (void)setFooterHeight:(float)arg1;
- (void)setHeaderHeight:(float)arg1;
- (float)footerHeight;
- (float)headerHeight;
- (id)rows;
- (void)setHeaderView:(id)arg1;
- (id)headerView;

@end