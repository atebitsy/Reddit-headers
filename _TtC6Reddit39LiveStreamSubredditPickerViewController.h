//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "_TtP8RedditUI33BottomSheetViewControllerDelegate_-Protocol.h"

@interface _TtC6Reddit39LiveStreamSubredditPickerViewController : UIViewController <_TtP8RedditUI33BottomSheetViewControllerDelegate_>
{
    // Error parsing type: , name: constants
    // Error parsing type: , name: tableView
    // Error parsing type: , name: header
    // Error parsing type: , name: separator
    // Error parsing type: , name: closeButton
    // Error parsing type: , name: expandButton
    // Error parsing type: , name: headerTitle
    // Error parsing type: , name: activityIndicator
    // Error parsing type: , name: presenter
    // Error parsing type: , name: delegate
    // Error parsing type: , name: theme
    // Error parsing type: , name: isExpanded
}

- (void).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)didExpandToFullSheet;
- (void)onExpandToFullSheet;
- (void)willExpandToFullSheet;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)didTapExpand;
- (void)didTapClose;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithCoder:(id)arg1;

@end

