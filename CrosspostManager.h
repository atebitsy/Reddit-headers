//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CrosspostCache, RedditService;

@interface CrosspostManager : NSObject
{
    RedditService *_service;
    CrosspostCache *_crosspostableSubredditsCache;
    CrosspostCache *_topkarmaSubredditsCache;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CrosspostCache *topkarmaSubredditsCache; // @synthesize topkarmaSubredditsCache=_topkarmaSubredditsCache;
@property(retain, nonatomic) CrosspostCache *crosspostableSubredditsCache; // @synthesize crosspostableSubredditsCache=_crosspostableSubredditsCache;
@property(readonly, nonatomic) __weak RedditService *service; // @synthesize service=_service;
- (void)recentCrosspostableSubredditsForPost:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)recentCrosspostableSubreddits:(CDUnknownBlockType)arg1;
- (void)crosspostableSubredditsForPost:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)isCrosspostableFromSubreddit:(id)arg1;
- (void)topkarmaSubreddits:(CDUnknownBlockType)arg1;
- (void)topkarmaSubredditsFromNetwork:(CDUnknownBlockType)arg1;
- (void)crosspostableSubreddits:(CDUnknownBlockType)arg1;
- (void)crosspostableSubredditsFromNetwork:(CDUnknownBlockType)arg1;
- (void)didSubscribeToSubreddit;
- (void)applicationDidReceivedMemoryWarning;
- (void)applicationDidEnterBackground;
- (void)initialHomeFeedDidPerformInitialFetch;
- (id)initWithService:(id)arg1;

@end

