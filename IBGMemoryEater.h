//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface IBGMemoryEater : NSObject
{
    _Bool _paused;
    NSMutableArray *_belly;
}

@property(retain, nonatomic) NSMutableArray *belly; // @synthesize belly=_belly;
@property(nonatomic, getter=isPaused) _Bool paused; // @synthesize paused=_paused;
- (void).cxx_destruct;
- (void)eatMemory;
- (void)stopEatingMemory;
- (void)pauseEat;
- (void)startEatingMemory;

@end

