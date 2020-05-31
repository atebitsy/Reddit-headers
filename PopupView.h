//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIControl, UIViewController;
@protocol PopupViewControllerProtocol;

@interface PopupView : UIView
{
    double _visibleKeyboardHeight;
    UIViewController<PopupViewControllerProtocol> *_controller;
    UIControl *_dimmerView;
}

+ (id)instance;
- (void).cxx_destruct;
@property(retain, nonatomic) UIControl *dimmerView; // @synthesize dimmerView=_dimmerView;
@property(retain, nonatomic) UIViewController<PopupViewControllerProtocol> *controller; // @synthesize controller=_controller;
@property(nonatomic) double visibleKeyboardHeight; // @synthesize visibleKeyboardHeight=_visibleKeyboardHeight;
- (void)didTapDimmerView;
- (void)dismissPopup:(_Bool)arg1;
- (void)showPopup:(_Bool)arg1;
- (void)centerControllerInScreen;
- (double)suggestedWidth;
- (void)positionPopup:(id)arg1;
- (void)layoutSubviews;
- (void)configureWithViewController:(id)arg1;
- (void)registerNotifications;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

