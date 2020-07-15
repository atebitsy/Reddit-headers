//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CLLocation, NSArray, NSDate, NSDictionary, NSString, NSUserDefaults, UNNotificationSettings;

@interface AppSettings : NSObject
{
    NSUserDefaults *_defaults;
}

+ (id)sharedSettings;
- (void).cxx_destruct;
@property(retain, nonatomic) NSUserDefaults *defaults; // @synthesize defaults=_defaults;
@property(nonatomic) _Bool hasSeenPredictionsIntro;
@property(nonatomic) _Bool reduceAwardsAnimations;
@property(retain, nonatomic) NSDictionary *anonymousBrowsingInfo;
@property(nonatomic) _Bool inAppPurchaseSkipReceiptValidation;
@property(nonatomic) _Bool inAppPurchaseForceDeferredTransaction;
@property(nonatomic) double surveyLastSeenTime;
- (long long)getCountForSurveyId:(id)arg1;
- (void)setCount:(long long)arg1 forSurveyId:(id)arg2;
- (void)resetSurveyCounts;
- (void)updatePropertiesForStreamingConfig:(id)arg1;
@property(nonatomic) long long streamingConfigViewerInitialHeartbeatDelaySeconds;
@property(nonatomic) double streamingConfigViewerHeartbeatInterval;
- (_Bool)shouldHideNewTagWithIdentifier:(id)arg1;
- (void)hideNewTagWithIdentifier:(id)arg1;
@property(copy, nonatomic) NSDictionary *mainTabConfiguration;
@property(nonatomic) long long sessionCountForNotificationPermissionPrompt;
@property(nonatomic) long long notificationPermissionPromptShownCount;
@property(retain, nonatomic) NSDate *lastDateNotificationPermissionPromptShown;
@property(nonatomic) unsigned long long appsFlyerLoggedEvent;
@property(nonatomic) _Bool isAppsFlyerDownvoteEventTracked;
@property(nonatomic) _Bool isAppsFlyerUpvoteEventTracked;
@property(retain, nonatomic) NSString *stagingProxyCookie;
@property(copy, nonatomic) UNNotificationSettings *pushNotificationSettings;
@property(copy, nonatomic) NSArray *tappedNotifications;
@property(copy, nonatomic) NSArray *receivedNotifications;
@property(copy, nonatomic) NSDate *lastMainFeedLoadDate;
@property(copy, nonatomic) NSString *nextCommentThreadButtonLocation;
@property(nonatomic) unsigned long long locationFilterMode;
@property(copy, nonatomic) NSString *lastLaunchedVersion;
@property(copy, nonatomic) NSArray *versionsFilteredFromReview;
@property(copy, nonatomic) NSDate *lastDatePromptedForRating;
@property(nonatomic) long long significantEventCount;
@property(nonatomic) long long appRatingSessionCount;
@property(copy, nonatomic) NSString *analyticsNotificationId;
@property(copy, nonatomic) NSString *mwebLoid;
@property(readonly, nonatomic) NSDate *installDate;
@property(copy, nonatomic) NSString *installTime;
@property(copy, nonatomic) NSString *mwebLoidCreatedTime;
@property(nonatomic) _Bool hasSeenNotificationsDeniedAlert;
@property(nonatomic) _Bool hasShownScreenshotWarningForBetaTesters;
@property(nonatomic) _Bool introViewDidShow;
@property(nonatomic) _Bool isBetaTester;
@property(readonly, nonatomic) _Bool disableAutoPlay;
@property(nonatomic) long long autoPlayVideoPreferenceType;
@property(nonatomic) long long externalLinkBrowser;
@property(nonatomic) _Bool enableSwipeToCollapse;
@property(nonatomic) _Bool showRecentCommunities;
@property(nonatomic) unsigned long long defaultFeedMode;
@property(nonatomic) long long fontSizeDelta;
- (long long)fallbackFontSize;
@property(copy, nonatomic) CLLocation *mostRecentLocation;
@property(retain, nonatomic) NSDate *overrideAutoDarkModeUntilDate;
@property(nonatomic) unsigned long long preferredDarkTheme;
@property(nonatomic) unsigned long long preferredLightTheme;
- (void)migratePreviousLightTheme;
@property(nonatomic) _Bool useDarkMode;
@property(nonatomic) _Bool isAutoDarkModeEnabled;
- (id)initWithUserDefaults:(id)arg1;

@end

