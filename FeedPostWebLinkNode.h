//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseFeedDisplayNode.h"

@class ASNetworkImageNode, FeedPostWebLinkOptions, Post, UrlLabelNode;
@protocol FeedPostWebLinkNodeDelegate;

@interface FeedPostWebLinkNode : BaseFeedDisplayNode
{
    Post *_post;
    id <FeedPostWebLinkNodeDelegate> _delegate;
    ASNetworkImageNode *_imageNode;
    UrlLabelNode *_urlLabelNode;
    FeedPostWebLinkOptions *_options;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FeedPostWebLinkOptions *options; // @synthesize options=_options;
@property(retain, nonatomic) UrlLabelNode *urlLabelNode; // @synthesize urlLabelNode=_urlLabelNode;
@property(retain, nonatomic) ASNetworkImageNode *imageNode; // @synthesize imageNode=_imageNode;
@property(nonatomic) __weak id <FeedPostWebLinkNodeDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) Post *post; // @synthesize post=_post;
- (void)imageNodeTapped:(id)arg1;
- (id)imageURLForPost:(id)arg1;
- (id)layoutSpecThatFits:(CDStruct_90e057aa)arg1;
- (id)initWithPost:(id)arg1 options:(id)arg2 delegate:(id)arg3;

@end

