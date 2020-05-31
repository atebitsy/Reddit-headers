//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class Carousel, CarouselItem, CarouselNodeController, Comment, NSArray, NSObject, NSString, NSURL, Post;
@protocol Subscribable;

@protocol CarouselNodeDelegate <NSObject>
- (void)carouselNodeController:(CarouselNodeController *)arg1 performRemoveOfCarousel:(Carousel *)arg2 removalReason:(unsigned long long)arg3;
- (void)carouselNodeController:(CarouselNodeController *)arg1 didTapCallToAction:(unsigned long long)arg2 forPost:(Post *)arg3;
- (void)didViewCarouselNode:(CarouselNodeController *)arg1;
- (void)carouselNodeController:(CarouselNodeController *)arg1 performSeeMore:(Carousel *)arg2;
- (NSString *)analyticsScreenViewName;
- (void)carouselNodeController:(CarouselNodeController *)arg1 didViewCarouselItem:(CarouselItem *)arg2;
- (void)carouselNodeController:(CarouselNodeController *)arg1 carouselItem:(CarouselItem *)arg2 didTapSubscribe:(NSObject<Subscribable> *)arg3;
- (void)carouselNodeController:(CarouselNodeController *)arg1 didTapCarouselItem:(CarouselItem *)arg2 atIndex:(long long)arg3 carouselItems:(NSArray *)arg4;
- (void)carouselNodeController:(CarouselNodeController *)arg1 didHideCarouselItem:(CarouselItem *)arg2;

@optional
- (void)carouselNodeController:(CarouselNodeController *)arg1 didViewTitleObject:(NSObject *)arg2;
- (_Bool)carouselNodeControllerHasMoreContent:(CarouselNodeController *)arg1;
- (void)carouselNodeController:(CarouselNodeController *)arg1 didTapSubscribeFromTitleWithCarouselItem:(CarouselItem *)arg2 withSubreddit:(NSObject<Subscribable> *)arg3;
- (void)carouselNodeController:(CarouselNodeController *)arg1 didTapSubredditWithCarouselItem:(CarouselItem *)arg2 withSubreddit:(NSObject<Subscribable> *)arg3;
- (void)carouselNodeController:(CarouselNodeController *)arg1 didTapDomainURLWithCarouselItem:(CarouselItem *)arg2 withURL:(NSURL *)arg3;
- (void)carouselNodeController:(CarouselNodeController *)arg1 didTapComment:(Comment *)arg2 fromCarouselItem:(CarouselItem *)arg3;
@end

