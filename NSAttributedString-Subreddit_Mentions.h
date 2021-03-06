//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSAttributedString.h>

@interface NSAttributedString (Subreddit_Mentions)
+ (id)attributedStringWithImageNamed:(id)arg1 attributes:(id)arg2 imageHeight:(double)arg3;
+ (id)attributedStringWithImage:(id)arg1 attributes:(id)arg2 imageHeight:(double)arg3;
+ (id)attributedStringWithAttachment:(id)arg1 attributes:(id)arg2;
+ (id)attributedStringForSubredditName:(id)arg1 username:(id)arg2 forRect:(struct CGRect)arg3;
+ (id)attributedStringForIconName:(id)arg1 font:(id)arg2;
+ (id)attributedStringForIconName:(id)arg1 color:(id)arg2 font:(id)arg3;
- (id)attributedSubredditLinkStringWithSubredditImage:(id)arg1 backgroundColor:(id)arg2 borderColor:(id)arg3 subredditMention:(id)arg4;
- (id)appendedWithNewLineAttributedString:(id)arg1;
- (id)appendedAttributedString:(id)arg1 separator:(id)arg2;
- (void)detectAndAddLinksForText:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)attributedStringForLinks:(id)arg1 withActiveLink:(id)arg2 linkAttributes:(id)arg3 activeLinkAttributes:(id)arg4 defaultAttributes:(id)arg5;
- (id)spoilerTexts;
- (id)attributedLinks;
- (id)extractAttributesFromString:(id)arg1;
- (id)attributesForString;
- (void)loadAsyncAttachmentsWithCompletion:(CDUnknownBlockType)arg1;
@end

