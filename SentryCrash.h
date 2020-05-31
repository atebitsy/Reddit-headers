//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;
@protocol SentryCrashReportFilter;

@interface SentryCrash : NSObject
{
    _Bool _introspectMemory;
    _Bool _catchZombies;
    _Bool _addConsoleLogToReport;
    _Bool _printPreviousLog;
    int _deleteBehaviorAfterSendAll;
    int _monitoring;
    int _demangleLanguages;
    int _maxReportCount;
    id <SentryCrashReportFilter> _sink;
    NSDictionary *_userInfo;
    double _deadlockWatchdogInterval;
    CDUnknownFunctionPointerType _onCrash;
    NSString *_bundleName;
    NSString *_basePath;
    NSArray *_doNotIntrospectClasses;
    CDUnknownFunctionPointerType _uncaughtExceptionHandler;
    CDUnknownFunctionPointerType _currentSnapshotUserReportedExceptionHandler;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(nonatomic) CDUnknownFunctionPointerType currentSnapshotUserReportedExceptionHandler; // @synthesize currentSnapshotUserReportedExceptionHandler=_currentSnapshotUserReportedExceptionHandler;
@property(nonatomic) CDUnknownFunctionPointerType uncaughtExceptionHandler; // @synthesize uncaughtExceptionHandler=_uncaughtExceptionHandler;
@property(nonatomic) int maxReportCount; // @synthesize maxReportCount=_maxReportCount;
@property(nonatomic) _Bool printPreviousLog; // @synthesize printPreviousLog=_printPreviousLog;
@property(nonatomic) _Bool addConsoleLogToReport; // @synthesize addConsoleLogToReport=_addConsoleLogToReport;
@property(nonatomic) int demangleLanguages; // @synthesize demangleLanguages=_demangleLanguages;
@property(retain, nonatomic) NSArray *doNotIntrospectClasses; // @synthesize doNotIntrospectClasses=_doNotIntrospectClasses;
@property(nonatomic) _Bool catchZombies; // @synthesize catchZombies=_catchZombies;
@property(nonatomic) _Bool introspectMemory; // @synthesize introspectMemory=_introspectMemory;
@property(retain, nonatomic) NSString *basePath; // @synthesize basePath=_basePath;
@property(retain, nonatomic) NSString *bundleName; // @synthesize bundleName=_bundleName;
@property(nonatomic) CDUnknownFunctionPointerType onCrash; // @synthesize onCrash=_onCrash;
@property(nonatomic) double deadlockWatchdogInterval; // @synthesize deadlockWatchdogInterval=_deadlockWatchdogInterval;
@property(nonatomic) int monitoring; // @synthesize monitoring=_monitoring;
@property(nonatomic) int deleteBehaviorAfterSendAll; // @synthesize deleteBehaviorAfterSendAll=_deleteBehaviorAfterSendAll;
@property(retain, nonatomic) id <SentryCrashReportFilter> sink; // @synthesize sink=_sink;
- (void)applicationWillTerminate;
- (void)applicationWillEnterForeground;
- (void)applicationDidEnterBackground;
- (void)applicationWillResignActive;
- (void)applicationDidBecomeActive;
- (id)nullTerminated:(id)arg1;
- (id)allReports;
- (id)reportWithIntID:(long long)arg1;
- (id)reportWithID:(id)arg1;
- (id)reportIDs;
- (void)doctorReport:(id)arg1;
- (id)loadCrashReportJSONWithID:(long long)arg1;
- (void)sendReports:(id)arg1 onCompletion:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) int reportCount;
@property(readonly, nonatomic) _Bool crashedLastLaunch;
@property(readonly, nonatomic) int sessionsSinceLaunch;
@property(readonly, nonatomic) double backgroundDurationSinceLaunch;
@property(readonly, nonatomic) double activeDurationSinceLaunch;
@property(readonly, nonatomic) int sessionsSinceLastCrash;
@property(readonly, nonatomic) int launchesSinceLastCrash;
@property(readonly, nonatomic) double backgroundDurationSinceLastCrash;
@property(readonly, nonatomic) double activeDurationSinceLastCrash;
- (void)reportUserException:(id)arg1 reason:(id)arg2 language:(id)arg3 lineOfCode:(id)arg4 stackTrace:(id)arg5 logAllThreads:(_Bool)arg6 terminateProgram:(_Bool)arg7;
- (void)deleteReportWithID:(id)arg1;
- (void)deleteAllReports;
- (void)sendAllReportsWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)install;
@property(readonly, nonatomic) NSDictionary *systemInfo;
@property(retain) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
- (id)initWithBasePath:(id)arg1;
- (id)init;

@end

