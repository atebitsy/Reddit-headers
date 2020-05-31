//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CaptureManager.h"

@class CaptureButtonListItem, InterestCaptureScreen, RedditService, SubredditsCaptureScreen;

@interface InterestCaptureManager : CaptureManager
{
    InterestCaptureScreen *_interestCaptureScreen;
    SubredditsCaptureScreen *_subredditSuggestionScreen;
    CaptureButtonListItem *_popularNearMeLabel;
    long long _flow;
    RedditService *_service;
}

- (void).cxx_destruct;
@property(retain, nonatomic) RedditService *service; // @synthesize service=_service;
@property(nonatomic) long long flow; // @synthesize flow=_flow;
@property(retain, nonatomic) CaptureButtonListItem *popularNearMeLabel; // @synthesize popularNearMeLabel=_popularNearMeLabel;
@property(retain, nonatomic) SubredditsCaptureScreen *subredditSuggestionScreen; // @synthesize subredditSuggestionScreen=_subredditSuggestionScreen;
@property(retain, nonatomic) InterestCaptureScreen *interestCaptureScreen; // @synthesize interestCaptureScreen=_interestCaptureScreen;
- (void)showSubscribedToastForNumber:(unsigned long long)arg1;
- (void)subscribeToSelectedSubredditsWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchSubredditsForCategory:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)fetchSubredditsForCategoriesWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchSubredditCategoriesWithCompletion:(CDUnknownBlockType)arg1;
- (void)saveSelectedCategories;
- (void)willMoveToScreen:(id)arg1 withCompletion:(CDUnknownBlockType)arg2 progressHandler:(CDUnknownBlockType)arg3;
- (void)didFinishScreen:(id)arg1 withCompletion:(CDUnknownBlockType)arg2 progressHandler:(CDUnknownBlockType)arg3;
- (void)screenDidAppear:(id)arg1;
- (id)initWithRedditService:(id)arg1 analyticsSource:(id)arg2 interestSelectionFlow:(long long)arg3 shouldShowLoginButton:(_Bool)arg4;

@end

