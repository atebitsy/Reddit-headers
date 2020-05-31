//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class BaseButton, EmptyDogeView, NSArray, NSString, NSTimer, UIActivityIndicatorView, UICollectionView, UIStackView;
@protocol EmojiPickerViewDelegate;

@interface EmojiPickerView : UIView <UICollectionViewDelegate, UICollectionViewDataSource>
{
    id <EmojiPickerViewDelegate> _delegate;
    UICollectionView *_collectionView;
    NSArray *_sections;
    NSString *_subredditId;
    NSArray *_redditEmojis;
    NSArray *_subredditEmojis;
    UIStackView *_footerStackView;
    BaseButton *_customButton;
    BaseButton *_snoomojisButton;
    BaseButton *_backspaceButton;
    UIView *_spacerView;
    UIActivityIndicatorView *_firstLoadSpinner;
    EmptyDogeView *_emptyView;
    NSTimer *_timer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) EmptyDogeView *emptyView; // @synthesize emptyView=_emptyView;
@property(retain, nonatomic) UIActivityIndicatorView *firstLoadSpinner; // @synthesize firstLoadSpinner=_firstLoadSpinner;
@property(retain, nonatomic) UIView *spacerView; // @synthesize spacerView=_spacerView;
@property(retain, nonatomic) BaseButton *backspaceButton; // @synthesize backspaceButton=_backspaceButton;
@property(retain, nonatomic) BaseButton *snoomojisButton; // @synthesize snoomojisButton=_snoomojisButton;
@property(retain, nonatomic) BaseButton *customButton; // @synthesize customButton=_customButton;
@property(retain, nonatomic) UIStackView *footerStackView; // @synthesize footerStackView=_footerStackView;
@property(copy, nonatomic) NSArray *subredditEmojis; // @synthesize subredditEmojis=_subredditEmojis;
@property(copy, nonatomic) NSArray *redditEmojis; // @synthesize redditEmojis=_redditEmojis;
@property(retain, nonatomic) NSString *subredditId; // @synthesize subredditId=_subredditId;
@property(copy, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) __weak id <EmojiPickerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)backspace;
- (void)didLongPressBackspaceButton:(id)arg1;
- (void)didTapBackspaceButton:(id)arg1;
- (void)didTapSnoomojisButton:(id)arg1;
- (void)didTapCustomButton:(id)arg1;
- (id)dataSourceForSection:(long long)arg1;
- (id)emojiForIndexPath:(id)arg1;
- (void)updateSectionHighlight;
- (void)configureFooterView;
- (_Bool)hasRedditEmojisSection;
- (_Bool)hasSubredditEmojisSection;
- (void)scrollViewDidScroll:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)configureSections;
- (void)configureWithRedditEmojis:(id)arg1 subredditEmojis:(id)arg2;
- (void)setupConstraints;
- (id)initWithFrame:(struct CGRect)arg1 subredditId:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

