//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSIndexSet, NSMapTable;

@interface IGListIndexSetResult : NSObject
{
    NSMapTable *_oldIndexMap;
    NSMapTable *_newIndexMap;
    NSIndexSet *_inserts;
    NSIndexSet *_deletes;
    NSIndexSet *_updates;
    NSArray *_moves;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *moves; // @synthesize moves=_moves;
@property(readonly, nonatomic) NSIndexSet *updates; // @synthesize updates=_updates;
@property(readonly, nonatomic) NSIndexSet *deletes; // @synthesize deletes=_deletes;
@property(readonly, nonatomic) NSIndexSet *inserts; // @synthesize inserts=_inserts;
- (id)description;
- (long long)newIndexForIdentifier:(id)arg1;
- (long long)oldIndexForIdentifier:(id)arg1;
- (id)resultForBatchUpdates;
@property(readonly, nonatomic) long long changeCount;
@property(readonly, nonatomic) _Bool hasChanges;
- (id)initWithInserts:(id)arg1 deletes:(id)arg2 updates:(id)arg3 moves:(id)arg4 oldIndexMap:(id)arg5 newIndexMap:(id)arg6;

@end

