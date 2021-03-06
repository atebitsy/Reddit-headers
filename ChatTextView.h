//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RedditUI/BaseTextView.h>

@class NSArray;

@interface ChatTextView : BaseTextView
{
    _Bool _truncatePlaceholder;
    unsigned long long _pastableMediaTypes;
    NSArray *_pastedItems;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool truncatePlaceholder; // @synthesize truncatePlaceholder=_truncatePlaceholder;
@property(copy, nonatomic) NSArray *pastedItems; // @synthesize pastedItems=_pastedItems;
@property(nonatomic) unsigned long long pastableMediaTypes; // @synthesize pastableMediaTypes=_pastableMediaTypes;
- (id)truncatePlaceholder:(id)arg1;
- (void)setPlaceholderText:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (id)slk_supportedMediaTypes;
- (id)slk_pasteboardContentType;
- (_Bool)slk_isPasteboardItemSupported;
- (id)slk_pastedItem;
- (void)pasteMedia:(id)arg1;
- (void)paste:(id)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;

@end

