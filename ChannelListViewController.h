//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseViewController.h"

#import "ChannelNetworkSourceDelegate-Protocol.h"
#import "ListingStateControllerDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class BaseCollectionView, ChannelNetworkSource, ListingStateController, NSArray, NSString, RedditService;
@protocol AccountContext;

@interface ChannelListViewController : BaseViewController <UICollectionViewDelegate, UICollectionViewDataSource, ChannelNetworkSourceDelegate, ListingStateControllerDelegate>
{
    id <AccountContext> _accountContext;
    unsigned long long _type;
    ChannelNetworkSource *_dataSource;
    NSArray *_channels;
    ListingStateController *_listingStateController;
    BaseCollectionView *_collectionView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) BaseCollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) ListingStateController *listingStateController; // @synthesize listingStateController=_listingStateController;
@property(copy, nonatomic) NSArray *channels; // @synthesize channels=_channels;
@property(readonly, nonatomic) ChannelNetworkSource *dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, nonatomic) id <AccountContext> accountContext; // @synthesize accountContext=_accountContext;
- (void)logViewEvent;
- (id)analyticsScreenViewName;
- (id)majorContentScrollView;
- (id)majorContentView;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)updateListingWithChannels:(id)arg1;
- (void)channelNetworkSourceDidUpdate:(id)arg1;
- (void)listingNetworkSourceDidStartFetching:(id)arg1;
- (void)listingNetworkSourceDidFail:(id)arg1;
- (void)listingNetworkSourceDidFetchMoreData:(id)arg1;
- (void)listingNetworkSourceDidFetchData:(id)arg1 correlationID:(id)arg2;
- (void)listingStateController:(id)arg1 didTapLoadingSpinner:(id)arg2;
- (void)listingStateController:(id)arg1 didPullToRefresh:(id)arg2;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
@property(readonly, nonatomic) RedditService *service;
- (id)initWithAccountContext:(id)arg1 dataSource:(id)arg2 type:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

