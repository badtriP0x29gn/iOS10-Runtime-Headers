/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSMutableArray, CKDMMCSItemGroupSetContext;

@interface CKDFetchAssetsOperation : CKDDatabaseOperation  {
    bool_shouldAutomaticallyRetryNetworkErrors;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _progressBlock;

    NSMutableArray *_assetsToFetch;
    NSMutableArray *_assetsToRetry;
    CKDMMCSItemGroupSetContext *_MMCSContext;
}

@property(copy) id progressBlock;
@property bool shouldAutomaticallyRetryNetworkErrors;
@property(retain) NSMutableArray * assetsToFetch;
@property(retain) NSMutableArray * assetsToRetry;
@property(retain) CKDMMCSItemGroupSetContext * MMCSContext;

+ (bool)_isTransientError:(id)arg1;

- (void)setAssetsToFetch:(id)arg1;
- (void)setShouldAutomaticallyRetryNetworkErrors:(bool)arg1;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 assetsToFetch:(id)arg3;
- (void)_fetchAssets;
- (void)setAssetsToRetry:(id)arg1;
- (id)assetsToRetry;
- (bool)_shouldRetryError:(id)arg1;
- (id)MMCSContext;
- (void)_sendMMCSItemGetForGroupSet:(id)arg1;
- (id)assetsToFetch;
- (bool)shouldAutomaticallyRetryNetworkErrors;
- (void)_retryOrFinishWithError:(id)arg1;
- (void)setMMCSContext:(id)arg1;
- (void)_handleError:(id)arg1 forItem:(id)arg2;
- (id)progressBlock;
- (void)setProgressBlock:(id)arg1;
- (void)main;
- (void)finishWithError:(id)arg1;
- (void)cancel;
- (void).cxx_destruct;

@end