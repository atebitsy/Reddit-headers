//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "BaseModel-Protocol.h"
#import "IGListDiffable-Protocol.h"

@class NSArray, NSString;

@interface TrendingSearch : NSObject <BaseModel, IGListDiffable>
{
    _Bool _isWhiteListed;
    _Bool _isPromoted;
    NSString *_query;
    NSString *_displayText;
    NSArray *_trendingPosts;
    long long _subredditAppearances;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long subredditAppearances; // @synthesize subredditAppearances=_subredditAppearances;
@property(readonly, nonatomic) _Bool isPromoted; // @synthesize isPromoted=_isPromoted;
@property(readonly, nonatomic) _Bool isWhiteListed; // @synthesize isWhiteListed=_isWhiteListed;
@property(readonly, copy, nonatomic) NSArray *trendingPosts; // @synthesize trendingPosts=_trendingPosts;
@property(readonly, copy, nonatomic) NSString *displayText; // @synthesize displayText=_displayText;
@property(readonly, copy, nonatomic) NSString *query; // @synthesize query=_query;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
@property(readonly, nonatomic) NSString *identifier;
@property(readonly, copy, nonatomic) NSString *pk;
- (id)initWithQuery:(id)arg1 displayText:(id)arg2 trendingPosts:(id)arg3 isWhiteListed:(_Bool)arg4 subredditAppearances:(long long)arg5;
- (id)initWithQuery:(id)arg1 displayText:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

