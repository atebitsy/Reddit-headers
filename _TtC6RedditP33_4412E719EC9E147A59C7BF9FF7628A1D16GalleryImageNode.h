//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AsyncDisplayKit/ASCellNode.h>

#import "ASNetworkImageNodeDelegate-Protocol.h"

@interface _TtC6RedditP33_4412E719EC9E147A59C7BF9FF7628A1D16GalleryImageNode : ASCellNode <ASNetworkImageNodeDelegate>
{
    // Error parsing type: , name: imageNode
    // Error parsing type: , name: loadingIndicatorNode
    // Error parsing type: , name: gradientNode
    // Error parsing type: , name: imageURL
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithViewControllerBlock:(CDUnknownBlockType)arg1 didLoadBlock:(CDUnknownBlockType)arg2;
- (void)imageNodeDidStartFetchingData:(id)arg1;
- (void)imageNode:(id)arg1 didFailWithError:(id)arg2;
- (void)imageNode:(id)arg1 didLoadImage:(id)arg2;
- (id)layoutSpecThatFits:(CDStruct_90e057aa)arg1;
- (void)imageNodeTapped;

@end
