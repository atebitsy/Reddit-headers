//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface AnalyticsEventBuilder : NSObject
{
}

+ (id)screenViewTypeForFeedDisplayMode:(unsigned long long)arg1;
+ (id)mediaWithLiveStream:(id)arg1;
+ (id)popupWithId:(id)arg1 popupText:(id)arg2 buttonTitle:(id)arg3;
+ (id)postDraftForPost:(id)arg1;
+ (id)postDraftForDraft:(id)arg1;
+ (id)customFeedForCustomFeed:(id)arg1;
+ (id)userSubredditWithSubreddit:(id)arg1 modPermissions:(unsigned long long)arg2;
+ (id)userSubredditWithSubreddit:(id)arg1;
+ (id)actionInfoWithReason:(id)arg1;
+ (id)actionInfoWithReasonError:(id)arg1;
+ (id)spellSuggestionSearchWithSearchTerm:(id)arg1;
+ (id)relatedMetaSearchWithSearchTerm:(id)arg1;
+ (id)metaSearchWithTrendingSearch:(id)arg1;
+ (id)visibilityForVisibilityContext:(id)arg1;
+ (id)visibilityForVisibilityInput:(id)arg1;
+ (id)metaFlairForSubredditCategory:(id)arg1;
+ (id)postFlairForPostFlair:(id)arg1;
+ (id)urlParsedWithUtmParameters:(id)arg1;
+ (id)discoveryUnitWithViewModel:(id)arg1;
+ (id)carouselWithCarousel:(id)arg1;
+ (id)profileWithUser:(id)arg1;
+ (id)timerWithType:(id)arg1 time:(long long)arg2;
+ (id)timerWithType:(id)arg1;
+ (id)analyticsParamForFeedRange:(unsigned long long)arg1;
+ (id)currentBrowserTypeName:(id)arg1;
+ (id)analyticsPlatformWithAppSettings:(id)arg1;
+ (id)mediaWithHlsPlayer:(id)arg1;
+ (id)listingWithCommentDepth:(id)arg1;
+ (id)listingWithCommentSort:(unsigned long long)arg1 previousCommentSort:(unsigned long long)arg2 source:(id)arg3;
+ (id)listingWithFeedSort:(unsigned long long)arg1 previousFeedSort:(unsigned long long)arg2 source:(id)arg3;
+ (id)listingWithFeedItems:(id)arg1;
+ (id)listingWithFeedItems:(id)arg1 feedSort:(unsigned long long)arg2 feedRange:(unsigned long long)arg3;
+ (id)chatTypeStringWithChannel:(id)arg1;
+ (id)chatWithChannel:(id)arg1;
+ (id)subredditWithName:(id)arg1 subredditId:(id)arg2;
+ (id)subredditWithSubreddit:(id)arg1;
+ (id)commentWithComment:(id)arg1;
+ (id)postCollectionWithPostCollection:(id)arg1;
+ (id)displayLayoutForPostCollectionDisplayType:(long long)arg1;
+ (id)eventStateForPostEventInfo:(id)arg1;
+ (id)postEventInfoWithPostEventInfo:(id)arg1;
+ (id)postDisplayTypeForPost:(id)arg1;
+ (id)postWithSubmittedCrossPost:(id)arg1 originalPost:(id)arg2;
+ (id)postWithPost:(id)arg1;
+ (id)actionInfoWithPageType:(id)arg1 position:(id)arg2;
+ (void)buildUpEvent:(id)arg1 withData:(id)arg2;
+ (id)paymentWithGoldProduct:(id)arg1;
+ (id)goldPurchaseWithGoldProduct:(id)arg1;
+ (id)userForGoldEventWithAccount:(id)arg1;

@end

