//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class UIView;

@interface _TtC6Reddit27TwoFactorAuthViewController : UIViewController
{
    // Error parsing type: , name: scrollView
    // Error parsing type: , name: twoFactorView
    // Error parsing type: , name: accountManager
    // Error parsing type: , name: accountContext
    // Error parsing type: , name: username
    // Error parsing type: , name: password
    // Error parsing type: , name: onDidAuthenticate
    // Error parsing type: , name: twoFactorEntryType
    // Error parsing type: , name: confirmationInputAccessoryView
    // Error parsing type: , name: confirmationButton
}

- (void).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)login:(id)arg1;
- (void)didTapTwoFactorAuthTypeToggleWithSender:(id)arg1;
- (void)pinCodeFieldTextChangedWithSender:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithCoder:(id)arg1;
- (id)initWithAccountContext:(id)arg1 username:(id)arg2 password:(id)arg3 onDidAuthenticate:(CDUnknownBlockType)arg4;
@property(nonatomic, readonly) _Bool canBecomeFirstResponder;
@property(nonatomic, readonly) UIView *inputAccessoryView;

@end

