//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <Instabug/IBGSurveyConditionsLoader-Protocol.h>

@class NSDate, NSString;

@interface IBGSDKConditionsLoader : NSObject <IBGSurveyConditionsLoader>
{
    NSString *_latestCountryCode;
    NSDate *_dateOfLatestCountryCodeRequest;
    long long _lastCountryCodeRequestTTL;
}

@property(nonatomic) long long lastCountryCodeRequestTTL; // @synthesize lastCountryCodeRequestTTL=_lastCountryCodeRequestTTL;
@property(retain, nonatomic) NSDate *dateOfLatestCountryCodeRequest; // @synthesize dateOfLatestCountryCodeRequest=_dateOfLatestCountryCodeRequest;
@property(retain, nonatomic) NSString *latestCountryCode; // @synthesize latestCountryCode=_latestCountryCode;
- (void).cxx_destruct;
- (_Bool)shouldSendCountryRequest;
- (id)surveyConditions;
- (void)surveyConditionsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)init;

@end
