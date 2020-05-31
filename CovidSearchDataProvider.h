//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DataProvider-Protocol.h"

@class NSString, RedditService;
@protocol AccountContext;

@interface CovidSearchDataProvider : NSObject <DataProvider>
{
    id <AccountContext> _accountContext;
    NSString *_query;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *query; // @synthesize query=_query;
@property(readonly, nonatomic) id <AccountContext> accountContext; // @synthesize accountContext=_accountContext;
- (void)invalidate;
- (void)fetchFromCurrentObjects:(id)arg1 fetchingMore:(_Bool)arg2 pageSize:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (id)processObjects:(id)arg1 currentCount:(long long)arg2;
@property(readonly, nonatomic) RedditService *service;
- (id)initWithAccountContext:(id)arg1 query:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

