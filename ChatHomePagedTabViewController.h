//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PagedTabViewController.h"

#import "ChatAddressBookViewControllerDelegate-Protocol.h"
#import "ObjectObserverProtocol-Protocol.h"
#import "RUIThemeUpdateCallbackProtocol-Protocol.h"

@class BaseBarButtonItem, ChatInboxListingViewController, LoggedOutViewController, NSString, RecentChatPostViewController, RedditService, UIView;

@interface ChatHomePagedTabViewController : PagedTabViewController <RUIThemeUpdateCallbackProtocol, ObjectObserverProtocol, ChatAddressBookViewControllerDelegate>
{
    _Bool _hasViewAppeared;
    RedditService *_service;
    BaseBarButtonItem *_chatButton;
    ChatInboxListingViewController *_directInboxViewController;
    ChatInboxListingViewController *_subredditInboxViewController;
    RecentChatPostViewController *_recentChatPostViewController;
    LoggedOutViewController *_loggedOutViewController;
    UIView *_badgeView;
}

@property(nonatomic) _Bool hasViewAppeared; // @synthesize hasViewAppeared=_hasViewAppeared;
@property(retain, nonatomic) UIView *badgeView; // @synthesize badgeView=_badgeView;
@property(retain, nonatomic) LoggedOutViewController *loggedOutViewController; // @synthesize loggedOutViewController=_loggedOutViewController;
@property(retain, nonatomic) RecentChatPostViewController *recentChatPostViewController; // @synthesize recentChatPostViewController=_recentChatPostViewController;
@property(retain, nonatomic) ChatInboxListingViewController *subredditInboxViewController; // @synthesize subredditInboxViewController=_subredditInboxViewController;
@property(retain, nonatomic) ChatInboxListingViewController *directInboxViewController; // @synthesize directInboxViewController=_directInboxViewController;
@property(retain, nonatomic) BaseBarButtonItem *chatButton; // @synthesize chatButton=_chatButton;
@property(retain, nonatomic) RedditService *service; // @synthesize service=_service;
- (void).cxx_destruct;
- (void)themeDidChange:(id)arg1;
- (void)trackAnalyticEventWithAction:(id)arg1 noun:(id)arg2 currentChannels:(id)arg3 requestsChannels:(id)arg4;
- (void)updateContentViewsForData:(id)arg1;
- (void)chatAddressBookViewController:(id)arg1 didFinishWithChannel:(id)arg2;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)addBlankRedBadge;
- (void)updateBadge;
- (void)connectToSendbird;
- (void)configUpdated:(id)arg1;
- (void)navigateToAddressBookViewController;
@property(readonly, nonatomic) ChatInboxListingViewController *currentViewController;
- (void)didTapChatButton:(id)arg1;
- (void)configureRightBarButton;
- (void)setupTabBarItem;
- (void)toggleLoggedOutView:(_Bool)arg1;
- (id)chatTabs;
- (id)viewControllersForChatTabs:(id)arg1;
- (void)configurePageControllers;
- (void)updateNetworkSources;
- (void)layoutViewsForFrame:(struct CGRect)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithService:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
