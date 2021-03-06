//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HeaderBarView.h"

@class BaseButton;

@interface SortBarView : HeaderBarView
{
    _Bool _isModerator;
    _Bool _isInModMode;
    unsigned long long _feedSort;
    unsigned long long _feedRange;
    BaseButton *_dropdownButton;
    BaseButton *_modModeButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) BaseButton *modModeButton; // @synthesize modModeButton=_modModeButton;
@property(retain, nonatomic) BaseButton *dropdownButton; // @synthesize dropdownButton=_dropdownButton;
@property(nonatomic) _Bool isInModMode; // @synthesize isInModMode=_isInModMode;
@property(nonatomic) _Bool isModerator; // @synthesize isModerator=_isModerator;
@property(nonatomic) unsigned long long feedRange; // @synthesize feedRange=_feedRange;
@property(nonatomic) unsigned long long feedSort; // @synthesize feedSort=_feedSort;
- (id)imageNameForFeedSort:(unsigned long long)arg1 smallSize:(_Bool)arg2;
- (void)didTapModModeButton:(id)arg1;
- (void)didTapSortButton:(id)arg1;
- (void)setupAccessibility;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

