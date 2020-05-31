//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <RedditCore/NSCopying-Protocol.h>

@class NSArray, NSDate, NSString;

@interface PostPoll : NSObject <NSCopying>
{
    NSString *_selectedOptionId;
    NSDate *_votingEndsAt;
    NSArray *_options;
    long long _totalVoteCount;
}

@property(nonatomic) long long totalVoteCount; // @synthesize totalVoteCount=_totalVoteCount;
@property(copy, nonatomic) NSArray *options; // @synthesize options=_options;
@property(readonly, copy, nonatomic) NSDate *votingEndsAt; // @synthesize votingEndsAt=_votingEndsAt;
@property(copy, nonatomic) NSString *selectedOptionId; // @synthesize selectedOptionId=_selectedOptionId;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)updatedPollWithOptionsData:(id)arg1 selectedOptionId:(id)arg2;
- (id)initWithData:(id)arg1;
- (id)initWithGraphQLData:(id)arg1;

@end
