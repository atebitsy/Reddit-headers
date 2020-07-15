//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseFeedDisplayNode.h"

#import "ObjectObserverProtocol-Protocol.h"

@class BaseButtonNode, ChatPostFeedIndicatorNode, FeedPostOptions, NSString, Post, UIView, VoteButtonNode;
@protocol FeedPostCommentBarNodeDelegate, ViewContext;

@interface FeedPostCommentBarNode : BaseFeedDisplayNode <ObjectObserverProtocol>
{
    _Bool _shouldHideAwardButtonTitle;
    Post *_post;
    id <FeedPostCommentBarNodeDelegate> _delegate;
    BaseButtonNode *_actionButtonNode;
    BaseButtonNode *_awardButtonNode;
    id <ViewContext> _viewContext;
    BaseButtonNode *_scoreButtonNode;
    VoteButtonNode *_upvoteButtonNode;
    VoteButtonNode *_downvoteButtonNode;
    BaseButtonNode *_commentButtonNode;
    ChatPostFeedIndicatorNode *_chatPostIndicatorNode;
    FeedPostOptions *_options;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool shouldHideAwardButtonTitle; // @synthesize shouldHideAwardButtonTitle=_shouldHideAwardButtonTitle;
@property(retain, nonatomic) FeedPostOptions *options; // @synthesize options=_options;
@property(retain, nonatomic) ChatPostFeedIndicatorNode *chatPostIndicatorNode; // @synthesize chatPostIndicatorNode=_chatPostIndicatorNode;
@property(retain, nonatomic) BaseButtonNode *commentButtonNode; // @synthesize commentButtonNode=_commentButtonNode;
@property(retain, nonatomic) VoteButtonNode *downvoteButtonNode; // @synthesize downvoteButtonNode=_downvoteButtonNode;
@property(retain, nonatomic) VoteButtonNode *upvoteButtonNode; // @synthesize upvoteButtonNode=_upvoteButtonNode;
@property(retain, nonatomic) BaseButtonNode *scoreButtonNode; // @synthesize scoreButtonNode=_scoreButtonNode;
@property(readonly, nonatomic) id <ViewContext> viewContext; // @synthesize viewContext=_viewContext;
@property(retain, nonatomic) BaseButtonNode *awardButtonNode; // @synthesize awardButtonNode=_awardButtonNode;
@property(retain, nonatomic) BaseButtonNode *actionButtonNode; // @synthesize actionButtonNode=_actionButtonNode;
@property(nonatomic) __weak id <FeedPostCommentBarNodeDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) Post *post; // @synthesize post=_post;
- (void)updateActionButtonOnImageToggle;
- (void)updateContentViewsForData:(id)arg1;
- (void)actionButtonDidTap:(id)arg1;
- (void)commentButtonDidTap:(id)arg1;
- (void)downvoteButtonDidTap:(id)arg1;
- (void)upvoteButtonDidTap:(id)arg1;
- (_Bool)isVoteIconStylingAllowed;
- (void)configureAwardSection;
- (void)configureActionSection;
- (void)configureCommentButton;
- (void)configureScoreSection;
- (void)configureNodes;
- (id)layoutSpecThatFits:(CDStruct_90e057aa)arg1;
- (_Bool)shouldDisplayChatPostFeedIndicator;
@property(readonly, nonatomic) UIView *voteTooltipAnchorView;
- (void)configureVoteButtons;
- (void)didLoad;
- (void)configureWithPost:(id)arg1;
- (id)initWithViewContext:(id)arg1 post:(id)arg2 options:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

