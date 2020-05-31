//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class IBGPoweredByView, NSLayoutConstraint, UIVisualEffectView;
@protocol IBGBaseHUDViewDelegate;

@interface IBGBaseHUDView : UIView
{
    _Bool _isLive;
    id <IBGBaseHUDViewDelegate> _delegate;
    UIView *_contentView;
    UIView *_containerView;
    UIVisualEffectView *_blurView;
    IBGPoweredByView *_poweredByView;
    NSLayoutConstraint *_containerWidthConstraint;
    NSLayoutConstraint *_containerHeightConstraint;
}

@property(nonatomic) _Bool isLive; // @synthesize isLive=_isLive;
@property(retain, nonatomic) NSLayoutConstraint *containerHeightConstraint; // @synthesize containerHeightConstraint=_containerHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *containerWidthConstraint; // @synthesize containerWidthConstraint=_containerWidthConstraint;
@property(retain, nonatomic) IBGPoweredByView *poweredByView; // @synthesize poweredByView=_poweredByView;
@property(retain, nonatomic) UIVisualEffectView *blurView; // @synthesize blurView=_blurView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak id <IBGBaseHUDViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)updateTraitConstraints;
- (double)regularContainerHeight;
- (void)animateToTransformation:(struct CGAffineTransform)arg1 completion:(CDUnknownBlockType)arg2 dismiss:(_Bool)arg3;
- (void)moveOutToEdge:(unsigned int)arg1;
- (void)animateBackToPlace;
- (void)dismiss;
- (void)didPanContainerView:(id)arg1;
- (void)didTapView:(id)arg1;
- (void)dismissFade;
- (void)animateIn;
- (void)setPrePresentAnimation;
- (void)installContent:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateConstraints;
- (id)initWithIsLive:(_Bool)arg1;

@end
