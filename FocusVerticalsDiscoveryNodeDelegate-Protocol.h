//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FocusVerticalsHeaderNodeDelegate-Protocol.h"
#import "FocusVerticalsPostNodeDelegate-Protocol.h"
#import "FocusVerticalsSubredditNodeDelegate-Protocol.h"

@class FocusVerticalsDiscoveryNode, VisibilityContext;

@protocol FocusVerticalsDiscoveryNodeDelegate <FocusVerticalsHeaderNodeDelegate, FocusVerticalsPostNodeDelegate, FocusVerticalsSubredditNodeDelegate>
- (void)focusVerticalsDiscoveryNode:(FocusVerticalsDiscoveryNode *)arg1 didUndoFeedback:(long long)arg2;
- (void)focusVerticalsDiscoveryNode:(FocusVerticalsDiscoveryNode *)arg1 didSelectFeedback:(long long)arg2;
- (void)focusVerticalsDiscoveryNodeDidTapCloseAndShowFeedbackNode:(FocusVerticalsDiscoveryNode *)arg1;
- (void)focusVerticalsDiscoveryNodeDidView:(FocusVerticalsDiscoveryNode *)arg1 visibilityContext:(VisibilityContext *)arg2;
- (void)focusVerticalsDiscoveryNodeDidTapClose:(FocusVerticalsDiscoveryNode *)arg1;
@end

