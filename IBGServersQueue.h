//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface IBGServersQueue : NSObject
{
    NSMutableArray *_servers;
}

@property(retain, nonatomic) NSMutableArray *servers; // @synthesize servers=_servers;
- (void).cxx_destruct;
- (void)ignoreServersOfType:(id)arg1;
- (void)removeAllServers;
- (id)serverRequests;
- (id)popServer:(id)arg1;
- (id)pushServer:(id)arg1;
- (id)init;

@end

