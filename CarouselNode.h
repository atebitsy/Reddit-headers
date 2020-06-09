//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseFeedDisplayNode.h"

@class ASCollectionNode, ASImageNode, BaseButtonNode, Carousel, CarouselNodeController;

@interface CarouselNode : BaseFeedDisplayNode
{
    _Bool _isPreviewing;
    _Bool _isTransitioning;
    Carousel *_carousel;
    ASCollectionNode *_collectionNode;
    CarouselNodeController *_nodeController;
    BaseButtonNode *_seeMoreButton;
    ASImageNode *_seeMoreArrowNode;
    struct CGSize _itemSize;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isTransitioning; // @synthesize isTransitioning=_isTransitioning;
@property(retain, nonatomic) ASImageNode *seeMoreArrowNode; // @synthesize seeMoreArrowNode=_seeMoreArrowNode;
@property(retain, nonatomic) BaseButtonNode *seeMoreButton; // @synthesize seeMoreButton=_seeMoreButton;
@property(nonatomic) struct CGSize itemSize; // @synthesize itemSize=_itemSize;
@property(nonatomic) __weak CarouselNodeController *nodeController; // @synthesize nodeController=_nodeController;
@property(retain, nonatomic) ASCollectionNode *collectionNode; // @synthesize collectionNode=_collectionNode;
@property(retain, nonatomic) Carousel *carousel; // @synthesize carousel=_carousel;
@property(nonatomic) _Bool isPreviewing; // @synthesize isPreviewing=_isPreviewing;
- (void)didExitFullyVisibleStateWithVisibilityContext:(id)arg1;
- (void)didEnterFullyVisibleStateWithVisibilityContext:(id)arg1;
- (id)collectionView;
- (id)layoutSpecThatFits:(CDStruct_90e057aa)arg1;
- (double)calculateCollectionViewHeightForConstrainedSize:(CDStruct_90e057aa)arg1;
- (void)configureTextNodes;
- (void)configureNodes;
- (void)didLoad;
- (id)initWithViewContext:(id)arg1 carouselNodeController:(id)arg2;

@end

