//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "VerticalLineView.h"

#import "ObjectObserverProtocol-Protocol.h"

@class BaseButton, Comment, HighlightableButton, NSString, StructuredStyle, UIButton, UILabel;
@protocol CommentCommandViewDelegate;

@interface CommentCommandView : VerticalLineView <ObjectObserverProtocol>
{
    _Bool _isInModMode;
    _Bool _isInModQueue;
    _Bool _isTopLevel;
    _Bool _isUserAModerator;
    BaseButton *_moreOptionButton;
    Comment *_comment;
    BaseButton *_overflowButton;
    BaseButton *_awardButton;
    BaseButton *_replyButton;
    BaseButton *_editButton;
    UILabel *_scoreLabel;
    UIButton *_upvoteButton;
    UIButton *_downvoteButton;
    BaseButton *_moderateButton;
    HighlightableButton *_approveButton;
    HighlightableButton *_deleteButton;
    HighlightableButton *_deleteAsSpamButton;
    HighlightableButton *_distinguishButton;
    StructuredStyle *_subredditStyling;
    id <CommentCommandViewDelegate> _delegate;
}

+ (struct CGSize)calculatedSizeWithData:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool isUserAModerator; // @synthesize isUserAModerator=_isUserAModerator;
@property(nonatomic) _Bool isTopLevel; // @synthesize isTopLevel=_isTopLevel;
@property(nonatomic) __weak id <CommentCommandViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) StructuredStyle *subredditStyling; // @synthesize subredditStyling=_subredditStyling;
@property(retain, nonatomic) HighlightableButton *distinguishButton; // @synthesize distinguishButton=_distinguishButton;
@property(retain, nonatomic) HighlightableButton *deleteAsSpamButton; // @synthesize deleteAsSpamButton=_deleteAsSpamButton;
@property(retain, nonatomic) HighlightableButton *deleteButton; // @synthesize deleteButton=_deleteButton;
@property(retain, nonatomic) HighlightableButton *approveButton; // @synthesize approveButton=_approveButton;
@property(retain, nonatomic) BaseButton *moderateButton; // @synthesize moderateButton=_moderateButton;
@property(retain, nonatomic) UIButton *downvoteButton; // @synthesize downvoteButton=_downvoteButton;
@property(retain, nonatomic) UIButton *upvoteButton; // @synthesize upvoteButton=_upvoteButton;
@property(retain, nonatomic) UILabel *scoreLabel; // @synthesize scoreLabel=_scoreLabel;
@property(retain, nonatomic) BaseButton *editButton; // @synthesize editButton=_editButton;
@property(retain, nonatomic) BaseButton *replyButton; // @synthesize replyButton=_replyButton;
@property(retain, nonatomic) BaseButton *awardButton; // @synthesize awardButton=_awardButton;
@property(retain, nonatomic) BaseButton *overflowButton; // @synthesize overflowButton=_overflowButton;
@property(nonatomic) _Bool isInModQueue; // @synthesize isInModQueue=_isInModQueue;
@property(nonatomic) _Bool isInModMode; // @synthesize isInModMode=_isInModMode;
@property(retain, nonatomic) Comment *comment; // @synthesize comment=_comment;
@property(readonly, nonatomic) BaseButton *moreOptionButton; // @synthesize moreOptionButton=_moreOptionButton;
- (void)didTapDistinguish;
- (void)didTapModerate;
- (void)didTapReply;
- (void)didTapEdit;
- (void)didTapAward;
- (void)didTapOverflow;
- (void)didTapDownvote;
- (void)didTapUpvote;
- (void)didTapDeleteAsSpam;
- (void)didTapDelete;
- (void)didTapApprove;
- (_Bool)isVoteIconStylingAllowed;
- (void)configureReplyAndEditButtons;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)updateContentViewsForData:(id)arg1;
- (void)updateLastVerticalLineColorForVoteState;
- (void)updateScoreLabelColor;
- (void)updateButtonImages;
- (void)updateContentViews;
- (void)updateContentViewsAnimated:(_Bool)arg1;
- (void)layoutSubviews;
- (void)layoutSubviewsForModMode:(struct CGSize)arg1;
- (void)configureViews;
- (void)configureWithData:(id)arg1 andStyling:(id)arg2 andDelegate:(id)arg3 isUserAModerator:(_Bool)arg4;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

