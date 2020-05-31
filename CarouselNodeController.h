//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ASCollectionDataSource-Protocol.h"
#import "ASCollectionDelegate-Protocol.h"
#import "CarouselItemCompactPostNodeDelegate-Protocol.h"
#import "CarouselItemNodeDelegate-Protocol.h"
#import "CarouselItemPostViewDelegate-Protocol.h"
#import "CarouselItemSubredditNodeDelegate-Protocol.h"

@class Carousel, CarouselNode, NSArray, NSDate, NSIndexPath, NSMutableArray, NSMutableSet, NSString, UICollectionView;
@protocol CarouselNodeDelegate, ViewContext;

@interface CarouselNodeController : NSObject <CarouselItemNodeDelegate, CarouselItemCompactPostNodeDelegate, CarouselItemPostViewDelegate, CarouselItemSubredditNodeDelegate, ASCollectionDataSource, ASCollectionDelegate>
{
    id <CarouselNodeDelegate> _delegate;
    NSArray *_registeredCellClasses;
    CarouselNode *_node;
    Carousel *_carousel;
    id <ViewContext> _viewContext;
    NSArray *_currentObjects;
    NSMutableSet *_itemsSeen;
    NSIndexPath *_maxScrollIndexPath;
    NSDate *_didBecomeVisibleTime;
    NSMutableArray *_keyValueObservations;
}

+ (id)placeholderColorForIndex:(unsigned long long)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *keyValueObservations; // @synthesize keyValueObservations=_keyValueObservations;
@property(retain, nonatomic) NSDate *didBecomeVisibleTime; // @synthesize didBecomeVisibleTime=_didBecomeVisibleTime;
@property(retain, nonatomic) NSIndexPath *maxScrollIndexPath; // @synthesize maxScrollIndexPath=_maxScrollIndexPath;
@property(retain, nonatomic) NSMutableSet *itemsSeen; // @synthesize itemsSeen=_itemsSeen;
@property(copy, nonatomic) NSArray *currentObjects; // @synthesize currentObjects=_currentObjects;
@property(readonly, nonatomic) id <ViewContext> viewContext; // @synthesize viewContext=_viewContext;
@property(retain, nonatomic) Carousel *carousel; // @synthesize carousel=_carousel;
@property(retain, nonatomic) CarouselNode *node; // @synthesize node=_node;
@property(readonly, nonatomic) NSArray *registeredCellClasses; // @synthesize registeredCellClasses=_registeredCellClasses;
@property(readonly, nonatomic) __weak id <CarouselNodeDelegate> delegate; // @synthesize delegate=_delegate;
- (void)addHideKeyValueObservationForCarouselItem:(id)arg1;
- (void)carouselItemPostView:(id)arg1 didTapVideoCallToAction:(unsigned long long)arg2;
- (void)carouselItemPostView:(id)arg1 didTapSubscribe:(id)arg2;
- (void)carouselItemPostView:(id)arg1 didTapSubreddit:(id)arg2;
- (void)carouselItemPostView:(id)arg1 didTapDomainURLWithCarouselItem:(id)arg2 withURL:(id)arg3;
- (void)carouselItemSubredditNode:(id)arg1 didTapSubscribe:(id)arg2;
- (void)didEndDisplaying;
- (void)didBecomeFullyVisible;
- (void)willBeginDisplaying;
- (void)carouselItemCompactPostNode:(id)arg1 didTapSubreddit:(id)arg2;
- (void)carouselItemCompactPostNode:(id)arg1 didTapComment:(id)arg2;
- (void)carouselItemNode:(id)arg1 didHideItem:(id)arg2;
- (void)didTapSeeMoreButton:(id)arg1;
- (CDStruct_90e057aa)collectionNode:(id)arg1 constrainedSizeForItemAtIndexPath:(id)arg2;
- (double)offsetForPage:(long long)arg1;
- (void)scrollToPage:(long long)arg1 animated:(_Bool)arg2;
@property(readonly, nonatomic) UICollectionView *collectionView;
- (void)animateCardFromCollectionView:(id)arg1 item:(id)arg2;
- (id)carouselContainerNode;
- (long long)collectionNode:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionNode:(id)arg1;
- (CDUnknownBlockType)collectionNode:(id)arg1 nodeBlockForItemAtIndexPath:(id)arg2;
- (void)collectionNode:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionNode:(id)arg1 willDisplayItemWithNode:(id)arg2;
- (void)didLoad;
- (void)reloadCarousel;
- (id)initWithViewContext:(id)arg1 carousel:(id)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

