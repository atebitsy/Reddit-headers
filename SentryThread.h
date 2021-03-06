//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Sentry/SentrySerializable-Protocol.h>

@class NSNumber, NSString, SentryStacktrace;

@interface SentryThread : NSObject <SentrySerializable>
{
    NSNumber *_threadId;
    NSString *_name;
    SentryStacktrace *_stacktrace;
    NSNumber *_crashed;
    NSNumber *_current;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSNumber *current; // @synthesize current=_current;
@property(copy, nonatomic) NSNumber *crashed; // @synthesize crashed=_crashed;
@property(retain, nonatomic) SentryStacktrace *stacktrace; // @synthesize stacktrace=_stacktrace;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSNumber *threadId; // @synthesize threadId=_threadId;
- (id)serialize;
- (id)initWithThreadId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

