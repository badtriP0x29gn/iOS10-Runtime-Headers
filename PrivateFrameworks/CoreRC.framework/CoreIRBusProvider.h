/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
 */

@interface CoreIRBusProvider : CoreIRBus <IRInterfaceDelegate> {
    IRInterface * _interface;
    CoreIRDeviceProvider * _localDevice;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly, retain) IRInterface *interface;
@property (readonly) Class superclass;

+ (BOOL)supportsSecureCoding;

- (id)_addDeviceWithType:(unsigned int)arg1 matching:(id)arg2 transportProperties:(id)arg3 error:(id*)arg4;
- (id)addDeviceWithType:(unsigned int)arg1 matching:(id)arg2 error:(id*)arg3;
- (id)addDeviceWithType:(unsigned int)arg1 matching:(id)arg2 learningSession:(id)arg3 error:(id*)arg4;
- (BOOL)addMappingsFromRemote:(id)arg1 toLearningSession:(id)arg2;
- (Class)classForCoder;
- (id)copyDevicePrefs:(id*)arg1;
- (void)dealloc;
- (BOOL)deleteDevicePrefsWithUUID:(id)arg1 UUIDKey:(id)arg2;
- (void)didAddDevice:(id)arg1;
- (void)didAddToManager:(id)arg1;
- (void)didRemoveDevice:(id)arg1;
- (id)getExistingDeviceWithType:(unsigned int)arg1 matching:(id)arg2;
- (id)initWithInterface:(id)arg1;
- (id)interface;
- (void)interface:(id)arg1 receivedCommand:(id)arg2;
- (void)interface:(id)arg1 receivedHIDEvent:(id)arg2;
- (id)localDevice;
- (void)migrateOldRemotes;
- (id)propertyForKey:(id)arg1 error:(id*)arg2;
- (BOOL)recreateDevices;
- (BOOL)saveDevicePrefsWithDict:(id)arg1 error:(id*)arg2;
- (void)scheduleWithDispatchQueue:(id)arg1;
- (void)setManager:(id)arg1;
- (BOOL)setPrefsPropertyForUUID:(id)arg1 UUIDKey:(id)arg2 object:(id)arg3 key:(id)arg4;
- (BOOL)setProperty:(id)arg1 forKey:(id)arg2 error:(id*)arg3;
- (void)unscheduleFromDispatchQueue:(id)arg1;
- (void)updateAllowHibernation;
- (BOOL)updatePersistentValue:(id)arg1 forProperty:(id)arg2 ofDevice:(id)arg3;
- (void)willRemoveDevice:(id)arg1;

@end