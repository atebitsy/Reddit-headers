//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "RootViewControllerDelegate-Protocol.h"

@class AccountManager, MainTabBarController, NSString, NSURL, RootViewController;

@interface AppFlowCoordinator : NSObject <RootViewControllerDelegate>
{
    AccountManager *_accountManager;
    RootViewController *_rootViewController;
    NSURL *_scheduledURL;
    NSURL *_pendingEmailVerificationURL;
    NSURL *_pushNotifURLToHandleAfterAccountSwitching;
}

+ (void)setupWithAccountManager:(id)arg1 rootViewController:(id)arg2;
+ (id)instance;
- (void).cxx_destruct;
@property(copy, nonatomic) NSURL *pushNotifURLToHandleAfterAccountSwitching; // @synthesize pushNotifURLToHandleAfterAccountSwitching=_pushNotifURLToHandleAfterAccountSwitching;
@property(copy, nonatomic) NSURL *pendingEmailVerificationURL; // @synthesize pendingEmailVerificationURL=_pendingEmailVerificationURL;
@property(copy, nonatomic) NSURL *scheduledURL; // @synthesize scheduledURL=_scheduledURL;
@property(readonly, nonatomic) RootViewController *rootViewController; // @synthesize rootViewController=_rootViewController;
@property(readonly, nonatomic) AccountManager *accountManager; // @synthesize accountManager=_accountManager;
- (void)handleEmailVerificationURL:(id)arg1 service:(id)arg2;
- (unsigned long long)pushNotificationPromptStyleWithService:(id)arg1;
- (void)navigateToURLIfPossible:(id)arg1;
- (_Bool)canProcessBranchURLWithMatchGuaranteed:(_Bool)arg1;
- (void)accountDidChange:(id)arg1;
- (void)pushNotificationWasTapped:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationDidFinishLaunching:(id)arg1;
- (void)rootViewControllerDidInstallNewMainTabBar;
- (void)showPushNotificationPromptIfNeededWithService:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)refreshConfigWithService:(id)arg1;
- (void)navigateToCachedURLIfPossible;
- (void)scheduleNavigatingToURL:(id)arg1;
- (void)scheduleNavigatingToBranchURL:(id)arg1 isMatchGuaranteed:(_Bool)arg2;
@property(readonly, nonatomic) MainTabBarController *mainTabController;
- (id)initWithAccountManager:(id)arg1 rootViewController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

