/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class CKDServerConfiguration, NSObject<OS_dispatch_group>;

@interface CKDGlobalConfigurationOperation : CKDOperation  {
    CKDServerConfiguration *_configuration;
    NSObject<OS_dispatch_group> *_configurationFetchedGroup;
}

@property(retain) CKDServerConfiguration * configuration;
@property(retain) NSObject<OS_dispatch_group> * configurationFetchedGroup;


- (id)configurationFetchedGroup;
- (void)setConfigurationFetchedGroup:(id)arg1;
- (bool)shouldCheckAppVersion;
- (void)main;
- (id)configuration;
- (void).cxx_destruct;
- (void)setConfiguration:(id)arg1;

@end