//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RedditUI/BaseTableViewCell.h>

@class GoldProduct;

@interface GoldProductTableViewCell : BaseTableViewCell
{
    GoldProduct *_product;
    CDUnknownBlockType _action;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType action; // @synthesize action=_action;
@property(retain, nonatomic) GoldProduct *product; // @synthesize product=_product;
- (void)configureWithProduct:(id)arg1 action:(CDUnknownBlockType)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

