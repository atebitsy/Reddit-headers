//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class Subreddit;

@interface DownToChatBanner : NSObject
{
    Subreddit *_subreddit;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) Subreddit *subreddit; // @synthesize subreddit=_subreddit;
@property(readonly, nonatomic) long long numberOfOnlineUsers;
- (id)detailString;
- (id)titleString;
- (id)initWithSubreddit:(id)arg1;

@end

