//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HTMLKit/HTMLToken.h>

@class NSMutableString, NSString;

@interface HTMLCharacterToken : HTMLToken
{
    NSMutableString *_characters;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *characters; // @synthesize characters=_characters;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)tokenBySplitingLeadingWhiteSpace;
- (void)trimFormIndex:(unsigned long long)arg1;
- (void)trimLeadingWhitespace;
- (void)retainLeadingWhitespace;
- (_Bool)isEmpty;
- (_Bool)isWhitespaceToken;
- (void)appendString:(id)arg1;
- (id)initWithString:(id)arg1;

@end

