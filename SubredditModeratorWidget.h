//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RedditCore/SubredditWidget.h>

@class NSArray;

@interface SubredditModeratorWidget : SubredditWidget
{
    NSArray *_moderators;
    long long _totalModerators;
}

- (void).cxx_destruct;
@property(nonatomic) long long totalModerators; // @synthesize totalModerators=_totalModerators;
@property(copy, nonatomic) NSArray *moderators; // @synthesize moderators=_moderators;
- (id)initWithData:(id)arg1;

@end

