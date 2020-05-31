//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RedditUI/BaseView.h>

#import "ReusableContentView-Protocol.h"

@class BaseButton, BaseImageView, BaseLabel, NSLayoutConstraint, NewsTopic, UIView;
@protocol NewsPersonalizeViewDataSource, NewsPersonalizeViewDelegate;

@interface NewsPersonalizeView : BaseView <ReusableContentView>
{
    _Bool _shouldBeExpanded;
    _Bool _hasUserPersonalizedNews;
    _Bool _isEditing;
    BaseButton *_selectButton;
    NewsTopic *_newsTopic;
    id <NewsPersonalizeViewDataSource> _dataSource;
    id <NewsPersonalizeViewDelegate> _delegate;
    BaseLabel *_titleLabel;
    BaseButton *_subtitleButton;
    BaseImageView *_iconView;
    UIView *_subtopicsViews;
    NSLayoutConstraint *_iconBottomConstraint;
    NSLayoutConstraint *_titleLabelTopAnchorConstraint;
    NSLayoutConstraint *_titleLabelCenterYConstraint;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSLayoutConstraint *titleLabelCenterYConstraint; // @synthesize titleLabelCenterYConstraint=_titleLabelCenterYConstraint;
@property(retain, nonatomic) NSLayoutConstraint *titleLabelTopAnchorConstraint; // @synthesize titleLabelTopAnchorConstraint=_titleLabelTopAnchorConstraint;
@property(retain, nonatomic) NSLayoutConstraint *iconBottomConstraint; // @synthesize iconBottomConstraint=_iconBottomConstraint;
@property(retain, nonatomic) UIView *subtopicsViews; // @synthesize subtopicsViews=_subtopicsViews;
@property(retain, nonatomic) BaseImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) BaseButton *subtitleButton; // @synthesize subtitleButton=_subtitleButton;
@property(retain, nonatomic) BaseLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) _Bool isEditing; // @synthesize isEditing=_isEditing;
@property(nonatomic) _Bool hasUserPersonalizedNews; // @synthesize hasUserPersonalizedNews=_hasUserPersonalizedNews;
@property(nonatomic) _Bool shouldBeExpanded; // @synthesize shouldBeExpanded=_shouldBeExpanded;
@property(nonatomic) __weak id <NewsPersonalizeViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <NewsPersonalizeViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) NewsTopic *newsTopic; // @synthesize newsTopic=_newsTopic;
@property(retain, nonatomic) BaseButton *selectButton; // @synthesize selectButton=_selectButton;
- (void)didChangeCollapseState;
- (void)didChangeNewsSubtopicSelection:(id)arg1;
- (void)didChangeNewsTopicSelection;
- (void)didTapNewsTopicView;
- (void)layoutSubTopicsIfNeeded;
- (void)updateSubtopicControl:(id)arg1 withSubtopic:(id)arg2;
- (void)updateDisplayForSubtopic:(id)arg1;
- (id)plainEditString;
- (id)subtopicEditString;
- (void)configureSubtitle;
- (void)layoutSubtitleIfNeeded;
- (void)updateNewsTopicSelection;
- (void)updateUI;
- (void)cellWillTransitionToState:(unsigned long long)arg1;
- (void)prepareContentViewForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end

