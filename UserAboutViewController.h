//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseTableViewController.h"

#import "FloatingHeaderCallbackProtocol-Protocol.h"
#import "PagedTabControllerProtocol-Protocol.h"
#import "RUIThemeUpdateCallbackProtocol-Protocol.h"

@class BaseView, FeedSpinnerView, FloatingHeaderManager, NSArray, NSString, RedditService, UIButton, UIScrollView, User;
@protocol AccountContext, PagedTabControllerParentCallback;

@interface UserAboutViewController : BaseTableViewController <FloatingHeaderCallbackProtocol, RUIThemeUpdateCallbackProtocol, PagedTabControllerProtocol>
{
    _Bool _hasStartedObservingScrollViewOffset;
    NSString *_username;
    id <PagedTabControllerParentCallback> _userProfileDelegate;
    FloatingHeaderManager *_floatingHeaderManager;
    BaseView *_userKarmaView;
    FeedSpinnerView *_firstLoadSpinner;
    UIButton *_messageButton;
    User *_user;
    NSArray *_trophies;
    id <AccountContext> _accountContext;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <AccountContext> accountContext; // @synthesize accountContext=_accountContext;
@property(retain, nonatomic) NSArray *trophies; // @synthesize trophies=_trophies;
@property(retain, nonatomic) User *user; // @synthesize user=_user;
@property(retain, nonatomic) UIButton *messageButton; // @synthesize messageButton=_messageButton;
@property(retain, nonatomic) FeedSpinnerView *firstLoadSpinner; // @synthesize firstLoadSpinner=_firstLoadSpinner;
@property(retain, nonatomic) BaseView *userKarmaView; // @synthesize userKarmaView=_userKarmaView;
@property(nonatomic) _Bool hasStartedObservingScrollViewOffset; // @synthesize hasStartedObservingScrollViewOffset=_hasStartedObservingScrollViewOffset;
@property(retain, nonatomic) FloatingHeaderManager *floatingHeaderManager; // @synthesize floatingHeaderManager=_floatingHeaderManager;
@property(nonatomic) __weak id <PagedTabControllerParentCallback> userProfileDelegate; // @synthesize userProfileDelegate=_userProfileDelegate;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
- (void)trackInitiatingChatEvent;
- (id)analyticsPageType;
- (id)analyticsScreenViewName;
- (void)floatingHeaderShouldMove:(id)arg1;
- (double)maxFloatingTransformY;
- (void)themeDidChange:(id)arg1;
- (id)majorContentView;
- (void)loadUserTrophiesFromNetwork;
- (void)loadUserFromNetwork;
- (void)loadContentFromNetworkSource;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)handleDescriptionSectionDidSelectRowAtIndexPath:(id)arg1;
- (void)handleTrophySectionDidSelectRowAtIndexPath:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)configureUserTrophyCell:(id)arg1 indexPath:(id)arg2;
- (void)configureUserAboutCell:(id)arg1 indexPath:(id)arg2;
- (id)imageLabelTableViewCellForTableView:(id)arg1 indexPath:(id)arg2;
- (id)userProfileDescriptionCellForTableView:(id)arg1 indexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (_Bool)isOtherUser;
- (_Bool)userHasDescriptionText;
- (long long)rowNumberForCellType:(long long)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
@property(readonly, nonatomic) UIScrollView *majorContentScrollView;
- (id)pageItemId;
- (id)pageItemText;
@property(readonly, nonatomic) RedditService *service;
- (id)initWithAccountContext:(id)arg1 username:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) double floatingHeadingSnapDistance;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

