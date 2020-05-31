//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class Account, AnalyticsManager, NSString;

@interface PremiumMarketingEventLogger : NSObject
{
    _Bool _didLogScreenViewEvent;
    Account *_account;
    NSString *_correlationId;
    AnalyticsManager *_analyticsManager;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool didLogScreenViewEvent; // @synthesize didLogScreenViewEvent=_didLogScreenViewEvent;
@property(readonly, nonatomic) AnalyticsManager *analyticsManager; // @synthesize analyticsManager=_analyticsManager;
@property(readonly, nonatomic) NSString *correlationId; // @synthesize correlationId=_correlationId;
@property(readonly, nonatomic) Account *account; // @synthesize account=_account;
- (id)eventWithSource:(id)arg1 action:(id)arg2 noun:(id)arg3;
- (void)logViewPurchaseSuccessEventWithGoldProduct:(id)arg1 transactionId:(id)arg2;
- (void)logViewPurchaseProcessingEventWithGoldProduct:(id)arg1;
- (void)logClickManagePremiumButton;
- (void)logClickBuyPremiumButton;
- (void)logScreenViewEventWithReferralFromInFeedUnit:(_Bool)arg1;
- (id)initWithAccount:(id)arg1 correlationId:(id)arg2 analyticsManager:(id)arg3;
- (id)initWithAccount:(id)arg1 correlationId:(id)arg2;

@end

