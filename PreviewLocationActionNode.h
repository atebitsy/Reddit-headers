//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseFeedDisplayNode.h"

@class BaseButtonNode, Carousel;
@protocol PreviewLocationActionDelegate;

@interface PreviewLocationActionNode : BaseFeedDisplayNode
{
    Carousel *_carousel;
    BaseButtonNode *_allowLocationButtonNode;
    BaseButtonNode *_moreDetailsActionButtonNode;
    id <PreviewLocationActionDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <PreviewLocationActionDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) BaseButtonNode *moreDetailsActionButtonNode; // @synthesize moreDetailsActionButtonNode=_moreDetailsActionButtonNode;
@property(retain, nonatomic) BaseButtonNode *allowLocationButtonNode; // @synthesize allowLocationButtonNode=_allowLocationButtonNode;
@property(retain, nonatomic) Carousel *carousel; // @synthesize carousel=_carousel;
- (id)layoutSpecThatFits:(CDStruct_90e057aa)arg1;
- (void)allowLocationWasTapped:(id)arg1;
- (void)moreDetailsTapped:(id)arg1;
- (void)configureThemableNodes;
- (void)configureNodes;
- (id)initWithCarousel:(id)arg1 delegate:(id)arg2;

@end

