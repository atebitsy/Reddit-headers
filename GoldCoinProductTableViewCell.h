//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Economy/GoldProductTableViewCell.h>

@class UIButton, UIImageView, UILabel, UIView;

@interface GoldCoinProductTableViewCell : GoldProductTableViewCell
{
    UILabel *_optionLabel;
    UIView *_containerView;
    UIImageView *_productImageView;
    UIImageView *_bonusBackgroundImageView;
    UILabel *_bonusLabel;
    UILabel *_coinValueLabel;
    UILabel *_baseCoinValueLabel;
    UILabel *_descriptionLabel;
    UIButton *_purchaseButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *purchaseButton; // @synthesize purchaseButton=_purchaseButton;
@property(retain, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) UILabel *baseCoinValueLabel; // @synthesize baseCoinValueLabel=_baseCoinValueLabel;
@property(retain, nonatomic) UILabel *coinValueLabel; // @synthesize coinValueLabel=_coinValueLabel;
@property(retain, nonatomic) UILabel *bonusLabel; // @synthesize bonusLabel=_bonusLabel;
@property(retain, nonatomic) UIImageView *bonusBackgroundImageView; // @synthesize bonusBackgroundImageView=_bonusBackgroundImageView;
@property(retain, nonatomic) UIImageView *productImageView; // @synthesize productImageView=_productImageView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UILabel *optionLabel; // @synthesize optionLabel=_optionLabel;
- (void)setupViews;
- (void)setupSaleLabelWithCoins:(id)arg1;
- (void)handleCellDidTap:(id)arg1;
- (void)configureWithProduct:(id)arg1 action:(CDUnknownBlockType)arg2;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

