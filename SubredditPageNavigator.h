//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SubredditPageViewController;
@protocol AccountContext;

@interface SubredditPageNavigator : NSObject
{
    id <AccountContext> _accountContext;
    SubredditPageViewController *_vc;
}

- (void).cxx_destruct;
@property(nonatomic) __weak SubredditPageViewController *vc; // @synthesize vc=_vc;
@property(readonly, nonatomic) id <AccountContext> accountContext; // @synthesize accountContext=_accountContext;
- (void)presentViewController:(id)arg1;
- (void)pushViewController:(id)arg1;
- (void)navigateToModNotifications;
- (void)navigateToPowerupsMarketingPageForSubreddit:(id)arg1 powerupsInfo:(id)arg2 preselectedBenefit:(long long)arg3;
- (void)navigateToCustomFeed:(id)arg1;
- (void)navigateToCustomFeedListWithSelectionHandler:(CDUnknownBlockType)arg1;
- (void)navigateToSubreddit:(id)arg1;
- (void)navigateToActionSheetWithItems:(id)arg1 fromSender:(id)arg2 delegate:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)navigateToLoggedOutPageFromSource:(unsigned long long)arg1;
- (void)presentExitAnonymousBrowsingPopupFromSource:(unsigned long long)arg1;
- (void)navigateToFlairPickerForSubreddit:(id)arg1 fromVC:(id)arg2;
- (void)navigateToCommunityInfo:(id)arg1;
- (void)navigateToSendMessageToSubredditModerator:(id)arg1;
- (id)initWithSubredditPageViewController:(id)arg1 accountContext:(id)arg2;

@end

