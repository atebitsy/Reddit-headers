//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <Instabug/IBGSessionProfilerProtocol-Protocol.h>

@class IBGCountLimitedArray, NSRecursiveLock, NSString;
@protocol OS_dispatch_queue;

@interface IBGDeviceStateLogger : NSObject <IBGSessionProfilerProtocol>
{
    _Bool _shouldPauseLogger;
    _Bool _isRunning;
    double _deviceStateFetchRate;
    double _memoryAndStorageFetchRate;
    NSObject<OS_dispatch_queue> *_memoryAndStorageQueue;
    NSObject<OS_dispatch_queue> *_deviceStateQueue;
    NSRecursiveLock *_lock;
    IBGCountLimitedArray *_memoryReadings;
    IBGCountLimitedArray *_storageReadings;
    IBGCountLimitedArray *_batteryReadings;
    IBGCountLimitedArray *_connectionReadings;
    IBGCountLimitedArray *_oreintationReadings;
    IBGCountLimitedArray *_systemEventsReadings;
}

@property(retain) IBGCountLimitedArray *systemEventsReadings; // @synthesize systemEventsReadings=_systemEventsReadings;
@property(retain) IBGCountLimitedArray *oreintationReadings; // @synthesize oreintationReadings=_oreintationReadings;
@property(retain) IBGCountLimitedArray *connectionReadings; // @synthesize connectionReadings=_connectionReadings;
@property(retain) IBGCountLimitedArray *batteryReadings; // @synthesize batteryReadings=_batteryReadings;
@property(retain) IBGCountLimitedArray *storageReadings; // @synthesize storageReadings=_storageReadings;
@property(retain) IBGCountLimitedArray *memoryReadings; // @synthesize memoryReadings=_memoryReadings;
@property(retain) NSRecursiveLock *lock; // @synthesize lock=_lock;
@property _Bool isRunning; // @synthesize isRunning=_isRunning;
@property _Bool shouldPauseLogger; // @synthesize shouldPauseLogger=_shouldPauseLogger;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *deviceStateQueue; // @synthesize deviceStateQueue=_deviceStateQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *memoryAndStorageQueue; // @synthesize memoryAndStorageQueue=_memoryAndStorageQueue;
@property(nonatomic) double memoryAndStorageFetchRate; // @synthesize memoryAndStorageFetchRate=_memoryAndStorageFetchRate;
@property(nonatomic) double deviceStateFetchRate; // @synthesize deviceStateFetchRate=_deviceStateFetchRate;
- (void).cxx_destruct;
- (void)setFetchRate:(double)arg1;
- (id)getStorage;
- (id)getMemory;
- (_Bool)isBatteryPlugged;
- (long long)getBatteryLevel;
- (id)getCarrierConnectionType;
- (id)getCarrierName;
- (id)getWifiSSID;
- (id)getScreenOrientation;
- (id)fetchStorageLogsWithDate:(id)arg1;
- (id)fetchConnectionLogsWithDate:(id)arg1;
- (id)fetchOrientationLogsWithDate:(id)arg1;
- (id)fetchMemoryLogsWithDate:(id)arg1;
- (id)fetchBatteryLogsWithDate:(id)arg1;
- (id)fetchLogsWithDate:(id)arg1;
- (void)saveDeviceOreintation;
- (void)saveDeviceConnection;
- (void)saveDeviceBattery;
- (void)saveDeviceStorage;
- (void)saveDeviceMemory;
- (void)receiveMemoryWarning;
- (void)fetchMemoryAndStorage;
- (void)fetchDeviceState;
- (void)stopLoggers;
- (void)startLogger;
- (void)intializeArraysWithMaxCount;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
