//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class IBGSessionProfileLogger;

@interface InstabugSessionProfiler : NSObject
{
    IBGSessionProfileLogger *_sessionProfilerLogger;
}

+ (id)sharedInstance;
@property(retain, nonatomic) IBGSessionProfileLogger *sessionProfilerLogger; // @synthesize sessionProfilerLogger=_sessionProfilerLogger;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setDeviceQueuesLatencyFetchRate:(double)arg1;
- (void)setDeviceCPUUsageFetchRate:(double)arg1;
- (void)setDeviceStateFetchRate:(double)arg1;
- (void)loadProfilerLogsSynchronously:(_Bool)arg1 date:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)setUpLogger;
- (void)stopLogger;
- (void)startLogger;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)unRegisterSessionProfilerFlagObserver;
- (void)registerSessionProfilerFlagObserver;
- (id)init;

@end
