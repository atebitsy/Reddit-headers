//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIViewController, _TtC7Economy21AwardSelectionOptions;
@protocol AwardCoordinatorDelegate;

@protocol AwardCoordinator <NSObject>
@property(nonatomic) __weak id <AwardCoordinatorDelegate> delegate;
- (void)startFromViewController:(UIViewController *)arg1 options:(_TtC7Economy21AwardSelectionOptions *)arg2;
@end

