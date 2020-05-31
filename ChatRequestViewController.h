//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseViewController.h"

#import "ChatRequestDelegatorDelegate-Protocol.h"

@class BaseButton, BaseCollectionView, Channel, ContactActionSheetDelegate, DirectChatRequestDelegator, NSString, RedditService, SubredditChatRequestDelegator, UIStackView;
@protocol AccountContext, ChatRequestDelegator;

@interface ChatRequestViewController : BaseViewController <ChatRequestDelegatorDelegate>
{
    Channel *_channel;
    id <AccountContext> _accountContext;
    id <ChatRequestDelegator> _delegator;
    DirectChatRequestDelegator *_directChatDelegator;
    SubredditChatRequestDelegator *_subredditChatDelegator;
    BaseCollectionView *_collectionView;
    ContactActionSheetDelegate *_contactActionSheetDelegate;
    UIStackView *_bottomButtonsBarView;
    BaseButton *_joinButton;
    BaseButton *_acceptButton;
    BaseButton *_declineButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) BaseButton *declineButton; // @synthesize declineButton=_declineButton;
@property(retain, nonatomic) BaseButton *acceptButton; // @synthesize acceptButton=_acceptButton;
@property(retain, nonatomic) BaseButton *joinButton; // @synthesize joinButton=_joinButton;
@property(retain, nonatomic) UIStackView *bottomButtonsBarView; // @synthesize bottomButtonsBarView=_bottomButtonsBarView;
@property(retain, nonatomic) ContactActionSheetDelegate *contactActionSheetDelegate; // @synthesize contactActionSheetDelegate=_contactActionSheetDelegate;
@property(retain, nonatomic) BaseCollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) SubredditChatRequestDelegator *subredditChatDelegator; // @synthesize subredditChatDelegator=_subredditChatDelegator;
@property(retain, nonatomic) DirectChatRequestDelegator *directChatDelegator; // @synthesize directChatDelegator=_directChatDelegator;
@property(retain, nonatomic) id <ChatRequestDelegator> delegator; // @synthesize delegator=_delegator;
@property(readonly, nonatomic) id <AccountContext> accountContext; // @synthesize accountContext=_accountContext;
@property(retain, nonatomic) Channel *channel; // @synthesize channel=_channel;
- (void)trackPreviewAnalyticsEventWithAction:(id)arg1 noun:(id)arg2;
- (void)trackAnalyticsEventWithAction:(id)arg1 noun:(id)arg2;
- (void)showToastWithErrorCode:(long long)arg1;
- (long long)errorCodeForAcceptFailureResponse:(id)arg1;
- (void)postJoinNotificationForPopularChannel:(id)arg1;
- (void)acceptInvite;
- (long long)errorCodeForJoinFailureResponse:(id)arg1;
- (void)didTapJoin:(id)arg1;
- (void)didTapDecline:(id)arg1;
- (void)didTapAccept:(id)arg1;
- (void)didTapMoreOptions:(id)arg1;
- (void)showContactActionSheetWithContact:(id)arg1;
- (void)chatRequestDelegator:(id)arg1 didTapContact:(id)arg2;
- (void)chatRequestDelegatorDidDeclineInvite:(id)arg1;
- (id)titleForChannel:(id)arg1;
- (void)updateViewStateWithChannel:(id)arg1;
- (void)configureWithSubredditChannel:(id)arg1;
- (void)configureDirectChannel:(id)arg1;
- (void)configureWithChannel:(id)arg1;
- (void)configureWithUrl:(id)arg1;
- (void)configureViewAppearance;
- (struct UIEdgeInsets)preferredContentInset;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
@property(readonly, nonatomic) RedditService *service;
- (id)initWithAccountContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

