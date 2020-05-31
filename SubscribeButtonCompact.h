//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RedditUI/BaseView.h>

#import "RUIThemeUpdateCallbackProtocol-Protocol.h"

@class BaseImageView, NSString, UIImage;
@protocol SubscribeButtonCompactDelegate;

@interface SubscribeButtonCompact : BaseView <RUIThemeUpdateCallbackProtocol>
{
    _Bool _subscribed;
    id <SubscribeButtonCompactDelegate> _delegate;
    BaseImageView *_bottomImageView;
    BaseImageView *_topImageView;
    UIImage *_bottomImage;
    UIImage *_unsubscribedTopImage;
    UIImage *_subscribedTopImage;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImage *subscribedTopImage; // @synthesize subscribedTopImage=_subscribedTopImage;
@property(retain, nonatomic) UIImage *unsubscribedTopImage; // @synthesize unsubscribedTopImage=_unsubscribedTopImage;
@property(retain, nonatomic) UIImage *bottomImage; // @synthesize bottomImage=_bottomImage;
@property(retain, nonatomic) BaseImageView *topImageView; // @synthesize topImageView=_topImageView;
@property(retain, nonatomic) BaseImageView *bottomImageView; // @synthesize bottomImageView=_bottomImageView;
@property(nonatomic) _Bool subscribed; // @synthesize subscribed=_subscribed;
@property(nonatomic) __weak id <SubscribeButtonCompactDelegate> delegate; // @synthesize delegate=_delegate;
- (void)layoutSubviews;
- (void)didTap:(id)arg1;
- (void)themeDidChange:(id)arg1;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

