//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class NSArray, NSMutableArray, NSMutableDictionary, NSMutableOrderedSet, NSString;
@protocol AccountContext, ChatInboxSubredditDelegatorDelegate;

@interface ChatInboxSubredditDelegator : NSObject <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    id <ChatInboxSubredditDelegatorDelegate> _delegate;
    NSMutableArray *_currentSubredditChannelObjects;
    NSMutableDictionary *_currentSubredditSections;
    NSMutableOrderedSet *_currentSubredditSectionHeaders;
    NSArray *_currentRequestObjects;
    NSArray *_currentChannelObjects;
    NSArray *_currentPopularObjects;
    id <AccountContext> _accountContext;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <AccountContext> accountContext; // @synthesize accountContext=_accountContext;
@property(copy, nonatomic) NSArray *currentPopularObjects; // @synthesize currentPopularObjects=_currentPopularObjects;
@property(copy, nonatomic) NSArray *currentChannelObjects; // @synthesize currentChannelObjects=_currentChannelObjects;
@property(copy, nonatomic) NSArray *currentRequestObjects; // @synthesize currentRequestObjects=_currentRequestObjects;
@property(retain, nonatomic) NSMutableOrderedSet *currentSubredditSectionHeaders; // @synthesize currentSubredditSectionHeaders=_currentSubredditSectionHeaders;
@property(retain, nonatomic) NSMutableDictionary *currentSubredditSections; // @synthesize currentSubredditSections=_currentSubredditSections;
@property(retain, nonatomic) NSMutableArray *currentSubredditChannelObjects; // @synthesize currentSubredditChannelObjects=_currentSubredditChannelObjects;
@property(nonatomic) __weak id <ChatInboxSubredditDelegatorDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)shouldBlurHeaderCommunityIcon:(id)arg1;
- (_Bool)shouldShowEmptyViewForSection:(long long)arg1;
- (id)subredditChannelForIndexPath:(id)arg1;
- (id)objectForIndexPath:(id)arg1 collectionView:(id)arg2;
- (void)collectionView:(id)arg1 willDisplaySupplementaryView:(id)arg2 forElementKind:(id)arg3 atIndexPath:(id)arg4;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (id)noJoinedRoomsString;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (long long)totalNumberOfSubredditChannelCells;
- (struct CGSize)sizeForJoinedHeaderCell;
- (struct CGSize)sizeForBottomJoinedCell;
- (struct CGSize)sizeForJoinedCell;
- (struct CGSize)sizeForBottomInvitedCell;
- (struct CGSize)sizeForInvitedCell;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)adjustedHeaderIndexForSection:(long long)arg1;
- (_Bool)isPopularSection:(long long)arg1 collectionView:(id)arg2;
- (void)updateContentViewsWithChannels:(id)arg1 invited:(id)arg2 popular:(id)arg3;
- (id)initWithAccountContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

