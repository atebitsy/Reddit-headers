//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableOrderedSet;

@interface ListingChangeBuffer : NSObject
{
    NSMutableOrderedSet *_updates;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableOrderedSet *updates; // @synthesize updates=_updates;
@property(readonly, nonatomic) NSArray *flushUpdates;
- (void)removeObject:(id)arg1;
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)init;

@end

