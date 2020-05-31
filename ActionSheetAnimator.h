//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <RedditUI/UIViewControllerAnimatedTransitioning-Protocol.h>

@class NSString, UIViewController;
@protocol _TtP8RedditUI21ActionSheetAnimatable_;

@interface ActionSheetAnimator : NSObject <UIViewControllerAnimatedTransitioning>
{
    _Bool _presenting;
    UIViewController<_TtP8RedditUI21ActionSheetAnimatable_> *_viewController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIViewController<_TtP8RedditUI21ActionSheetAnimatable_> *viewController; // @synthesize viewController=_viewController;
@property(nonatomic) _Bool presenting; // @synthesize presenting=_presenting;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (id)initWithViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

