//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIViewController;

@interface CaptureKitCoordinator : NSObject
{
    UIViewController *_presentingViewController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
- (void)beginOnboardingFlowWithAccountContext:(id)arg1 fromSource:(id)arg2 shouldShowLoginButton:(_Bool)arg3 modalPresentationStyle:(long long)arg4 onDidFinish:(CDUnknownBlockType)arg5 onDidCancel:(CDUnknownBlockType)arg6;
- (void)beginRegistrationFlowWithAccountContext:(id)arg1 fromSource:(id)arg2 onDidFinish:(CDUnknownBlockType)arg3 onDidCancel:(CDUnknownBlockType)arg4;
- (void)beginLoginFlowWithAccountContext:(id)arg1 fromSource:(id)arg2 onDidFinish:(CDUnknownBlockType)arg3;
- (id)initWithPresentingViewController:(id)arg1;

@end

