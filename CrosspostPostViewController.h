//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TextPostViewController.h"

@class FeedPostCrosspostView, Post;

@interface CrosspostPostViewController : TextPostViewController
{
    FeedPostCrosspostView *_crosspostablePostView;
    Post *_post;
}

- (void).cxx_destruct;
@property(retain, nonatomic) Post *post; // @synthesize post=_post;
@property(retain, nonatomic) FeedPostCrosspostView *crosspostablePostView; // @synthesize crosspostablePostView=_crosspostablePostView;
- (void)willResignResponderAndDismiss;
- (void)didTapPostButton:(id)arg1;
- (void)didTapDropDown;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)layoutTextFieldsInScroller;
- (id)postView;
- (void)viewDidLoad;
@property(readonly, nonatomic) Post *originalPost;
- (void)testAndShowUnallowedPostTypeWarning;
- (void)configureWithSubreddit:(id)arg1 withCrosspostablePostId:(id)arg2 withFeedPostOptions:(id)arg3 withDelegate:(id)arg4;
- (void)viewDidAppear:(_Bool)arg1;
- (void)dealloc;

@end

