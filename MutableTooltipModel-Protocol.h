//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, UIColor;

@protocol MutableTooltipModel <NSObject>
@property(copy, nonatomic) CDUnknownBlockType completion;
@property(retain, nonatomic) UIColor *textColor;
@property(nonatomic) double delay;
@property(nonatomic) double textHInset;
@property(nonatomic) double textVInset;
@property(nonatomic) double bubbleHInset;
@property(nonatomic) double maxWidth;
@property(copy, nonatomic) NSString *analyticsId;
@property(copy, nonatomic) NSString *analyticsSource;
@property(copy, nonatomic) NSString *customText;
@property(nonatomic) long long arrowPosition;
@property(nonatomic) _Bool isTransitioning;
@property(nonatomic) unsigned long long priority;
@end

