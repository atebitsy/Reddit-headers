//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AttributedLabelInteractableObject-Protocol.h"

@class RichTextSpoilerTextElement;

@interface AttributedLabelSpoilerText : NSObject <AttributedLabelInteractableObject>
{
    RichTextSpoilerTextElement *_spoilerText;
    struct _NSRange _range;
}

@property(nonatomic) struct _NSRange range; // @synthesize range=_range;
@property(retain, nonatomic) RichTextSpoilerTextElement *spoilerText; // @synthesize spoilerText=_spoilerText;
- (void).cxx_destruct;
- (id)initWithSpoilerText:(id)arg1 range:(struct _NSRange)arg2;

@end
