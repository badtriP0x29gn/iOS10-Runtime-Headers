/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

@class HSConnectionConfiguration, HSConnectionStream, NSObject<OS_dispatch_queue>, HSFairPlayInfo, NSString, NSURL;

@interface HSConnection : NSObject  {
    HSConnectionConfiguration *_configuration;
    int _connectionState;
    HSConnectionStream *_connectionStream;
    int _connectionType;
    NSObject<OS_dispatch_queue> *_queue;
    struct __CFReadStream { } *_readStream;
    BOOL authenticationRequired;
    BOOL tokenCheckRequired;
    BOOL _tokenCheckRequred;
    unsigned int basePlaylistContainerID;
    unsigned int databaseID;
    unsigned int databaseRevision;
    HSFairPlayInfo *fairPlayInfo;
    NSString *homeSharingGroupID;
    NSString *password;
    unsigned int sessionID;
    NSString *username;
    unsigned int _interfaceID;
    unsigned int _controlKey;
    unsigned int _controlPort;
    unsigned int _promptID;
}

@property(readonly) NSURL * baseURL;
@property(readonly) int connectionType;
@property int connectionState;
@property(getter=isAuthenticationRequired) BOOL authenticationRequired;
@property(getter=isTokenCheckRequired,readonly) BOOL tokenCheckRequred;
@property(retain) HSFairPlayInfo * fairPlayInfo;
@property(copy) NSString * homeSharingGroupID;
@property(copy) NSString * username;
@property(copy) NSString * password;
@property unsigned int databaseID;
@property unsigned int databaseRevision;
@property unsigned int basePlaylistContainerID;
@property unsigned int sessionID;
@property unsigned int interfaceID;
@property unsigned int controlKey;
@property unsigned int controlPort;
@property unsigned int promptID;
@property BOOL tokenCheckRequired;


- (unsigned int)promptID;
- (unsigned int)interfaceID;
- (BOOL)isTokenCheckRequired;
- (BOOL)tokenCheckRequired;
- (BOOL)isAuthenticationRequired;
- (id)newControlConnection;
- (void)setControlKey:(unsigned int)arg1;
- (void)setControlPort:(unsigned int)arg1;
- (void)setInterfaceID:(unsigned int)arg1;
- (void)setPromptID:(unsigned int)arg1;
- (void)sendRequest:(id)arg1 withResponseHandler:(id)arg2;
- (id)homeSharingGroupID;
- (void)_setupControlConnectionWithInternalConnectionCompletionHandler:(id)arg1;
- (void)checkForDatabaseUpdatesWithCompletionHandler:(id)arg1;
- (unsigned int)basePlaylistContainerID;
- (void)setBasePlaylistContainerID:(unsigned int)arg1;
- (void)_continueFPSetupNegotiationWithData:(id)arg1 internalConnectionCompletionHandler:(id)arg2;
- (unsigned int)_sapVersionForConnectionType;
- (unsigned int)databaseRevision;
- (unsigned int)controlKey;
- (unsigned int)controlPort;
- (void)_notifyServerOfActivity;
- (id)fairPlayInfo;
- (void)_sendRequest:(id)arg1 withInternalResponseHandler:(id)arg2;
- (void)setTokenCheckRequired:(BOOL)arg1;
- (void)setAuthenticationRequired:(BOOL)arg1;
- (void)_loadDatabaseWithInternalConnectionCompletionHandler:(id)arg1;
- (void)setConnectionState:(int)arg1;
- (int)connectionState;
- (void)setFairPlayInfo:(id)arg1;
- (void)setHomeSharingGroupID:(id)arg1;
- (void)setDatabaseRevision:(unsigned int)arg1;
- (id)initWithConfiguration:(id)arg1 connectionType:(int)arg2;
- (id)initWithBaseURL:(id)arg1 connectionType:(int)arg2;
- (void)connectWithCompletionHandler:(id)arg1;
- (int)connectionType;
- (unsigned int)databaseID;
- (void)setDatabaseID:(unsigned int)arg1;
- (void)setSessionID:(unsigned int)arg1;
- (unsigned int)sessionID;
- (void)setPassword:(id)arg1;
- (void)disconnect;
- (void)setUsername:(id)arg1;
- (id)username;
- (id)initWithBaseURL:(id)arg1;
- (id)password;
- (id)baseURL;
- (void)dealloc;

@end