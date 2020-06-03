//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class Post, SubredditPowerupsInfo, _TtC11RedditVideo21RedditVideoPlayerView, _TtC6Reddit22CallToActionIdentifier;

@protocol FeedPostRedditVideoViewDelegate <NSObject>
- (void)didTapTimeIndicatorFromRedditVideoPlayerView:(_TtC11RedditVideo21RedditVideoPlayerView *)arg1 post:(Post *)arg2;
- (void)didTapCallToActionFromRedditVideoPlayerView:(_TtC11RedditVideo21RedditVideoPlayerView *)arg1 post:(Post *)arg2 callToAction:(_TtC6Reddit22CallToActionIdentifier *)arg3;
- (void)didTapFullscreenViewFromRedditVideoPlayerView:(_TtC11RedditVideo21RedditVideoPlayerView *)arg1 post:(Post *)arg2;
- (void)didTapViewFromRedditVideoPlayerView:(_TtC11RedditVideo21RedditVideoPlayerView *)arg1 post:(Post *)arg2 videoIsLive:(_Bool)arg3;

@optional
- (void)didTapPowerupsMarketingBadgeFor:(Post *)arg1 powerupsInfo:(SubredditPowerupsInfo *)arg2 preselectedBenefit:(long long)arg3;
@end

