//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class Post, UIViewController;
@protocol AccountContext;

@interface CrosspostPresenter : NSObject
{
    id <AccountContext> _accountContext;
    Post *_post;
    UIViewController *_presentingViewController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property(retain, nonatomic) Post *post; // @synthesize post=_post;
@property(readonly, nonatomic) id <AccountContext> accountContext; // @synthesize accountContext=_accountContext;
- (void)displayViewContoller:(id)arg1;
- (void)showPostViewControllerWithSubreddit:(id)arg1;
- (void)showCrosspost;
- (void)presentCrosspostSharingWithPost:(id)arg1 subreddit:(id)arg2 presentingViewController:(id)arg3;
- (void)presentCrosspostSharingWithPost:(id)arg1 presentingViewController:(id)arg2;
- (id)initWithAccountContext:(id)arg1;

@end

