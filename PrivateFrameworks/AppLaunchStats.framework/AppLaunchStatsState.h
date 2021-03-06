/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppLaunchStats.framework/AppLaunchStats
 */

@interface AppLaunchStatsState : NSObject <DuetLoggerProtocol, DuetSaveAndRestore, PCInterfaceMonitorDelegate> {
    long long  BGDataBudgetCap;
    long long  BGDataCarryCap;
    long long  _BGMinSlotData;
    APLSBinnedGlanceHistory * _binnedLaunches;
    float  _dataCellMultiplier;
    float  _dataWifiMultiplier;
    bool  _enableBlackListCheck;
    bool  _enableBudgetCheck;
    bool  _enableForeGroundAppCheck;
    bool  _enableLiveListCheck;
    bool  _enableOpportunisticFetchCheck;
    float  _globalFetchPWPC;
    long long  _globalMinSlotData;
    float  _globalNonactivePWPC;
    float  _globalPushPWPC;
    long long  _globalTimeThreshold;
    NSMutableArray * appForecastArray;
    unsigned long long  appForecastQuality;
    NSMutableDictionary * appsAliveInLSTDict;
    NSMutableArray * cacheAppsforFullDebug;
    bool  cellHot;
    long long  cellQuality;
    id /* block */  clientCallBack;
    NSMutableArray * dailyAppForecastSlots;
    NSMutableArray * dailyLaunchArrays;
    NSMutableArray * dataForecastArray;
    unsigned long long  dataForecastQuality;
    bool  doUniformBudget;
    long long  endofdayBGDataBudget;
    long long  endofdayDataBudget;
    long long  endofdayNDISCDataBudget;
    NSMutableArray * fireDates;
    NSDate * firstWakeupDate;
    APLSBinnedGlanceHistory * glanceLaunchLikelihood;
    long long  globalDataBudgetCap;
    long long  globalDataCarryCap;
    long long  globalPowerBudgetCap;
    bool  isBatteryChargerConnected;
    bool  isDataResourceAvailable;
    bool  isDeviceInCall;
    bool  isDeviceInGoodCellularCondition;
    bool  isDevicePhoneType;
    bool  isDeviceUnderThermalPressure;
    bool  isFetchPowerResourceAvailable;
    bool  isFetchPushPowerResourceAvailable;
    NSMutableArray * powerFetchForecastArray;
    NSMutableArray * powerPushForecastArray;
    NSMutableArray * recentLaunchArrays;
    AppLaunchStatsSaveAndRestore * saveAndRestoreContext;
    NSDate * startTimeStamp;
    NSDate * startTimeStampOOB;
    NSObject<OS_dispatch_queue> * stateQueue;
    int  thermalStatusToken;
    NSMutableArray * weeklyLaunchArrays;
    bool  wifiHot;
    long long  wifiQuality;
}

@property (nonatomic, readonly) long long BGDataBudgetCap;
@property (nonatomic, readonly) long long BGDataCarryCap;
@property (nonatomic, readonly) long long BGMinSlotData;
@property (nonatomic, retain) NSMutableArray *appForecastArray;
@property (nonatomic) unsigned long long appForecastQuality;
@property (retain) NSMutableDictionary *appsAliveInLSTDict;
@property (nonatomic, retain) APLSBinnedGlanceHistory *binnedLaunches;
@property (nonatomic, readonly) NSMutableArray *cacheAppsforFullDebug;
@property bool cellHot;
@property long long cellQuality;
@property (nonatomic, retain) NSMutableArray *dailyAppForecastSlots;
@property (nonatomic, retain) NSMutableArray *dailyLaunchArrays;
@property (nonatomic, readonly) float dataCellMultiplier;
@property (nonatomic, retain) NSMutableArray *dataForecastArray;
@property (nonatomic) unsigned long long dataForecastQuality;
@property (nonatomic, readonly) float dataWifiMultiplier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property bool doUniformBudget;
@property (nonatomic) bool enableBlackListCheck;
@property (nonatomic, readonly) bool enableBudgetCheck;
@property (nonatomic, readonly) bool enableForeGroundAppCheck;
@property (nonatomic) bool enableLiveListCheck;
@property (nonatomic, readonly) bool enableOpportunisticFetchCheck;
@property long long endofdayBGDataBudget;
@property long long endofdayDataBudget;
@property long long endofdayNDISCDataBudget;
@property (retain) NSMutableArray *fireDates;
@property (retain) NSDate *firstWakeupDate;
@property (nonatomic, readonly) long long globalDataBudgetCap;
@property (nonatomic, readonly) long long globalDataCarryCap;
@property (nonatomic, readonly) float globalFetchPWPC;
@property (nonatomic, readonly) long long globalMinSlotData;
@property (nonatomic, readonly) float globalNonactivePWPC;
@property (nonatomic, readonly) float globalPushPWPC;
@property (nonatomic, readonly) long long globalTimeThreshold;
@property (readonly) unsigned long long hash;
@property bool isBatteryChargerConnected;
@property bool isDataResourceAvailable;
@property bool isDeviceInCall;
@property bool isDeviceUnderThermalPressure;
@property bool isFetchPowerResourceAvailable;
@property bool isFetchPushPowerResourceAvailable;
@property (nonatomic, retain) NSMutableArray *powerFetchForecastArray;
@property (nonatomic, retain) NSMutableArray *powerPushForecastArray;
@property (nonatomic, retain) NSMutableArray *recentLaunchArrays;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSMutableArray *weeklyLaunchArrays;
@property bool wifiHot;
@property long long wifiQuality;

- (void).cxx_destruct;
- (long long)BGDataBudgetCap;
- (long long)BGDataCarryCap;
- (long long)BGMinSlotData;
- (void)addPredictedSlotsToDailyAppForecastQueue:(id)arg1;
- (void)addPredictedSlotsToDailyOutOfBandQueue:(id)arg1;
- (int)addToOutOfBandAppList:(long long)arg1 withCacheDict:(id)arg2 withAppList:(id)arg3;
- (void)aggregateAllLaunchTypes;
- (id)appForecastArray;
- (unsigned long long)appForecastQuality;
- (id)appsAliveInLSTDict;
- (id)binnedLaunches;
- (id)cacheAppsforFullDebug;
- (long long)calculateDailyDataBudgetFor:(const char *)arg1;
- (long long)calculateSlotMinDataBudget:(const char *)arg1;
- (bool)cellHot;
- (long long)cellQuality;
- (void)combineGlanceLaunchProbabilities:(id)arg1 withAppLaunches:(id)arg2;
- (void)convertPCdistributionToInt:(id)arg1 fetchOver:(float)arg2 array:(id)arg3 dailyInt:(int)arg4;
- (id)dailyAppForecastSlots;
- (id)dailyLaunchArrays;
- (float)dataCellMultiplier;
- (id)dataForecastArray;
- (unsigned long long)dataForecastQuality;
- (float)dataWifiMultiplier;
- (void)dealloc;
- (id)deniedReasonForPush;
- (bool)doUniformBudget;
- (bool)enableBlackListCheck;
- (bool)enableBudgetCheck;
- (bool)enableForeGroundAppCheck;
- (bool)enableLiveListCheck;
- (bool)enableOpportunisticFetchCheck;
- (long long)endofdayBGDataBudget;
- (long long)endofdayDataBudget;
- (long long)endofdayNDISCDataBudget;
- (id)fireDates;
- (id)firstWakeupDate;
- (bool)getAppsAliveInLSTList:(id)arg1;
- (bool)getInCallStatus;
- (id)getOutOfBandAppList;
- (id)glancesLaunchedBetween:(id)arg1 and:(id)arg2;
- (long long)globalDataBudgetCap;
- (long long)globalDataCarryCap;
- (float)globalFetchPWPC;
- (long long)globalMinSlotData;
- (float)globalNonactivePWPC;
- (float)globalPushPWPC;
- (long long)globalTimeThreshold;
- (bool)hasResourcesAvailable:(bool)arg1 forTriggerType:(int)arg2;
- (bool)inMemoryPressure;
- (id)init;
- (bool)isBatteryChargerConnected;
- (bool)isChargeOnWifiOrCellOn;
- (bool)isDataResourceAvailable;
- (bool)isDeviceInCall;
- (bool)isDeviceUnderThermalPressure;
- (bool)isFetchPowerResourceAvailable;
- (bool)isFetchPushPowerResourceAvailable;
- (bool)isOutOfBand;
- (void)logAll:(struct __asl_object_s { }*)arg1 withMsg:(struct __asl_object_s { }*)arg2 withLevel:(int)arg3;
- (void)logLight:(struct __asl_object_s { }*)arg1 withMsg:(struct __asl_object_s { }*)arg2 withLevel:(int)arg3;
- (id)powerFetchForecastArray;
- (id)powerPushForecastArray;
- (id)recentLaunchArrays;
- (int)reloadConfiguration;
- (void)resetAppsAliveInLSTList;
- (void)restore:(id)arg1;
- (void)save:(id)arg1;
- (void)saveContext:(id)arg1;
- (void)setAppForecastArray:(id)arg1;
- (void)setAppForecastQuality:(unsigned long long)arg1;
- (void)setAppsAliveInLSTDict:(id)arg1;
- (void)setBinnedLaunches:(id)arg1;
- (void)setCellHot:(bool)arg1;
- (void)setCellQuality:(long long)arg1;
- (void)setClientblock:(id /* block */)arg1;
- (void)setDailyAppForecastSlots:(id)arg1;
- (void)setDailyLaunchArrays:(id)arg1;
- (void)setDataForecastArray:(id)arg1;
- (void)setDataForecastQuality:(unsigned long long)arg1;
- (void)setDoUniformBudget:(bool)arg1;
- (void)setEnableBlackListCheck:(bool)arg1;
- (void)setEnableLiveListCheck:(bool)arg1;
- (void)setEndofdayBGDataBudget:(long long)arg1;
- (void)setEndofdayDataBudget:(long long)arg1;
- (void)setEndofdayNDISCDataBudget:(long long)arg1;
- (void)setFireDates:(id)arg1;
- (void)setFirstWakeupDate:(id)arg1;
- (void)setIsBatteryChargerConnected:(bool)arg1;
- (void)setIsDataResourceAvailable:(bool)arg1;
- (void)setIsDeviceInCall:(bool)arg1;
- (void)setIsDeviceUnderThermalPressure:(bool)arg1;
- (void)setIsFetchPowerResourceAvailable:(bool)arg1;
- (void)setIsFetchPushPowerResourceAvailable:(bool)arg1;
- (void)setPowerFetchForecastArray:(id)arg1;
- (void)setPowerPushForecastArray:(id)arg1;
- (void)setRecentLaunchArrays:(id)arg1;
- (void)setWeeklyLaunchArrays:(id)arg1;
- (void)setWifiHot:(bool)arg1;
- (void)setWifiQuality:(long long)arg1;
- (void)updateAppsAliveInLSTList:(id)arg1;
- (void)updateHistoricalGlanceData;
- (id)weeklyLaunchArrays;
- (bool)wifiHot;
- (long long)wifiQuality;

@end
