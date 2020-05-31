//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseViewController.h"

#import "CaptureViewControllerDelegate-Protocol.h"
#import "IntroViewControllerDelegate-Protocol.h"
#import "MainTabBarControllerDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class AccountManager, CaptureViewController, FeedSpinnerView, IntroViewController, MainTabBarController, NSDictionary, NSString, UIView, UserDrawerViewController, _TtC6Reddit20AnonymousModeManager;
@protocol AccountContext, RootViewControllerDelegate;

@interface RootViewController : BaseViewController <IntroViewControllerDelegate, MainTabBarControllerDelegate, CaptureViewControllerDelegate, UIGestureRecognizerDelegate>
{
    _Bool _hasLoadedAtLeastOneChildViewController;
    _Bool _didInstallNewMainTabController;
    id <RootViewControllerDelegate> _delegate;
    MainTabBarController *_tabController;
    AccountManager *_accountManager;
    _TtC6Reddit20AnonymousModeManager *_anonymousModeManager;
    id <AccountContext> _accountContext;
    UserDrawerViewController *_userDrawerViewController;
    IntroViewController *_introController;
    CaptureViewController *_captureViewController;
    FeedSpinnerView *_firstLoadSpinner;
    double _timeFirstInitialized;
    UIView *_blockInputView;
}

+ (void)reloadAllControllers;
+ (id)currentAccountContext;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *blockInputView; // @synthesize blockInputView=_blockInputView;
@property(nonatomic) _Bool didInstallNewMainTabController; // @synthesize didInstallNewMainTabController=_didInstallNewMainTabController;
@property(nonatomic) double timeFirstInitialized; // @synthesize timeFirstInitialized=_timeFirstInitialized;
@property(nonatomic) _Bool hasLoadedAtLeastOneChildViewController; // @synthesize hasLoadedAtLeastOneChildViewController=_hasLoadedAtLeastOneChildViewController;
@property(retain, nonatomic) FeedSpinnerView *firstLoadSpinner; // @synthesize firstLoadSpinner=_firstLoadSpinner;
@property(retain, nonatomic) CaptureViewController *captureViewController; // @synthesize captureViewController=_captureViewController;
@property(retain, nonatomic) IntroViewController *introController; // @synthesize introController=_introController;
@property(retain, nonatomic) UserDrawerViewController *userDrawerViewController; // @synthesize userDrawerViewController=_userDrawerViewController;
@property(retain, nonatomic) id <AccountContext> accountContext; // @synthesize accountContext=_accountContext;
@property(readonly, nonatomic) _TtC6Reddit20AnonymousModeManager *anonymousModeManager; // @synthesize anonymousModeManager=_anonymousModeManager;
@property(readonly, nonatomic) AccountManager *accountManager; // @synthesize accountManager=_accountManager;
@property(retain, nonatomic) MainTabBarController *tabController; // @synthesize tabController=_tabController;
@property(nonatomic) __weak id <RootViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)handlePanOnBlockInputView:(id)arg1;
- (void)handleTapOnBlockInputView:(id)arg1;
- (void)handleScreenEdgePan:(id)arg1;
- (void)unblockMainViewInput;
- (void)blockMainViewInput;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
@property(readonly, copy, nonatomic) NSDictionary *analyticsInstallExperimentParameters;
- (void)captureViewControllerDidTapLogin:(id)arg1;
- (void)captureViewControllerDidFinish:(id)arg1;
- (void)introViewControllerDidFinish:(id)arg1;
- (void)mainTabBarControllerDidAppear:(id)arg1;
- (void)presentLoginScreen;
- (void)hideInterestSelection;
- (void)showInterestSelection;
- (void)setupUserDrawerForViewController:(id)arg1;
- (void)showMainViewControllers;
- (void)hideIntroViewController;
- (void)showIntroViewController;
- (void)removeLaunchScreen;
- (id)childViewControllerForStatusBarHidden;
- (id)childViewControllerForStatusBarStyle;
- (long long)preferredStatusBarStyle;
- (void)showAlertDialogWithTitle:(id)arg1 actionURLString:(id)arg2 force:(_Bool)arg3;
- (void)unloadChildViewControllers;
- (void)handleConfigUpdatedWithError:(id)arg1;
- (void)reloadAllControllers;
- (void)applicationUserDidTakeScreenshot:(id)arg1;
- (void)leaveAnonymousBrowsingMode:(id)arg1;
- (void)openUserAccountDrawer:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithAccountManager:(id)arg1 anonymousModeManager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

