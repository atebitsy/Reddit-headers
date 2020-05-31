//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RedditUI/BaseCollectionViewCell.h>

@class ChatPostView;
@protocol ViewContext;

@interface ChatPostPickerCell : BaseCollectionViewCell
{
    ChatPostView *_postView;
    id <ViewContext> _viewContext;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <ViewContext> viewContext; // @synthesize viewContext=_viewContext;
@property(retain, nonatomic) ChatPostView *postView; // @synthesize postView=_postView;
- (void)configureWithViewContext:(id)arg1;
- (void)prepareForReuse;
- (void)commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

