//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseFeedDisplayNode.h"

#import "AvatarImageNodeDelegate-Protocol.h"
#import "ChatPostTextNodeDelegate-Protocol.h"
#import "_TtP6Reddit26ChatPostVotingNodeDelegate_-Protocol.h"
#import "_TtP6Reddit36ChatPostMessageParentCommentDelegate_-Protocol.h"

@class AvatarImageNode, CommentTreeHeaderNode, CommentTreeNode, CommentTreeNodeOptions, NSString, _TtC6Reddit16ChatPostTextNode, _TtC6Reddit18ChatPostVotingNode, _TtC6Reddit22ChatPostAwardImageNode, _TtC6Reddit32ChatPostMessageParentCommentView, _TtC6Reddit33ChatPostAwardBubbleBackgroundNode;
@protocol ChatPostContentNodeDelegate, ViewContext;

@interface ChatPostContentNode : BaseFeedDisplayNode <AvatarImageNodeDelegate, ChatPostTextNodeDelegate, _TtP6Reddit36ChatPostMessageParentCommentDelegate_, _TtP6Reddit26ChatPostVotingNodeDelegate_>
{
    _Bool _isReplyFeatureEnabled;
    _Bool _shouldShowDownvote;
    CommentTreeNode *_commentNode;
    id <ViewContext> _viewContext;
    _TtC6Reddit16ChatPostTextNode *_textNode;
    AvatarImageNode *_avatarNode;
    _TtC6Reddit22ChatPostAwardImageNode *_awardImageNode;
    _TtC6Reddit33ChatPostAwardBubbleBackgroundNode *_awardBackgroundNode;
    CommentTreeHeaderNode *_headerNode;
    CommentTreeNodeOptions *_options;
    _TtC6Reddit32ChatPostMessageParentCommentView *_parentCommentNode;
    _TtC6Reddit18ChatPostVotingNode *_votingNode;
    id <ChatPostContentNodeDelegate> _delegate;
    CDUnknownBlockType _shouldShowVotingNodeBlock;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool shouldShowDownvote; // @synthesize shouldShowDownvote=_shouldShowDownvote;
@property(copy, nonatomic) CDUnknownBlockType shouldShowVotingNodeBlock; // @synthesize shouldShowVotingNodeBlock=_shouldShowVotingNodeBlock;
@property(nonatomic) _Bool isReplyFeatureEnabled; // @synthesize isReplyFeatureEnabled=_isReplyFeatureEnabled;
@property(nonatomic) __weak id <ChatPostContentNodeDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) _TtC6Reddit18ChatPostVotingNode *votingNode; // @synthesize votingNode=_votingNode;
@property(retain, nonatomic) _TtC6Reddit32ChatPostMessageParentCommentView *parentCommentNode; // @synthesize parentCommentNode=_parentCommentNode;
@property(retain, nonatomic) CommentTreeNodeOptions *options; // @synthesize options=_options;
@property(retain, nonatomic) CommentTreeHeaderNode *headerNode; // @synthesize headerNode=_headerNode;
@property(retain, nonatomic) _TtC6Reddit33ChatPostAwardBubbleBackgroundNode *awardBackgroundNode; // @synthesize awardBackgroundNode=_awardBackgroundNode;
@property(retain, nonatomic) _TtC6Reddit22ChatPostAwardImageNode *awardImageNode; // @synthesize awardImageNode=_awardImageNode;
@property(retain, nonatomic) AvatarImageNode *avatarNode; // @synthesize avatarNode=_avatarNode;
@property(retain, nonatomic) _TtC6Reddit16ChatPostTextNode *textNode; // @synthesize textNode=_textNode;
@property(readonly, nonatomic) id <ViewContext> viewContext; // @synthesize viewContext=_viewContext;
@property(readonly, nonatomic) CommentTreeNode *commentNode; // @synthesize commentNode=_commentNode;
- (void)chatPostVotingNodeDidTapDownvoteWithComment:(id)arg1;
- (void)chatPostVotingNodeDidTapUpvoteWithComment:(id)arg1;
- (unsigned long long)presentationStyle;
- (void)chatPostTextNode:(id)arg1 didTapReadMoreWithCommentNode:(id)arg2;
- (void)chatPostTextNode:(id)arg1 didTapURL:(id)arg2;
- (void)didTapParentNodeWithComment:(id)arg1;
- (id)layoutSpecThatFits:(CDStruct_90e057aa)arg1;
- (void)avatarImageNodeWasTapped:(id)arg1;
- (void)didTapContentNode:(id)arg1;
- (void)configureNodes;
- (void)addKeyValueObservations;
- (void)didLoad;
- (id)initWithViewContext:(id)arg1 commentNode:(id)arg2 options:(id)arg3 delegate:(id)arg4 isReplyFeatureEnabled:(_Bool)arg5 shouldShowVotingNodeBlock:(CDUnknownBlockType)arg6 shouldShowDownvote:(_Bool)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

