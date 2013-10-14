/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPStoreDownload;

@interface MPMatchMediaDownloadObserver : MPMediaDownloadObserver <MPStoreDownloadManagerObserver> {
    MPStoreDownload *_storeDownload;
}


- (double)rawDownloadTotal;
- (double)rawDownloadProgress;
- (BOOL)isPurchasing;
- (BOOL)isCurrentlyPlayable;
- (void)_onQueue_invalidate;
- (id)initWithStoreDownload:(id)arg1;
- (BOOL)canCancel;
- (BOOL)isRestoreDownload;
- (void)downloadManager:(id)arg1 downloadDidProgress:(id)arg2;
- (void)cancelDownload;
- (double)downloadProgress;
- (void)dealloc;
- (void).cxx_destruct;

@end