/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

@interface PTSSection : NSObject <_UISettingsGroupObserver, _UISettingsKeyPathObserver> {
    NSMutableArray * _allConcreteRows;
    NSArray * _appearanceConditions;
    NSMutableDictionary * _concreteRowsByTemplateIndex;
    NSMutableArray * _enabledConcreteRows;
    NSMutableDictionary * _groupsByTemplateIndex;
    NSHashTable * _observers;
    NSArray * _rows;
    _UISettings * _settings;
    NSString * _submoduleKeyPath;
    NSString * _title;
}

@property (nonatomic, retain) NSArray *appearanceConditions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) _UISettings *settings;
@property (nonatomic, retain) NSString *submoduleKeyPath;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *title;

- (void).cxx_destruct;
- (void)_assertNoGroupTemplateProperties:(id)arg1;
- (void)_fixRows:(id)arg1 fromIndex:(unsigned int)arg2 withTemplate:(id)arg3;
- (void)_reloadEnabledRows;
- (void)_sendInserts:(id)arg1 deletes:(id)arg2;
- (void)_sendReload;
- (BOOL)_shouldEnableRow:(id)arg1;
- (void)_updateEnabledRows;
- (void)addObserver:(id)arg1;
- (id)appearanceConditions;
- (void)dealloc;
- (unsigned int)destinationForRowAtIndex:(unsigned int)arg1 withProposedDestination:(unsigned int)arg2;
- (void)enumerateAllRowsUsingBlock:(id /* block */)arg1;
- (void)enumerateEnabledRowsUsingBlock:(id /* block */)arg1;
- (BOOL)hasEnabledEditableRows;
- (unsigned int)indexOfRow:(id)arg1;
- (id)initWithRows:(id)arg1;
- (void)moveRowAtIndex:(unsigned int)arg1 toIndex:(unsigned int)arg2;
- (unsigned int)numberOfRows;
- (void)removeObserver:(id)arg1;
- (id)rowAtIndex:(unsigned int)arg1;
- (void)setAppearanceConditions:(id)arg1;
- (void)setSettings:(id)arg1;
- (void)setSubmoduleKeyPath:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)settings;
- (void)settings:(id)arg1 changedValueForKeyPath:(id)arg2;
- (void)settingsGroup:(id)arg1 didInsertSettings:(id)arg2 atIndex:(unsigned int)arg3;
- (void)settingsGroup:(id)arg1 didMoveSettings:(id)arg2 fromIndex:(unsigned int)arg3 toIndex:(unsigned int)arg4;
- (void)settingsGroup:(id)arg1 didRemoveSettings:(id)arg2 atIndex:(unsigned int)arg3;
- (id)submoduleKeyPath;
- (id)title;

@end