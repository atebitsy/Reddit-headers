//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableOrderedSet, NSString;
@protocol OS_dispatch_queue;

@interface PostHistoryManager : NSObject
{
    NSString *_cachePath;
    NSMutableOrderedSet *_postIDSet;
    NSMutableDictionary *_info;
    NSObject<OS_dispatch_queue> *_backgroundQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *backgroundQueue; // @synthesize backgroundQueue=_backgroundQueue;
@property(retain, nonatomic) NSMutableDictionary *info; // @synthesize info=_info;
@property(retain, nonatomic) NSMutableOrderedSet *postIDSet; // @synthesize postIDSet=_postIDSet;
@property(copy, nonatomic) NSString *cachePath; // @synthesize cachePath=_cachePath;
- (void).cxx_destruct;
- (id)currentHistoryPostsPKs;
@property(readonly, nonatomic) NSString *recentHistoryFetchUrlString;
- (void)clearAllPostHistory;
- (_Bool)containsPostWithPK:(id)arg1;
- (void)archive;
- (void)cutTrailings;
- (void)addPostToHistory:(id)arg1 isGlanced:(_Bool)arg2;
- (void)addPostToHistory:(id)arg1;
- (void)markPostVisitedAndAddToHistory:(id)arg1;
- (void)updatePostVisitedStatus:(id)arg1;
- (void)fixBugIn310WhereDirectoryBlocksPersistingObject;
- (void)fetchPersistedPostIds;
- (void)didLoadPost:(id)arg1;
- (void)dealloc;
- (id)initWithService:(id)arg1;

@end
