//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AttributedLabelInteractableObject-Protocol.h"

@class NSString, NSURL;

@interface AttributedLabelLink : NSObject <AttributedLabelInteractableObject>
{
    NSURL *_URL;
    NSString *_caption;
    struct _NSRange _range;
}

- (void).cxx_destruct;
@property(nonatomic) struct _NSRange range; // @synthesize range=_range;
@property(copy, nonatomic) NSString *caption; // @synthesize caption=_caption;
@property(copy, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (id)initWithURL:(id)arg1 caption:(id)arg2 range:(struct _NSRange)arg3;
- (id)initWithURL:(id)arg1 range:(struct _NSRange)arg2;

@end

