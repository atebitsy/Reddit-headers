//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RedditUI/BaseCollectionViewCell.h>

@class NewAwardBadgeView, UILabel, UIStackView, _TtC6Reddit16PremiumIndicator, _TtC6Reddit25AnimatableRemoteImageView;

@interface SelectAwardCollectionViewCell : BaseCollectionViewCell
{
    UIStackView *_contentStackView;
    _TtC6Reddit25AnimatableRemoteImageView *_iconImageView;
    UILabel *_nameLabel;
    UILabel *_priceLabel;
    UILabel *_timeLeftLabel;
    NewAwardBadgeView *_newBadge;
    _TtC6Reddit16PremiumIndicator *_premiumBadge;
}

+ (double)calculateHeightForViewModel:(id)arg1;
@property(retain, nonatomic) _TtC6Reddit16PremiumIndicator *premiumBadge; // @synthesize premiumBadge=_premiumBadge;
@property(retain, nonatomic) NewAwardBadgeView *newBadge; // @synthesize newBadge=_newBadge;
@property(retain, nonatomic) UILabel *timeLeftLabel; // @synthesize timeLeftLabel=_timeLeftLabel;
@property(retain, nonatomic) UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) _TtC6Reddit25AnimatableRemoteImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) UIStackView *contentStackView; // @synthesize contentStackView=_contentStackView;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1;
- (void)prepareForReuse;
- (void)configureWithViewModel:(id)arg1;
- (void)setupViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
