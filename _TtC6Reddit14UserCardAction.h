//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIImage;

@interface _TtC6Reddit14UserCardAction : NSObject
{
    // Error parsing type: , name: icon
    // Error parsing type: , name: title
    // Error parsing type: , name: action
    // Error parsing type: , name: highlighted
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithIcon:(id)arg1 title:(id)arg2 highlighted:(_Bool)arg3 action:(SEL)arg4;
@property(nonatomic) _Bool highlighted; // @synthesize highlighted;
@property(nonatomic) SEL action; // @synthesize action;
@property(nonatomic, copy) NSString *title;
@property(nonatomic, retain) UIImage *icon; // @synthesize icon;

@end
