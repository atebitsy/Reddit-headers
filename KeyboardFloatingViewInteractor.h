//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;
@protocol KeyboardInteractorDelegate;

@interface KeyboardFloatingViewInteractor : NSObject
{
    id <KeyboardInteractorDelegate> _delegate;
    double _keyboardVisibleHeight;
    NSArray *_viewsToAdjust;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *viewsToAdjust; // @synthesize viewsToAdjust=_viewsToAdjust;
@property(nonatomic) double keyboardVisibleHeight; // @synthesize keyboardVisibleHeight=_keyboardVisibleHeight;
@property(nonatomic) __weak id <KeyboardInteractorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)animateViewsWithNotification:(id)arg1 willShowKeyboard:(_Bool)arg2;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)dealloc;
- (id)initWithViewsToAdjust:(id)arg1;

@end

