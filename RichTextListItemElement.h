//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RedditCore/RichTextBaseContainerElement.h>

@class NSArray;

@interface RichTextListItemElement : RichTextBaseContainerElement
{
    unsigned long long _indentationLevel;
    NSArray *_elementRanges;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *elementRanges; // @synthesize elementRanges=_elementRanges;
@property(readonly, nonatomic) unsigned long long indentationLevel; // @synthesize indentationLevel=_indentationLevel;
- (_Bool)isEqual:(id)arg1;
- (id)applyParagraphStyleIndentationToString:(id)arg1 config:(id)arg2;
- (id)attributedStringWithPrefix:(id)arg1 withConfig:(id)arg2;
- (void)setIndentationLevel:(unsigned long long)arg1;
- (id)initWithData:(id)arg1 mediaMetadata:(id)arg2;

@end

