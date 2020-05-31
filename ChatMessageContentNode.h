//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AsyncDisplayKit/ASDisplayNode.h>

#import "ChatModqueueMessageNodeDelegate-Protocol.h"

@class ASTextNode, Channel, ChatExternalLinkNode, ChatMessage, ChatMessageSnoomojiNode, ChatModqueueMessageNode, ChatPostNode;
@protocol AccountContext, ChatMessageContentNodeDelegate, FeedPostCellNodeDelegate><ChatExternalLinkNodeDelegate><ASTextNodeDelegate;

@interface ChatMessageContentNode : ASDisplayNode <ChatModqueueMessageNodeDelegate>
{
    _Bool _shouldShowModqueueMessage;
    id <FeedPostCellNodeDelegate><ChatExternalLinkNodeDelegate><ASTextNodeDelegate> _delegateVC;
    id <ChatMessageContentNodeDelegate> _delegate;
    id <AccountContext> _accountContext;
    ChatMessage *_chatMessage;
    Channel *_channel;
    ASTextNode *_textNode;
    ChatMessageSnoomojiNode *_snoomojiNode;
    ChatExternalLinkNode *_externalLinkNode;
    ChatPostNode *_postNode;
    ChatModqueueMessageNode *_modQueueMessageNode;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool shouldShowModqueueMessage; // @synthesize shouldShowModqueueMessage=_shouldShowModqueueMessage;
@property(retain, nonatomic) ChatModqueueMessageNode *modQueueMessageNode; // @synthesize modQueueMessageNode=_modQueueMessageNode;
@property(retain, nonatomic) ChatPostNode *postNode; // @synthesize postNode=_postNode;
@property(retain, nonatomic) ChatExternalLinkNode *externalLinkNode; // @synthesize externalLinkNode=_externalLinkNode;
@property(retain, nonatomic) ChatMessageSnoomojiNode *snoomojiNode; // @synthesize snoomojiNode=_snoomojiNode;
@property(retain, nonatomic) ASTextNode *textNode; // @synthesize textNode=_textNode;
@property(retain, nonatomic) Channel *channel; // @synthesize channel=_channel;
@property(retain, nonatomic) ChatMessage *chatMessage; // @synthesize chatMessage=_chatMessage;
@property(readonly, nonatomic) id <AccountContext> accountContext; // @synthesize accountContext=_accountContext;
@property(nonatomic) __weak id <ChatMessageContentNodeDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <FeedPostCellNodeDelegate><ChatExternalLinkNodeDelegate><ASTextNodeDelegate> delegateVC; // @synthesize delegateVC=_delegateVC;
- (id)layoutSpecThatFits:(CDStruct_90e057aa)arg1;
- (void)chatModqueueMessageNodeDidTapAvatarImageNode:(id)arg1;
- (void)addModAnnouncementToString;
- (void)addUserMentionsToString;
- (void)addLinksToString;
- (void)configureWithMessage:(id)arg1 channel:(id)arg2;
- (id)initWithAccountContext:(id)arg1;

@end

