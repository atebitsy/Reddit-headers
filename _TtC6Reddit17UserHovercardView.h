//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RedditUI/BaseView.h>

@class User;
@protocol _TtP6Reddit20UserCardViewDelegate_;

@interface _TtC6Reddit17UserHovercardView : BaseView
{
    // Error parsing type: , name: delegate
    // Error parsing type: , name: user
    // Error parsing type: , name: variant
    // Error parsing type: , name: actionTableHeightConstraint
    // Error parsing type: , name: viewContext
    // Error parsing type: , name: actions
    // Error parsing type: , name: allActions
    // Error parsing type: , name: isUserBanned
    // Error parsing type: , name: isUserMuted
    // Error parsing type: , name: bannerGradientLayer
    // Error parsing type: , name: closeButton
    // Error parsing type: , name: blockButton
    // Error parsing type: , name: bannerImageView
    // Error parsing type: , name: avatarImageView
    // Error parsing type: , name: contentStackView
    // Error parsing type: , name: innerContentStackView
    // Error parsing type: , name: displayNameChevronStackView
    // Error parsing type: , name: displayNameLabel
    // Error parsing type: , name: chevronImageView
    // Error parsing type: , name: usernameAndAgeLabel
    // Error parsing type: , name: descriptionLabel
    // Error parsing type: , name: userKarmaView
    // Error parsing type: , name: spacerView
    // Error parsing type: , name: messageStackView
    // Error parsing type: , name: messageTextButton
    // Error parsing type: , name: quickChatButton
    // Error parsing type: , name: actionsTableView
    // Error parsing type: , name: userActivityIndicator
    // Error parsing type: , name: actionsActivityIndicator
}

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)didTapQuickChat;
- (void)didTapMessage;
- (void)didTapAvatarImageView;
- (void)didTapBannerImageView;
- (void)didTapNameLabel;
- (void)didTapBlock;
- (void)didTapClose;
- (void)didTapInvite;
- (void)didTapFlair;
- (void)didTapMute;
- (void)didTapBan;
- (void)layoutSubviews;
- (void)configureWithUser:(id)arg1 subreddit:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithViewContext:(id)arg1;
@property(nonatomic, retain) User *user; // @synthesize user;
@property(nonatomic) __weak id <_TtP6Reddit20UserCardViewDelegate_> delegate; // @synthesize delegate;

@end

