//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RedditUI/BaseCollectionViewCell.h>

@class NotificationView;

@interface NotificationCell : BaseCollectionViewCell
{
    NotificationView *_mainContentView;
}

+ (struct CGSize)calculatedSizeForData:(id)arg1 collectionViewWidth:(double)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NotificationView *mainContentView; // @synthesize mainContentView=_mainContentView;
- (void)prepareForReuse;
- (void)configureWithData:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

