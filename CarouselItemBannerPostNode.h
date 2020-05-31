//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CarouselItemNode.h"

@class ASDisplayNode, ASNetworkImageNode, ASTextNode, SubscribableButtonNode;

@interface CarouselItemBannerPostNode : CarouselItemNode
{
    SubscribableButtonNode *_subredditIconNode;
    ASTextNode *_metadataTextNode;
    ASTextNode *_titleTextNode;
    ASNetworkImageNode *_bannerNode;
    ASDisplayNode *_gradientNode;
}

- (void).cxx_destruct;
@property(retain, nonatomic) ASDisplayNode *gradientNode; // @synthesize gradientNode=_gradientNode;
@property(retain, nonatomic) ASNetworkImageNode *bannerNode; // @synthesize bannerNode=_bannerNode;
@property(retain, nonatomic) ASTextNode *titleTextNode; // @synthesize titleTextNode=_titleTextNode;
@property(retain, nonatomic) ASTextNode *metadataTextNode; // @synthesize metadataTextNode=_metadataTextNode;
@property(retain, nonatomic) SubscribableButtonNode *subredditIconNode; // @synthesize subredditIconNode=_subredditIconNode;
- (id)imageURLForPost:(id)arg1;
- (id)layoutSpecThatFits:(CDStruct_90e057aa)arg1;
- (void)configureNodes;
- (id)createGradientNode;
- (void)createNodes;
- (id)initWithCarouselItem:(id)arg1 viewContext:(id)arg2;

@end

