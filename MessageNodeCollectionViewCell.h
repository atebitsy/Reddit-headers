//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class ChatMessageCellNode;

@interface MessageNodeCollectionViewCell : UICollectionViewCell
{
    ChatMessageCellNode *_messageNode;
}

+ (struct CGSize)calculatedSizeWithAccountContext:(id)arg1 data:(id)arg2 forWidth:(double)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) ChatMessageCellNode *messageNode; // @synthesize messageNode=_messageNode;
- (void)layoutSubviews;
- (void)configureWithAccountContext:(id)arg1 message:(id)arg2 channel:(id)arg3;

@end

