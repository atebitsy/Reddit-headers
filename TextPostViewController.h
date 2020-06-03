//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PostViewController.h"

#import "BaseTextViewDelegate-Protocol.h"
#import "LinkViewControllerDelegate-Protocol.h"

@class BaseLabel, BaseScrollView, BaseTextView, NSString, UIView, _TtC6Reddit25PostKeyboardAccessoryView;

@interface TextPostViewController : PostViewController <BaseTextViewDelegate, LinkViewControllerDelegate>
{
    BaseScrollView *_wrapperScrollView;
    BaseTextView *_titleView;
    BaseTextView *_postView;
    UIView *_separatorView;
    _TtC6Reddit25PostKeyboardAccessoryView *_postKeyboardAccessoryView;
    BaseLabel *_mainErrorView;
    BaseLabel *_titleErrorView;
    BaseLabel *_flairErrorView;
    BaseLabel *_postErrorView;
    UIView *_titleErrorSeparator;
    UIView *_postErrorSeparator;
    NSString *_postViewPlaceholder;
    NSString *_titleViewPlaceholder;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *titleViewPlaceholder; // @synthesize titleViewPlaceholder=_titleViewPlaceholder;
@property(readonly, nonatomic) NSString *postViewPlaceholder; // @synthesize postViewPlaceholder=_postViewPlaceholder;
@property(retain, nonatomic) UIView *postErrorSeparator; // @synthesize postErrorSeparator=_postErrorSeparator;
@property(retain, nonatomic) UIView *titleErrorSeparator; // @synthesize titleErrorSeparator=_titleErrorSeparator;
@property(retain, nonatomic) BaseLabel *postErrorView; // @synthesize postErrorView=_postErrorView;
@property(retain, nonatomic) BaseLabel *flairErrorView; // @synthesize flairErrorView=_flairErrorView;
@property(retain, nonatomic) BaseLabel *titleErrorView; // @synthesize titleErrorView=_titleErrorView;
@property(retain, nonatomic) BaseLabel *mainErrorView; // @synthesize mainErrorView=_mainErrorView;
@property(retain, nonatomic) _TtC6Reddit25PostKeyboardAccessoryView *postKeyboardAccessoryView; // @synthesize postKeyboardAccessoryView=_postKeyboardAccessoryView;
@property(retain, nonatomic) UIView *separatorView; // @synthesize separatorView=_separatorView;
@property(retain, nonatomic) BaseTextView *postView; // @synthesize postView=_postView;
@property(retain, nonatomic) BaseTextView *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) BaseScrollView *wrapperScrollView; // @synthesize wrapperScrollView=_wrapperScrollView;
- (id)analyticsPostComposerType;
- (id)analyticsScreenViewName;
- (void)linkViewControllerDidTapInsert:(id)arg1;
- (_Bool)textViewShouldChangeSize:(id)arg1;
- (void)textView:(id)arg1 didChangeToNewSize:(struct CGSize)arg2;
- (_Bool)baseTextView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (_Bool)textViewShouldBeginEditing:(id)arg1;
- (_Bool)resignFirstResponder;
- (_Bool)becomeFirstResponder;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)moveCaretIfPossibleInScrollView:(id)arg1;
- (void)didTapPostButton:(id)arg1;
- (id)populateSubmittedPost;
- (void)didTapCloseLink;
- (void)didTapLinkButton;
- (void)testAndShowUnallowedPostDisplayTypeWarning;
- (void)configureWithSubreddit:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)layoutTextFieldsInScroller;
- (void)layoutViewsForFrame:(struct CGRect)arg1;
- (id)inputAccessoryView;
- (void)viewDidLoad;
- (void)configureWithPostToEdit:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

