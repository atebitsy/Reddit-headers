//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CarouselItemNode.h"

@class ASImageNode, ASNetworkImageNode, ASTextNode, NSString, SubredditChannel, UIColor;

@interface CarouselItemSubredditChannelNode : CarouselItemNode
{
    SubredditChannel *_channel;
    NSString *_communityIconUrlString;
    UIColor *_defaultPlaceholderColor;
    ASTextNode *_communityNameNode;
    ASTextNode *_channelNameNode;
    ASTextNode *_descriptionNode;
    ASTextNode *_actionTextNode;
    ASTextNode *_memberCountNode;
    ASImageNode *_chatBubbleIconNode;
    ASImageNode *_channelDetailIconNode;
    ASNetworkImageNode *_communityIconNode;
    ASImageNode *_bannerImageNode;
}

+ (id)membersCountStringForCount:(unsigned long long)arg1;
@property(retain, nonatomic) ASImageNode *bannerImageNode; // @synthesize bannerImageNode=_bannerImageNode;
@property(retain, nonatomic) ASNetworkImageNode *communityIconNode; // @synthesize communityIconNode=_communityIconNode;
@property(retain, nonatomic) ASImageNode *channelDetailIconNode; // @synthesize channelDetailIconNode=_channelDetailIconNode;
@property(retain, nonatomic) ASImageNode *chatBubbleIconNode; // @synthesize chatBubbleIconNode=_chatBubbleIconNode;
@property(retain, nonatomic) ASTextNode *memberCountNode; // @synthesize memberCountNode=_memberCountNode;
@property(retain, nonatomic) ASTextNode *actionTextNode; // @synthesize actionTextNode=_actionTextNode;
@property(retain, nonatomic) ASTextNode *descriptionNode; // @synthesize descriptionNode=_descriptionNode;
@property(retain, nonatomic) ASTextNode *channelNameNode; // @synthesize channelNameNode=_channelNameNode;
@property(retain, nonatomic) ASTextNode *communityNameNode; // @synthesize communityNameNode=_communityNameNode;
@property(retain, nonatomic) UIColor *defaultPlaceholderColor; // @synthesize defaultPlaceholderColor=_defaultPlaceholderColor;
@property(copy, nonatomic) NSString *communityIconUrlString; // @synthesize communityIconUrlString=_communityIconUrlString;
@property(retain, nonatomic) SubredditChannel *channel; // @synthesize channel=_channel;
- (void).cxx_destruct;
- (id)subredditBackgroundColor;
- (void)updateCommunityIconBackgroundColor;
- (void)configureThemableNodes;
- (id)layoutSpecThatFits:(CDStruct_90e057aa)arg1;
- (void)configureNodes;
- (id)initWithCarouselItem:(id)arg1 defaultPlaceHolderColor:(id)arg2;

@end
