//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSRecursiveLock;

@interface IBGCache : NSObject
{
    _Bool _shouldWriteToDisk;
    _Bool _shouldForceWrite;
    _Bool _isUnPresisted;
    _Bool _isSent;
    NSMutableArray *_cachedModels;
    NSRecursiveLock *_lock;
}

@property _Bool isSent; // @synthesize isSent=_isSent;
@property _Bool isUnPresisted; // @synthesize isUnPresisted=_isUnPresisted;
@property _Bool shouldForceWrite; // @synthesize shouldForceWrite=_shouldForceWrite;
@property _Bool shouldWriteToDisk; // @synthesize shouldWriteToDisk=_shouldWriteToDisk;
@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) NSMutableArray *cachedModels; // @synthesize cachedModels=_cachedModels;
- (void).cxx_destruct;
- (id)getDataFromPath:(id)arg1;
- (id)readModelsFromPath:(id)arg1;
- (void)writeModels:(id)arg1 toPath:(id)arg2;
- (id)cacheDiskPath;
- (void)clearAll;
- (id)getAllObjects;
- (void)sendAll;
- (id)getCache;
- (id)getLastObject;
- (void)unpersistAll;
- (double)getWritingOperationTimeInterval;
- (void)forcePersistAll;
- (void)persistAll;
- (_Bool)contains:(id)arg1;
- (void)remove:(id)arg1;
- (void)append:(id)arg1;
- (id)initWithShouldForceWrite:(_Bool)arg1;
- (id)init;

@end
