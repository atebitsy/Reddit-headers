//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSDictionary, NSOrderedSet, NSSet, NSString, SearchHistory;

@interface AccountSettings : NSObject
{
    NSString *_accountPk;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *accountPk; // @synthesize accountPk=_accountPk;
@property(copy, nonatomic) NSDictionary *shareActivityHistory;
@property(retain, nonatomic) NSSet *tappedShareActivityTypes;
@property(copy, nonatomic) NSArray *dismissedTokenClaims;
@property(nonatomic) _Bool shouldBadgeMainScreenPlusButton;
@property(copy, nonatomic) NSArray *mainScreenTabs;
@property(nonatomic) unsigned long long lastChatTabPage;
@property(nonatomic) _Bool shouldAddAttributionToSharedImage;
@property(retain, nonatomic) NSDate *shareCardsInfoPopupShownDate;
@property(copy, nonatomic) NSSet *subredditIdsExcludedFromTrendingToaster;
@property(nonatomic) unsigned long long daysToWaitToBadgeForYouFeed;
@property(nonatomic) _Bool isForYouBadgeCausedBySubscription;
@property(retain, nonatomic) NSDate *dateToBadgeForYouFeed;
@property(copy, nonatomic) NSArray *selectedOnboardingCategories;
@property(copy, nonatomic) NSDictionary *inFeedChainingData;
- (_Bool)shouldShowDownToChatSafetyScreen;
- (void)setDownToChatSafetyScreenViewed;
- (_Bool)shouldHideDiscoveryUnitWithPk:(id)arg1;
- (void)setShouldHide:(_Bool)arg1 forDiscoveryUnitWithPk:(id)arg2 forNumberOfDays:(long long)arg3;
- (void)setHasSeenBroadcastPromptNewLabelForSubredditInfo:(id)arg1;
- (_Bool)hasSeenBroadcastPromptNewLabelForSubredditInfo:(id)arg1;
@property(nonatomic) _Bool hasSeenLiveStreamingSwipeHintV2;
@property(nonatomic) _Bool hasSeenLiveStreamingSwipeHint;
@property(nonatomic) _Bool hasSeenLiveStreamingFirstTimeViewerEntryModal;
@property(nonatomic) _Bool hasSeenFirstTimeBroadcasterEntryModal;
@property(nonatomic) _Bool hasCollapsedStreamingEntryPoint;
@property(copy, nonatomic) NSArray *acceptedNSFWMultis;
@property(copy, nonatomic) NSArray *acceptedNSFWUsers;
@property(copy, nonatomic) NSArray *acceptedNSFWSubreddits;
@property(copy, nonatomic) NSArray *acceptedQuarantinedSubreddits;
@property(nonatomic) _Bool shouldDefaultToNonAnonymousAwarding;
@property(copy, nonatomic) NSDictionary *GOTPollJSONData;
@property(copy, nonatomic) NSDictionary *announcementDismissCounts;
@property(copy, nonatomic) NSOrderedSet *loggedOutHiddenPostIds;
@property(copy, nonatomic) NSString *pendingInAppPurchaseCorrelationId;
@property(copy, nonatomic) NSDictionary *savedInAppPurchaseTransactions;
@property(nonatomic) _Bool hasClosedForYouFeedBanner;
- (void)setIsFollowingSubredditCategory:(id)arg1 isFollowing:(_Bool)arg2;
- (_Bool)isFollowingSubredditCategory:(id)arg1;
@property(retain, nonatomic) SearchHistory *searchHistory;
@property(nonatomic) _Bool hasSeenTrendingNotification;
@property(nonatomic) _Bool hasSeenNewsUpliftAlert;
@property(nonatomic) _Bool hasSeenNewsPersonalization;
@property(copy, nonatomic) NSArray *subscribedNewsSubtopicNames;
@property(copy, nonatomic) NSArray *subscribedNewsTopicNames;
@property(copy, nonatomic) NSArray *recentSearches;
@property(nonatomic) unsigned long long chatTypeAheadMinNumChars;
@property(nonatomic) unsigned long long chatMessageLengthLimit;
@property(nonatomic) unsigned long long defaultHomeFeedRange;
@property(nonatomic) unsigned long long defaultHomeFeedSort;
@property(nonatomic) _Bool hasSeenChatNSFWPrompt;
- (void)updateValue:(id)arg1 forKey:(id)arg2;
@property(retain, nonatomic) NSDictionary *dictionary;
- (id)keyForCurrentAccount;
- (id)initWithAccountPk:(id)arg1;
- (_Bool)hasUserAcceptedNSFWFor:(id)arg1;
- (void)persistNSFWAcceptedFor:(id)arg1;

@end

