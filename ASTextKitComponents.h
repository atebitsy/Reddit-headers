//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ASTextKitComponentsTextView, NSLayoutManager, NSTextContainer, NSTextStorage;

@interface ASTextKitComponents : NSObject
{
    NSTextStorage *_textStorage;
    NSTextContainer *_textContainer;
    NSLayoutManager *_layoutManager;
    ASTextKitComponentsTextView *_textView;
}

+ (id)componentsWithTextStorage:(id)arg1 textContainerSize:(struct CGSize)arg2 layoutManager:(id)arg3;
+ (id)componentsWithAttributedSeedString:(id)arg1 textContainerSize:(struct CGSize)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) ASTextKitComponentsTextView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) NSLayoutManager *layoutManager; // @synthesize layoutManager=_layoutManager;
@property(retain, nonatomic) NSTextContainer *textContainer; // @synthesize textContainer=_textContainer;
@property(retain, nonatomic) NSTextStorage *textStorage; // @synthesize textStorage=_textStorage;
- (struct CGSize)sizeForConstrainedWidth:(double)arg1 forMaxNumberOfLines:(long long)arg2;
- (struct CGSize)sizeForConstrainedWidth:(double)arg1;
- (void)dealloc;

@end

