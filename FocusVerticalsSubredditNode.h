//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseFeedDisplayNode.h"

@class ASNetworkImageNode, ASTextNode, BaseButtonNode, FocusVerticalsDiscoveryUnitViewModel, Subreddit;
@protocol FocusVerticalsSubredditNodeDelegate;

@interface FocusVerticalsSubredditNode : BaseFeedDisplayNode
{
    Subreddit *_subreddit;
    FocusVerticalsDiscoveryUnitViewModel *_viewModel;
    id <FocusVerticalsSubredditNodeDelegate> _delegate;
    ASNetworkImageNode *_iconNode;
    ASTextNode *_titleNode;
    ASTextNode *_subTitleNode;
    ASTextNode *_descriptionNode;
    BaseButtonNode *_joinNode;
}

- (void).cxx_destruct;
@property(retain, nonatomic) BaseButtonNode *joinNode; // @synthesize joinNode=_joinNode;
@property(retain, nonatomic) ASTextNode *descriptionNode; // @synthesize descriptionNode=_descriptionNode;
@property(retain, nonatomic) ASTextNode *subTitleNode; // @synthesize subTitleNode=_subTitleNode;
@property(retain, nonatomic) ASTextNode *titleNode; // @synthesize titleNode=_titleNode;
@property(retain, nonatomic) ASNetworkImageNode *iconNode; // @synthesize iconNode=_iconNode;
@property(nonatomic) __weak id <FocusVerticalsSubredditNodeDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) FocusVerticalsDiscoveryUnitViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) Subreddit *subreddit; // @synthesize subreddit=_subreddit;
- (void)didExitVisibleStateWithVisibilityContext:(id)arg1;
- (void)didTapNode:(id)arg1;
- (void)didTapSubscriptionNode:(id)arg1;
- (id)layoutSpecThatFits:(CDStruct_90e057aa)arg1;
- (void)configureJoinNode;
- (void)configureDescription;
- (void)configureSubtitle;
- (void)configureTitle;
- (void)configureIconNode;
- (void)configureNodes;
- (void)createJoinNode;
- (void)createDescriptionNode;
- (void)createSubTitleNode;
- (void)createTitleNode;
- (void)createIconNode;
- (void)createNodes;
- (id)initWithFocusVerticalsDiscoveryUnitViewModel:(id)arg1 subreddit:(id)arg2 visibilityTracker:(id)arg3 visibilityOptions:(id)arg4;

@end

