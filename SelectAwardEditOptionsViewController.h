//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseViewController.h"

#import "UITextViewDelegate-Protocol.h"

@class BaseLabel, CharacterLimitTextView, NSString, SelectAwardEditOptions, UIImage, UIImageView, UIStackView;
@protocol SelectAwardEditOptionsViewControllerDelegate;

@interface SelectAwardEditOptionsViewController : BaseViewController <UITextViewDelegate>
{
    BaseLabel *_anonymousLabel;
    BaseLabel *_enterMessageLabel;
    CharacterLimitTextView *_enterMessageTextView;
    UIStackView *_anonymousRowStackView;
    UIStackView *_optionsStackView;
    BaseLabel *_showUsernameLabel;
    UIStackView *_showUserNameRowStackView;
    UIImage *_checkbox;
    UIImage *_checkboxChecked;
    UIImageView *_publicToggle;
    UIImageView *_anonymousToggle;
    id <SelectAwardEditOptionsViewControllerDelegate> _delegate;
    SelectAwardEditOptions *_options;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SelectAwardEditOptions *options; // @synthesize options=_options;
@property(readonly, nonatomic) __weak id <SelectAwardEditOptionsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIImageView *anonymousToggle; // @synthesize anonymousToggle=_anonymousToggle;
@property(retain, nonatomic) UIImageView *publicToggle; // @synthesize publicToggle=_publicToggle;
- (id)lineSeparatorView;
@property(readonly, nonatomic) UIStackView *optionsStackView; // @synthesize optionsStackView=_optionsStackView;
- (id)createOptionRowStackViewWith:(id)arg1;
@property(readonly, nonatomic) UIStackView *anonymousRowStackView; // @synthesize anonymousRowStackView=_anonymousRowStackView;
@property(readonly, nonatomic) UIStackView *showUsernameRowStackView; // @synthesize showUsernameRowStackView=_showUserNameRowStackView;
@property(readonly, nonatomic) CharacterLimitTextView *enterMessageTextView; // @synthesize enterMessageTextView=_enterMessageTextView;
@property(readonly, nonatomic) BaseLabel *enterMessageLabel; // @synthesize enterMessageLabel=_enterMessageLabel;
@property(readonly, nonatomic) BaseLabel *anonymousLabel; // @synthesize anonymousLabel=_anonymousLabel;
@property(readonly, nonatomic) BaseLabel *showUsernameLabel; // @synthesize showUsernameLabel=_showUsernameLabel;
- (id)toggle:(_Bool)arg1;
- (id)iconNamed:(id)arg1;
@property(readonly, nonatomic) UIImage *checkbox; // @synthesize checkbox=_checkbox;
@property(readonly, nonatomic) UIImage *checkboxChecked; // @synthesize checkboxChecked=_checkboxChecked;
- (void)textViewDidChange:(id)arg1;
- (void)configureViewAppearance;
- (void)configureNavigationBarAppearance;
- (_Bool)prefersTabBarHidden;
- (void)backButtonDidTap:(id)arg1;
- (void)saveButtonDidTap:(id)arg1;
- (void)rowTapped:(id)arg1;
- (void)configureOptionsStackView;
- (void)configureNavigationItems;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithDelegate:(id)arg1 options:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

