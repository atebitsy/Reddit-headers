//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface SubredditEmoji : NSObject
{
    _Bool _isFlairAvailabilityModOnly;
    NSString *_name;
    NSURL *_url;
    NSString *_subredditId;
    unsigned long long _flairTemplateType;
}

+ (id)subredditEmojisFromData:(id)arg1 subredditId:(id)arg2;
@property(readonly, nonatomic) _Bool isFlairAvailabilityModOnly; // @synthesize isFlairAvailabilityModOnly=_isFlairAvailabilityModOnly;
@property(readonly, nonatomic) unsigned long long flairTemplateType; // @synthesize flairTemplateType=_flairTemplateType;
@property(readonly, copy, nonatomic) NSString *subredditId; // @synthesize subredditId=_subredditId;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithData:(id)arg1 name:(id)arg2 subredditId:(id)arg3;

@end
