//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PostViewController.h"

#import "BaseTextViewDelegate-Protocol.h"
#import "UITextViewDelegate-Protocol.h"

@class BaseLabel, BaseScrollView, BaseTextView, NSString, UIView, _TtC6Reddit25PostKeyboardAccessoryView;

@interface LinkPostViewController : PostViewController <BaseTextViewDelegate, UITextViewDelegate>
{
    BaseScrollView *_wrapperScrollView;
    BaseTextView *_linkView;
    BaseTextView *_titleView;
    BaseLabel *_mainErrorView;
    BaseLabel *_titleErrorView;
    BaseLabel *_flairErrorView;
    BaseLabel *_postErrorView;
    UIView *_titleErrorSeparator;
    UIView *_postErrorSeparator;
    BaseLabel *_safeHarborLabel;
    UIView *_separatorView;
    _TtC6Reddit25PostKeyboardAccessoryView *_postKeyboardAccessoryView;
    NSString *_prefilledLinkUrl;
    NSString *_prefilledTitle;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *prefilledTitle; // @synthesize prefilledTitle=_prefilledTitle;
@property(copy, nonatomic) NSString *prefilledLinkUrl; // @synthesize prefilledLinkUrl=_prefilledLinkUrl;
@property(retain, nonatomic) _TtC6Reddit25PostKeyboardAccessoryView *postKeyboardAccessoryView; // @synthesize postKeyboardAccessoryView=_postKeyboardAccessoryView;
@property(retain, nonatomic) UIView *separatorView; // @synthesize separatorView=_separatorView;
@property(retain, nonatomic) BaseLabel *safeHarborLabel; // @synthesize safeHarborLabel=_safeHarborLabel;
@property(retain, nonatomic) UIView *postErrorSeparator; // @synthesize postErrorSeparator=_postErrorSeparator;
@property(retain, nonatomic) UIView *titleErrorSeparator; // @synthesize titleErrorSeparator=_titleErrorSeparator;
@property(retain, nonatomic) BaseLabel *postErrorView; // @synthesize postErrorView=_postErrorView;
@property(retain, nonatomic) BaseLabel *flairErrorView; // @synthesize flairErrorView=_flairErrorView;
@property(retain, nonatomic) BaseLabel *titleErrorView; // @synthesize titleErrorView=_titleErrorView;
@property(retain, nonatomic) BaseLabel *mainErrorView; // @synthesize mainErrorView=_mainErrorView;
@property(retain, nonatomic) BaseTextView *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) BaseTextView *linkView; // @synthesize linkView=_linkView;
@property(retain, nonatomic) BaseScrollView *wrapperScrollView; // @synthesize wrapperScrollView=_wrapperScrollView;
- (void)fetchLinkTitle:(id)arg1 success:(CDUnknownBlockType)arg2;
- (_Bool)wasLinkPasted;
- (id)analyticsPostComposerType;
- (id)analyticsScreenViewName;
- (_Bool)textViewShouldChangeSize:(id)arg1;
- (void)textView:(id)arg1 didChangeToNewSize:(struct CGSize)arg2;
- (_Bool)baseTextView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)configureWithSubreddit:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)moveCaretIfPossibleInScrollView:(id)arg1;
- (_Bool)resignFirstResponder;
- (id)inputAccessoryView;
- (void)didTapPostButton:(id)arg1;
- (id)populateSubmittedPost;
- (void)prefillWithTitle:(id)arg1 linkURL:(id)arg2;
- (void)layoutTextFieldsInScroller;
- (void)layoutViewsForFrame:(struct CGRect)arg1;
- (void)viewDidLoad;
- (void)configureWithPostToEdit:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

