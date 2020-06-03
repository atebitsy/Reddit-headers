//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ListingPresenter.h"

#import "DiscoveryUnitViewModelDataProviderDelegate-Protocol.h"
#import "ListingAnalyticsProtocol-Protocol.h"
#import "TemplateParserContext-Protocol.h"

@class Account, AdsDataProvider, DiscoveryUnitViewModelDataProvider, FeedPostOptions, LayoutGuidance, ListingChangeBuffer, MediaPostDataProvider, NSArray, NSIndexPath, NSOrderedSet, NSString, PostCollectionOptions, SuspendedBannerModel, VisibilityTracker;
@protocol FeedPresentable;

@interface FeedPresenter : ListingPresenter <DiscoveryUnitViewModelDataProviderDelegate, TemplateParserContext, ListingAnalyticsProtocol>
{
    _Bool _shouldFilterNsfwForNonLoggedInAccounts;
    _Bool _shouldSupportGallery;
    _Bool _isInModMode;
    _Bool _isInModQueue;
    _Bool _isFeedSingleSubreddit;
    _Bool _shouldShowHiddenPosts;
    _Bool _shouldDisableSorting;
    _Bool _shouldDisableSubscribeToasts;
    _Bool _shouldDisableAppRatingPrompt;
    _Bool _refreshPillEnabled;
    _Bool _shouldShowDefaultDisplayModeForGallery;
    NSArray *_mediaCurrentObjects;
    NSArray *_frozenCurrentObjects;
    unsigned long long _displayMode;
    unsigned long long _feedRange;
    unsigned long long _feedBannerType;
    SuspendedBannerModel *_suspendedBannerModel;
    unsigned long long _previousCount;
    unsigned long long _mainTabFeedType;
    NSIndexPath *_maxScrollIndexPath;
    double _timeIntervalForAddingPostToSeenHistory;
    VisibilityTracker *_visibilityTracker;
    NSString *_URLString;
    NSString *_configuredURLString;
    unsigned long long _feedSort;
    FeedPostOptions *_feedPostOptions;
    PostCollectionOptions *_postCollectionOptions;
    AdsDataProvider *_adsDataProvider;
    LayoutGuidance *_currentLayout;
    NSOrderedSet *_sections;
    NSArray *_sectionOrder;
    MediaPostDataProvider *_mediaPostDataProvider;
    DiscoveryUnitViewModelDataProvider *_discoveryUnitsDataProvider;
    ListingChangeBuffer *_feedUpdateBuffer;
    NSArray *_keyValueObservations;
}

+ (id)modQueuePresenterWithAccountContext:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *keyValueObservations; // @synthesize keyValueObservations=_keyValueObservations;
@property(retain, nonatomic) ListingChangeBuffer *feedUpdateBuffer; // @synthesize feedUpdateBuffer=_feedUpdateBuffer;
@property(retain, nonatomic) DiscoveryUnitViewModelDataProvider *discoveryUnitsDataProvider; // @synthesize discoveryUnitsDataProvider=_discoveryUnitsDataProvider;
@property(retain, nonatomic) MediaPostDataProvider *mediaPostDataProvider; // @synthesize mediaPostDataProvider=_mediaPostDataProvider;
@property(retain, nonatomic) NSArray *sectionOrder; // @synthesize sectionOrder=_sectionOrder;
@property(retain, nonatomic) NSOrderedSet *sections; // @synthesize sections=_sections;
@property(readonly, nonatomic) LayoutGuidance *currentLayout; // @synthesize currentLayout=_currentLayout;
@property(retain, nonatomic) AdsDataProvider *adsDataProvider; // @synthesize adsDataProvider=_adsDataProvider;
@property(readonly, nonatomic) PostCollectionOptions *postCollectionOptions; // @synthesize postCollectionOptions=_postCollectionOptions;
@property(retain, nonatomic) FeedPostOptions *feedPostOptions; // @synthesize feedPostOptions=_feedPostOptions;
@property(nonatomic) unsigned long long feedSort; // @synthesize feedSort=_feedSort;
@property(copy, nonatomic) NSString *configuredURLString; // @synthesize configuredURLString=_configuredURLString;
@property(copy, nonatomic) NSString *URLString; // @synthesize URLString=_URLString;
@property(retain, nonatomic) VisibilityTracker *visibilityTracker; // @synthesize visibilityTracker=_visibilityTracker;
@property(nonatomic) double timeIntervalForAddingPostToSeenHistory; // @synthesize timeIntervalForAddingPostToSeenHistory=_timeIntervalForAddingPostToSeenHistory;
@property(retain, nonatomic) NSIndexPath *maxScrollIndexPath; // @synthesize maxScrollIndexPath=_maxScrollIndexPath;
@property(nonatomic) _Bool shouldShowDefaultDisplayModeForGallery; // @synthesize shouldShowDefaultDisplayModeForGallery=_shouldShowDefaultDisplayModeForGallery;
@property(nonatomic) _Bool refreshPillEnabled; // @synthesize refreshPillEnabled=_refreshPillEnabled;
@property(nonatomic) unsigned long long mainTabFeedType; // @synthesize mainTabFeedType=_mainTabFeedType;
@property(nonatomic) unsigned long long previousCount; // @synthesize previousCount=_previousCount;
@property(retain, nonatomic) SuspendedBannerModel *suspendedBannerModel; // @synthesize suspendedBannerModel=_suspendedBannerModel;
@property(nonatomic) unsigned long long feedBannerType; // @synthesize feedBannerType=_feedBannerType;
@property(nonatomic) _Bool shouldDisableAppRatingPrompt; // @synthesize shouldDisableAppRatingPrompt=_shouldDisableAppRatingPrompt;
@property(nonatomic) _Bool shouldDisableSubscribeToasts; // @synthesize shouldDisableSubscribeToasts=_shouldDisableSubscribeToasts;
@property(nonatomic) _Bool shouldDisableSorting; // @synthesize shouldDisableSorting=_shouldDisableSorting;
@property(nonatomic) _Bool shouldShowHiddenPosts; // @synthesize shouldShowHiddenPosts=_shouldShowHiddenPosts;
@property(nonatomic) _Bool isFeedSingleSubreddit; // @synthesize isFeedSingleSubreddit=_isFeedSingleSubreddit;
@property(nonatomic) _Bool isInModQueue; // @synthesize isInModQueue=_isInModQueue;
@property(nonatomic) _Bool isInModMode; // @synthesize isInModMode=_isInModMode;
@property(nonatomic) _Bool shouldSupportGallery; // @synthesize shouldSupportGallery=_shouldSupportGallery;
@property(nonatomic) unsigned long long feedRange; // @synthesize feedRange=_feedRange;
@property(nonatomic) _Bool shouldFilterNsfwForNonLoggedInAccounts; // @synthesize shouldFilterNsfwForNonLoggedInAccounts=_shouldFilterNsfwForNonLoggedInAccounts;
@property(nonatomic) unsigned long long displayMode; // @synthesize displayMode=_displayMode;
@property(copy, nonatomic) NSArray *frozenCurrentObjects; // @synthesize frozenCurrentObjects=_frozenCurrentObjects;
@property(copy, nonatomic) NSArray *mediaCurrentObjects; // @synthesize mediaCurrentObjects=_mediaCurrentObjects;
@property(readonly, nonatomic) _Bool isInitialFeedForAccount;
- (id)listingTraceName;
- (id)postMetaViewModelForPost:(id)arg1;
- (unsigned long long)shouldShowHlsVideoPostInTheater:(id)arg1;
- (id)theaterInitialObjectsForPost:(id)arg1;
- (id)theaterNetworkSourceForPost:(id)arg1;
- (id)currentObjects;
- (void)userWasBlocked:(id)arg1;
- (void)modelAttributedStringsDidUpdate:(id)arg1;
- (void)registerObservations;
- (unsigned long long)removeObjectFromCurrentObjects:(id)arg1;
- (void)removeObjectsFromCurrentObjects:(id)arg1;
- (unsigned long long)insertObjectToCurrentObjects:(id)arg1 atIndex:(unsigned long long)arg2;
- (unsigned long long)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)insertObjectIntoBuffer:(id)arg1 atIndex:(unsigned long long)arg2;
- (_Bool)shouldHidePost:(id)arg1;
- (_Bool)shouldFilterNsfw;
- (_Bool)shouldFilterObject:(id)arg1;
- (void)postFeedDidPerformInitialFetchNotificationWithStatus:(_Bool)arg1;
- (_Bool)listingNetworkSourceShouldFilterObject:(id)arg1;
- (void)listingNetworkSourceDidFail:(id)arg1;
- (void)listingNetworkSourceDidParseNewData:(id)arg1;
- (void)listingNetworkSourceDidFetchMoreData:(id)arg1;
- (void)listingNetworkSourceDidFetchData:(id)arg1 correlationID:(id)arg2;
@property(readonly, nonatomic) NSString *analyticsPageType;
@property(readonly, nonatomic) NSString *analyticsScreenViewName;
@property(readonly, nonatomic) NSString *analyticsCorrelationId;
- (unsigned long long)indexMatchingPost:(id)arg1 inObjects:(id)arg2;
- (void)unfollowEventPost:(id)arg1;
- (void)followEventPost:(id)arg1;
- (void)upvotePost:(id)arg1;
- (void)downvotePost:(id)arg1;
- (void)setPostFlair:(id)arg1 forPost:(id)arg2 modPermissions:(unsigned long long)arg3 shouldAllowUndo:(_Bool)arg4 oldFlair:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)updateGalleryModeCurrentObjectsWithNetworkSource:(id)arg1;
- (void)updateCurrentObjectsWithNetworkSource:(id)arg1;
- (void)showSubscribedToastWithSubscribable:(id)arg1 success:(_Bool)arg2;
- (void)toggleSubscription:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleAppDidEnterForegroundWhenPresentableIsOnTheTop;
- (void)reloadContentFromNetworkSource;
- (id)createListingNetworkSourceWithURLString:(id)arg1 parameters:(id)arg2;
- (void)reconfigureListingNetworkSource;
- (void)configureWithURLString:(id)arg1 feedSort:(unsigned long long)arg2 params:(id)arg3 shouldManualFetch:(_Bool)arg4;
- (void)configureWithURLString:(id)arg1 feedSort:(unsigned long long)arg2 params:(id)arg3;
- (void)configureWithURLString:(id)arg1 feedSort:(unsigned long long)arg2;
- (void)configureWithURLString:(id)arg1;
@property(readonly, nonatomic) unsigned long long feedSection;
@property(readonly, nonatomic) unsigned long long bannerSection;
@property(readonly, nonatomic) unsigned long long headerSection;
@property(readonly, nonatomic) _Bool shouldUseNewFeedSort;
@property(readonly, nonatomic) NSArray *availableFeedSorts;
@property(readonly, nonatomic) double minimumLineSpacing;
@property(readonly, nonatomic) Account *currentAccount;
- (id)initWithAccountContext:(id)arg1;
@property(readonly, nonatomic) unsigned long long surfaceType;
- (_Bool)recentCommunitiesEnabled;
- (id)valueForTemplateName:(id)arg1;
- (_Bool)canShowChainedDiscoveryUnitWithPk:(id)arg1 subreddit:(id)arg2;
- (void)didShowChainedDiscoveryUnitWithPk:(id)arg1 subreddit:(id)arg2;
- (void)configureChainedCarouselForViewedPostIfNeeded;
- (void)queuePostForChaining:(id)arg1 date:(id)arg2;
- (void)setQueuedPostForChainingDate:(id)arg1;
- (id)queuedPostForChainingDate;
- (void)setQueuedPostForChaining:(id)arg1;
- (id)queuedPostForChaining;
- (_Bool)discoveryUnitViewModelEnabled:(id)arg1 withDiscoveryUnit:(id)arg2;
- (id)surfaceKeyHiddenByUser;
- (id)createViewModelForDiscoveryUnit:(id)arg1;
- (_Bool)shouldFetchDiscoveryUnit:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) __weak id <FeedPresentable> presentable; // @dynamic presentable;
@property(readonly) Class superclass;

@end

