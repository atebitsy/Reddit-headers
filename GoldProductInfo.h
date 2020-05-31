//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CoinDealInfo, NSArray, NSNumber, NSString;

@interface GoldProductInfo : NSObject
{
    _Bool _isFeatured;
    long long _packageType;
    NSString *_productId;
    NSString *_productDescription;
    NSNumber *_baselineCoins;
    unsigned long long _coinValue;
    unsigned long long _bonusPercentage;
    NSString *_featuredLabel;
    unsigned long long _periodicalCoins;
    NSNumber *_signupBonusCoins;
    CoinDealInfo *_dealInfo;
    NSArray *_marketingMediaSources;
    NSArray *_purchaseSuccessMediaSources;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *purchaseSuccessMediaSources; // @synthesize purchaseSuccessMediaSources=_purchaseSuccessMediaSources;
@property(readonly, nonatomic) NSArray *marketingMediaSources; // @synthesize marketingMediaSources=_marketingMediaSources;
@property(readonly, nonatomic) CoinDealInfo *dealInfo; // @synthesize dealInfo=_dealInfo;
@property(readonly, nonatomic) NSNumber *signupBonusCoins; // @synthesize signupBonusCoins=_signupBonusCoins;
@property(readonly, nonatomic) unsigned long long periodicalCoins; // @synthesize periodicalCoins=_periodicalCoins;
@property(readonly, nonatomic) NSString *featuredLabel; // @synthesize featuredLabel=_featuredLabel;
@property(readonly, nonatomic) _Bool isFeatured; // @synthesize isFeatured=_isFeatured;
@property(readonly, nonatomic) unsigned long long bonusPercentage; // @synthesize bonusPercentage=_bonusPercentage;
@property(readonly, nonatomic) unsigned long long coinValue; // @synthesize coinValue=_coinValue;
@property(readonly, nonatomic) NSNumber *baselineCoins; // @synthesize baselineCoins=_baselineCoins;
@property(readonly, nonatomic) NSString *productDescription; // @synthesize productDescription=_productDescription;
@property(readonly, nonatomic) NSString *productId; // @synthesize productId=_productId;
@property(readonly, nonatomic) long long packageType; // @synthesize packageType=_packageType;
- (id)initWithPackageType:(long long)arg1 data:(id)arg2;

@end

