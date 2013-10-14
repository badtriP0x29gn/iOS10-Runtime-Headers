/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
 */

@class NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface VCTransport : NSObject  {
    struct tagHANDLE { int x1; } *tpHandle;
    NSMutableDictionary *iceBlocks;
    NSObject<OS_dispatch_queue> *delegateQueue;
}

+ (id)sharedInstance;

- (void)iceConnectedForCallID:(unsigned long)arg1 result:(struct tagCONNRESULT { unsigned int x1; int x2; int x3; unsigned int x4; int x5; int x6; unsigned short x7; unsigned short x8; struct tagIPPORT { int x_9_1_1; BOOL x_9_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_9_1_3; unsigned short x_9_1_4; } x9; struct tagIPPORT { int x_10_1_1; BOOL x_10_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_10_1_3; unsigned short x_10_1_4; } x10; struct tagIPPORT { int x_11_1_1; BOOL x_11_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_11_1_3; unsigned short x_11_1_4; } x11; struct tagIPPORT { int x_12_1_1; BOOL x_12_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_12_1_3; unsigned short x_12_1_4; } x12; struct tagIPPORT { int x_13_1_1; BOOL x_13_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_13_1_3; unsigned short x_13_1_4; } x13; struct tagIPPORT { int x_14_1_1; BOOL x_14_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_14_1_3; unsigned short x_14_1_4; } x14; unsigned int x15; int x16; int x17; int x18; int x19; unsigned int x20; unsigned short x21; int x22; struct tagCONNRESULT {} *x23; }*)arg2 didReceivePacket:(int)arg3 useRelay:(int)arg4 secretKey:(struct __CFData { }*)arg5 skeResult:(int)arg6;
- (void)setARPLHandler:(id)arg1;
- (long)startConnectionCheckForCallID:(unsigned long)arg1 remoteConnectionDataBlob:(id)arg2 relayDictionary:(id)arg3 iceTimeout:(double)arg4 securityIdentity:(struct __SecIdentity { }*)arg5 skeState:(struct SKEStateOpaque { }*)arg6 usedRelay:(int*)arg7;
- (long)setForceIPv6ForCallID:(unsigned long)arg1;
- (long)setForceRelayForCallID:(unsigned long)arg1;
- (long)updateICERoleForCallID:(unsigned long)arg1 role:(int)arg2 remoteCallID:(unsigned long)arg3 sessionID:(struct __CFString { }*)arg4;
- (long)updateQoS:(BOOL)arg1;
- (long)processConnectionResultChange:(struct tagCONNRESULT { unsigned int x1; int x2; int x3; unsigned int x4; int x5; int x6; unsigned short x7; unsigned short x8; struct tagIPPORT { int x_9_1_1; BOOL x_9_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_9_1_3; unsigned short x_9_1_4; } x9; struct tagIPPORT { int x_10_1_1; BOOL x_10_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_10_1_3; unsigned short x_10_1_4; } x10; struct tagIPPORT { int x_11_1_1; BOOL x_11_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_11_1_3; unsigned short x_11_1_4; } x11; struct tagIPPORT { int x_12_1_1; BOOL x_12_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_12_1_3; unsigned short x_12_1_4; } x12; struct tagIPPORT { int x_13_1_1; BOOL x_13_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_13_1_3; unsigned short x_13_1_4; } x13; struct tagIPPORT { int x_14_1_1; BOOL x_14_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_14_1_3; unsigned short x_14_1_4; } x14; unsigned int x15; int x16; int x17; int x18; int x19; unsigned int x20; unsigned short x21; int x22; struct tagCONNRESULT {} *x23; }*)arg1 newResult:(struct tagCONNRESULT { unsigned int x1; int x2; int x3; unsigned int x4; int x5; int x6; unsigned short x7; unsigned short x8; struct tagIPPORT { int x_9_1_1; BOOL x_9_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_9_1_3; unsigned short x_9_1_4; } x9; struct tagIPPORT { int x_10_1_1; BOOL x_10_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_10_1_3; unsigned short x_10_1_4; } x10; struct tagIPPORT { int x_11_1_1; BOOL x_11_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_11_1_3; unsigned short x_11_1_4; } x11; struct tagIPPORT { int x_12_1_1; BOOL x_12_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_12_1_3; unsigned short x_12_1_4; } x12; struct tagIPPORT { int x_13_1_1; BOOL x_13_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_13_1_3; unsigned short x_13_1_4; } x13; struct tagIPPORT { int x_14_1_1; BOOL x_14_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_14_1_3; unsigned short x_14_1_4; } x14; unsigned int x15; int x16; int x17; int x18; int x19; unsigned int x20; unsigned short x21; int x22; struct tagCONNRESULT {} *x23; }*)arg2;
- (long)setICETimeout:(double)arg1;
- (long)setupDTLSSecurity:(unsigned long)arg1 connectionResult:(struct tagCONNRESULT { unsigned int x1; int x2; int x3; unsigned int x4; int x5; int x6; unsigned short x7; unsigned short x8; struct tagIPPORT { int x_9_1_1; BOOL x_9_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_9_1_3; unsigned short x_9_1_4; } x9; struct tagIPPORT { int x_10_1_1; BOOL x_10_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_10_1_3; unsigned short x_10_1_4; } x10; struct tagIPPORT { int x_11_1_1; BOOL x_11_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_11_1_3; unsigned short x_11_1_4; } x11; struct tagIPPORT { int x_12_1_1; BOOL x_12_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_12_1_3; unsigned short x_12_1_4; } x12; struct tagIPPORT { int x_13_1_1; BOOL x_13_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_13_1_3; unsigned short x_13_1_4; } x13; struct tagIPPORT { int x_14_1_1; BOOL x_14_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_14_1_3; unsigned short x_14_1_4; } x14; unsigned int x15; int x16; int x17; int x18; int x19; unsigned int x20; unsigned short x21; int x22; struct tagCONNRESULT {} *x23; }*)arg2 completionHandler:(id)arg3;
- (long)getLoopbackIP:(struct tagIPPORT { int x1; BOOL x2[16]; union { unsigned int x_3_1_1; unsigned char x_3_1_2[16]; } x3; unsigned short x4; }*)arg1;
- (long)getConnectionDataForCallID:(unsigned long)arg1 version:(unsigned char)arg2 useCompressedData:(BOOL)arg3 pConnectionData:(void**)arg4 connectDataSizeInBytes:(int*)arg5 relayDictionary:(struct __CFDictionary { }*)arg6 interfaceUpdate:(BOOL)arg7 nonCellularCandidateTimeout:(double)arg8;
- (long)updateInterfaceList:(BOOL)arg1 isUpdateNeeded:(int*)arg2;
- (long)sendUDPPacketReliableEncrypted:(id)arg1 localIPPort:(struct tagIPPORT { int x1; BOOL x2[16]; union { unsigned int x_3_1_1; unsigned char x_3_1_2[16]; } x3; unsigned short x4; }*)arg2 destinationIPPort:(struct tagIPPORT { int x1; BOOL x2[16]; union { unsigned int x_3_1_1; unsigned char x_3_1_2[16]; } x3; unsigned short x4; }*)arg3 oftType:(int)arg4;
- (long)processRemoteInterfaceChange:(unsigned long)arg1 remoteData:(void*)arg2 remoteLen:(int)arg3;
- (long)setSKEState:(struct SKEStateOpaque { }*)arg1 forCallID:(unsigned long)arg2;
- (void)registerICEBlockForCallID:(unsigned long)arg1 block:(id)arg2;
- (BOOL)ipPortStillExists:(struct tagIPPORT { int x1; BOOL x2[16]; union { unsigned int x_3_1_1; unsigned char x_3_1_2[16]; } x3; unsigned short x4; }*)arg1 requiresWifi:(BOOL)arg2;
- (long)discardRelayBindingForCallID:(unsigned long)arg1;
- (long)stopConnectivityCheckForCallID:(unsigned long)arg1;
- (int)detailedErrorCodeForConnectionWithCallID:(unsigned long)arg1;
- (id)init;
- (void)dealloc;
- (void)cleanup;

@end