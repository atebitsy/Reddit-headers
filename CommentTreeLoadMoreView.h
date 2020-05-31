//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "VerticalLineView.h"

@class BaseLabel, Comment, CommentTreeNode;
@protocol CommentTreeLoadMoreViewDelegate;

@interface CommentTreeLoadMoreView : VerticalLineView
{
    CommentTreeNode *_commentTreeNode;
    id <CommentTreeLoadMoreViewDelegate> _delegate;
    BaseLabel *_moreCommentLabel;
}

+ (struct CGSize)calculatedSizeWithData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) BaseLabel *moreCommentLabel; // @synthesize moreCommentLabel=_moreCommentLabel;
@property(nonatomic) __weak id <CommentTreeLoadMoreViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) CommentTreeNode *commentTreeNode; // @synthesize commentTreeNode=_commentTreeNode;
@property(readonly, nonatomic) Comment *comment;
- (void)didTapLabel:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (void)configureWithData:(id)arg1;
- (void)configureWithData:(id)arg1 andDelegate:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

