//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, UIImage;

@interface IBGToolbarItem : NSObject
{
    NSString *_accessibilityIdentifier;
    NSString *_title;
    UIImage *_image;
    CDUnknownBlockType _handler;
}

+ (unsigned long long)attachmentsToolbarItemsCount;
+ (id)itemWithTitle:(id)arg1 accessibilityIdentifier:(id)arg2 image:(id)arg3 handler:(CDUnknownBlockType)arg4;
@property(readonly, copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(readonly, nonatomic) UIImage *image; // @synthesize image=_image;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *accessibilityIdentifier; // @synthesize accessibilityIdentifier=_accessibilityIdentifier;
- (void).cxx_destruct;
- (id)initWithTitle:(id)arg1 accessibilityIdentifier:(id)arg2 image:(id)arg3 handler:(CDUnknownBlockType)arg4;

@end

