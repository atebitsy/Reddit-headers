//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSString;

@interface IBGSurveyThankYouModel : NSManagedObject
{
}

+ (id)allConfigWithAppStoreDisabledWithContext:(id)arg1;
+ (id)detractorConfigWithAppStoreDisabledWithContext:(id)arg1;
+ (id)passiveConfigWithAppStoreEnabledWithContext:(id)arg1;
+ (id)promoterConfigWithAppStoreEnabledWithContext:(id)arg1;
+ (id)thankYouModelWithType:(unsigned long long)arg1 withContext:(id)arg2;
+ (id)surveyThankYouModelsWithArray:(id)arg1 withContext:(id)arg2;
- (void)setWithConfig:(id)arg1;

// Remaining properties
@property(copy, nonatomic) NSString *callToActionText; // @dynamic callToActionText;
@property(nonatomic) _Bool isAppStoreEnabled; // @dynamic isAppStoreEnabled;
@property(copy, nonatomic) NSString *message; // @dynamic message;
@property(copy, nonatomic) NSString *title; // @dynamic title;
@property(copy, nonatomic) NSString *userClass; // @dynamic userClass;

@end

