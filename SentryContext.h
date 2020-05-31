//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Sentry/SentrySerializable-Protocol.h>

@class NSDictionary, NSString;

@interface SentryContext : NSObject <SentrySerializable>
{
    NSDictionary *_osContext;
    NSDictionary *_deviceContext;
    NSDictionary *_appContext;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *appContext; // @synthesize appContext=_appContext;
@property(retain, nonatomic) NSDictionary *deviceContext; // @synthesize deviceContext=_deviceContext;
@property(retain, nonatomic) NSDictionary *osContext; // @synthesize osContext=_osContext;
- (id)systemInfo;
- (id)generatedAppContext;
- (id)generatedDeviceContext;
- (id)generatedOsContext;
- (void)fixSystemName;
- (id)serialize;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

