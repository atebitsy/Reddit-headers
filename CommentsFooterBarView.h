//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RedditUI/BaseView.h>

@class BaseButton;
@protocol CommentsFooterBarViewDelegate;

@interface CommentsFooterBarView : BaseView
{
    id <CommentsFooterBarViewDelegate> _delegate;
    BaseButton *_button;
}

- (void).cxx_destruct;
@property(retain, nonatomic) BaseButton *button; // @synthesize button=_button;
@property(nonatomic) __weak id <CommentsFooterBarViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didTapButton:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

