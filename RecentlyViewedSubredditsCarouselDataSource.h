//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CarouselDataSource-Protocol.h"
#import "CarouselDataSourceInternal-Protocol.h"

@class NSArray, NSError, NSString, RedditService;
@protocol TemplateParserContext;

@interface RecentlyViewedSubredditsCarouselDataSource : NSObject <CarouselDataSource, CarouselDataSourceInternal>
{
    id <TemplateParserContext> _templateContext;
    NSError *_lastError;
    RedditService *_service;
    NSArray *_carouselItems;
}

+ (id)listingCarouselItemsFromSubreddits:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *carouselItems; // @synthesize carouselItems=_carouselItems;
@property(readonly, nonatomic) RedditService *service; // @synthesize service=_service;
@property(readonly, nonatomic) NSError *lastError; // @synthesize lastError=_lastError;
@property(readonly, nonatomic) __weak id <TemplateParserContext> templateContext; // @synthesize templateContext=_templateContext;
- (_Bool)hasMoreContent;
- (void)filterCarouselItems;
- (void)fetchCarouselItemsWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithService:(id)arg1 subreddits:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

