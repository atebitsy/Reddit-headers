//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface CoinDealInfo : NSObject
{
    long long _dealType;
    NSString *_title;
    NSString *_subtitle;
    long long _delay;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long delay; // @synthesize delay=_delay;
@property(readonly, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) long long dealType; // @synthesize dealType=_dealType;
- (id)initWithData:(id)arg1;

@end

