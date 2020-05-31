//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

@class BaseButton, BaseLabel, BaseView, NSArray, NSOrderedSet, NewsSubtopic, NewsTopic, UIScrollView;
@protocol FeedNewsTopicsViewDelegate;

@interface FeedNewsTopicsView : UICollectionReusableView
{
    _Bool _isAnimating;
    UIScrollView *_scrollView;
    NewsTopic *_selectedTopic;
    NewsSubtopic *_selectedSubtopic;
    double _displayAlpha;
    BaseView *_background;
    BaseLabel *_fullDateLabel;
    BaseLabel *_dateLabel;
    NSArray *_segmentControls;
    id <FeedNewsTopicsViewDelegate> _delegate;
    BaseButton *_personalizeControl;
    NSOrderedSet *_topics;
    double _settingControlTopY;
}

+ (double)compactViewHeight;
+ (double)viewHeight;
- (void).cxx_destruct;
@property(nonatomic) double settingControlTopY; // @synthesize settingControlTopY=_settingControlTopY;
@property(copy, nonatomic) NSOrderedSet *topics; // @synthesize topics=_topics;
@property(retain, nonatomic) BaseButton *personalizeControl; // @synthesize personalizeControl=_personalizeControl;
@property(nonatomic) __weak id <FeedNewsTopicsViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *segmentControls; // @synthesize segmentControls=_segmentControls;
@property(retain, nonatomic) BaseLabel *dateLabel; // @synthesize dateLabel=_dateLabel;
@property(retain, nonatomic) BaseLabel *fullDateLabel; // @synthesize fullDateLabel=_fullDateLabel;
@property(retain, nonatomic) BaseView *background; // @synthesize background=_background;
@property(nonatomic) _Bool isAnimating; // @synthesize isAnimating=_isAnimating;
@property(nonatomic) double displayAlpha; // @synthesize displayAlpha=_displayAlpha;
@property(retain, nonatomic) NewsSubtopic *selectedSubtopic; // @synthesize selectedSubtopic=_selectedSubtopic;
@property(retain, nonatomic) NewsTopic *selectedTopic; // @synthesize selectedTopic=_selectedTopic;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void)didTapView:(id)arg1;
- (void)dateDidChange:(id)arg1;
- (void)updatePersistentControls;
- (void)layoutSubviews;
- (void)updateFullDateLabelText;
- (void)updateWithSelectedTopic;
- (void)themeDidChange:(id)arg1;
- (void)didTapEdit:(id)arg1;
- (void)didTapTopic:(id)arg1;
- (id)topicControlWithTitle:(id)arg1;
- (void)configureWithTopics:(id)arg1 selectedTopic:(id)arg2 selectedSubtopic:(id)arg3 withDelegate:(id)arg4;
- (void)updateControlImages;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

