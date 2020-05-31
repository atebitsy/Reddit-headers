//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseFeedDisplayNode.h"

#import "ObjectObserverProtocol-Protocol.h"

@class NSDictionary, NSString, Post;
@protocol FeedPostDetailAwardsNodeDelegate;

@interface FeedPostDetailAwardsNode : BaseFeedDisplayNode <ObjectObserverProtocol>
{
    _Bool _shouldAttemptToAnimateLastGivenAward;
    _Bool _awardsPlaqueEnabled;
    id <FeedPostDetailAwardsNodeDelegate> _delegate;
    Post *_post;
    NSDictionary *_awardsNodes;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool awardsPlaqueEnabled; // @synthesize awardsPlaqueEnabled=_awardsPlaqueEnabled;
@property(nonatomic) _Bool shouldAttemptToAnimateLastGivenAward; // @synthesize shouldAttemptToAnimateLastGivenAward=_shouldAttemptToAnimateLastGivenAward;
@property(retain, nonatomic) NSDictionary *awardsNodes; // @synthesize awardsNodes=_awardsNodes;
@property(readonly, nonatomic) Post *post; // @synthesize post=_post;
@property(nonatomic) __weak id <FeedPostDetailAwardsNodeDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didTapAward:(id)arg1;
- (void)awardsNodeDidTap:(id)arg1;
- (void)configureNodes;
- (void)createNodes;
- (void)processAwardingCompleteNotification:(id)arg1;
- (void)updateContentViewsForData:(id)arg1 changeKeyPath:(id)arg2 oldValue:(id)arg3 newValue:(id)arg4;
- (id)layoutSpecThatFits:(CDStruct_90e057aa)arg1;
- (void)didExitHierarchy;
- (void)didEnterHierarchy;
- (void)didLoad;
- (id)initWithPost:(id)arg1 withAwardsPlaqueEnabled:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

