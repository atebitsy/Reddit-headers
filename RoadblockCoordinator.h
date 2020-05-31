//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ImagePopupViewControllerDelegate-Protocol.h"

@class BaseViewController, NSURL, RedditService;
@protocol AccountContext, NSObject, RoadblockCoordinatorDelegate;

@interface RoadblockCoordinator : NSObject <ImagePopupViewControllerDelegate>
{
    _Bool _isStarted;
    id <RoadblockCoordinatorDelegate> _delegate;
    id <AccountContext> _accountContext;
    BaseViewController *_presentingViewController;
    id <NSObject> _nsfwPreferenceObserver;
    NSURL *_originURL;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isStarted; // @synthesize isStarted=_isStarted;
@property(retain, nonatomic) NSURL *originURL; // @synthesize originURL=_originURL;
@property(nonatomic) __weak id <NSObject> nsfwPreferenceObserver; // @synthesize nsfwPreferenceObserver=_nsfwPreferenceObserver;
@property(readonly, nonatomic) __weak BaseViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property(readonly, nonatomic) id <AccountContext> accountContext; // @synthesize accountContext=_accountContext;
@property(nonatomic) __weak id <RoadblockCoordinatorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)handleConfirmedNSFWRoadblockableModel:(id)arg1;
- (void)fetchQuarantinedSubredditByName:(id)arg1;
- (void)didConfirmRoadblockableModel:(id)arg1 roadblockType:(long long)arg2 popupController:(id)arg3;
- (void)imagePopupViewControllerDidConfirm:(id)arg1;
- (void)completelyLeaveFromPresentingViewController;
- (void)imagePopupViewControllerDidCancel:(id)arg1;
- (void)imagePopupViewControllerDidClose:(id)arg1;
- (void)imagePopupViewController:(id)arg1 didSelectLinkWithURL:(id)arg2;
- (void)__startWithRoadblockViewModel:(id)arg1;
- (void)__startWithError:(id)arg1 forSubredditNamed:(id)arg2;
- (void)__startWithError:(id)arg1;
- (void)__startWithRoadblockable:(id)arg1 originURL:(id)arg2;
- (void)startWithRoadblockable:(id)arg1 originURL:(id)arg2;
- (void)startWithError:(id)arg1 forSubredditNamed:(id)arg2;
- (void)startWithError:(id)arg1;
- (void)dealloc;
@property(readonly, nonatomic) RedditService *service;
- (id)initWithAccountContext:(id)arg1 presentingViewController:(id)arg2;

@end

