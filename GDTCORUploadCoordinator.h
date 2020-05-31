//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GDTCORLifecycleProtocol-Protocol.h"
#import "GDTCORUploadPackageProtocol-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class GDTCORRegistrar, GDTCORStorage, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface GDTCORUploadCoordinator : NSObject <NSSecureCoding, GDTCORLifecycleProtocol, GDTCORUploadPackageProtocol>
{
    NSObject<OS_dispatch_queue> *_coordinationQueue;
    NSObject<OS_dispatch_source> *_timer;
    unsigned long long _timerInterval;
    unsigned long long _timerLeeway;
    NSMutableDictionary *_targetToInFlightPackages;
    GDTCORStorage *_storage;
    GDTCORRegistrar *_registrar;
}

+ (_Bool)supportsSecureCoding;
+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) GDTCORRegistrar *registrar; // @synthesize registrar=_registrar;
@property(retain, nonatomic) GDTCORStorage *storage; // @synthesize storage=_storage;
@property(readonly, nonatomic) NSMutableDictionary *targetToInFlightPackages; // @synthesize targetToInFlightPackages=_targetToInFlightPackages;
@property(readonly, nonatomic) unsigned long long timerLeeway; // @synthesize timerLeeway=_timerLeeway;
@property(readonly, nonatomic) unsigned long long timerInterval; // @synthesize timerInterval=_timerInterval;
@property(readonly, nonatomic) NSObject<OS_dispatch_source> *timer; // @synthesize timer=_timer;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *coordinationQueue; // @synthesize coordinationQueue=_coordinationQueue;
- (void)packageExpired:(id)arg1;
- (void)packageDelivered:(id)arg1 successful:(_Bool)arg2;
- (void)appWillTerminate:(id)arg1;
- (void)appWillBackground:(id)arg1;
- (void)appWillForeground:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)uploadConditions;
- (void)uploadTargets:(id)arg1 conditions:(long long)arg2;
- (void)stopTimer;
- (void)startTimer;
- (void)forceUploadForTarget:(long long)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

