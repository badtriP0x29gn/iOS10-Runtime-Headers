/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

@interface BLTLogSync : NSObject {
    NSObject<OS_xpc_object> * __connection;
    NSDate * _lastSync;
    unsigned int  _syncCount;
    NSMutableArray * _syncQueue;
}

@property (nonatomic, readonly) NSObject<OS_xpc_object> *_connection;
@property (nonatomic, readonly) NSDate *lastSync;
@property (nonatomic, readonly) NSArray *logs;
@property (nonatomic) unsigned int syncCount;
@property (nonatomic, retain) NSMutableArray *syncQueue;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_connection;
- (void)_doSync:(id)arg1;
- (void)_monitorFile:(id)arg1 block:(id)arg2;
- (void)_replyToBlock:(id)arg1 returnFileName:(id)arg2 returnSyncStatus:(id)arg3;
- (void)cancelSync:(id)arg1;
- (id)init;
- (id)lastSync;
- (id)logs;
- (void)setSyncCount:(unsigned int)arg1;
- (void)setSyncQueue:(id)arg1;
- (unsigned int)syncCount;
- (id)syncLogsOnlyIfWatchLogsEnabled:(bool)arg1 completion:(id /* block */)arg2;
- (id)syncQueue;

@end
