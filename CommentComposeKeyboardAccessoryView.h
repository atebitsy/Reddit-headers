//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LinkKeyboardAccessoryView.h"

@class BaseButton, UIStackView, _TtC6Reddit25MetaEmoteActivationButton;
@protocol CommentComposeKeyboardAccessoryViewDelegate;

@interface CommentComposeKeyboardAccessoryView : LinkKeyboardAccessoryView
{
    _Bool _isEmoteComposeEnabled;
    _Bool _isGIFComposeEnabled;
    _Bool _isEmoteComposeKeyboardVisible;
    id <CommentComposeKeyboardAccessoryViewDelegate> _delegate;
    _TtC6Reddit25MetaEmoteActivationButton *_emoteActivationButton;
    BaseButton *_photosButton;
    BaseButton *_cameraButton;
    BaseButton *_gifButton;
    UIStackView *_rightStackView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIStackView *rightStackView; // @synthesize rightStackView=_rightStackView;
@property(retain, nonatomic) BaseButton *gifButton; // @synthesize gifButton=_gifButton;
@property(retain, nonatomic) BaseButton *cameraButton; // @synthesize cameraButton=_cameraButton;
@property(retain, nonatomic) BaseButton *photosButton; // @synthesize photosButton=_photosButton;
@property(nonatomic) _Bool isEmoteComposeKeyboardVisible; // @synthesize isEmoteComposeKeyboardVisible=_isEmoteComposeKeyboardVisible;
@property(nonatomic) _Bool isGIFComposeEnabled; // @synthesize isGIFComposeEnabled=_isGIFComposeEnabled;
@property(nonatomic) _Bool isEmoteComposeEnabled; // @synthesize isEmoteComposeEnabled=_isEmoteComposeEnabled;
@property(retain, nonatomic) _TtC6Reddit25MetaEmoteActivationButton *emoteActivationButton; // @synthesize emoteActivationButton=_emoteActivationButton;
@property(nonatomic) __weak id <CommentComposeKeyboardAccessoryViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)gifButtonTouched:(id)arg1;
- (void)emoteButtonTouched:(id)arg1;
- (void)cameraButtonTouched:(id)arg1;
- (void)photosButtonTouched:(id)arg1;
- (void)linkButtonTouched:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

