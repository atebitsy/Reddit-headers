//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface StreamingSubredditInfo : NSObject
{
    NSString *_subredditName;
    NSString *_subredditId;
    NSString *_subredditPrompt;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *subredditPrompt; // @synthesize subredditPrompt=_subredditPrompt;
@property(readonly, copy, nonatomic) NSString *subredditId; // @synthesize subredditId=_subredditId;
@property(readonly, copy, nonatomic) NSString *subredditName; // @synthesize subredditName=_subredditName;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSString *subredditVisualName;
- (id)initWithSubredditPromptData:(id)arg1;
- (id)initWithSubredditName:(id)arg1 subredditId:(id)arg2;

@end

