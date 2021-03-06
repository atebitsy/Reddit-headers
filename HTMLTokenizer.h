//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSEnumerator.h>

@class HTMLCharacterToken, HTMLCommentToken, HTMLDOCTYPEToken, HTMLInputStreamReader, HTMLParser, HTMLTagToken, NSMutableArray, NSMutableString, NSString;

@interface HTMLTokenizer : NSEnumerator
{
    unsigned long long _currentState;
    HTMLInputStreamReader *_inputStreamReader;
    NSMutableArray *_tokens;
    unsigned long long _previousTokenizerState;
    unsigned int _additionalAllowedCharacter;
    HTMLTagToken *_currentTagToken;
    HTMLCharacterToken *_currentCharacterToken;
    HTMLCommentToken *_currentCommentToken;
    HTMLDOCTYPEToken *_currentDoctypeToken;
    NSMutableString *_currentAttributeName;
    NSMutableString *_currentAttributeValue;
    _Bool _selfClosingFlagAknowledged;
    NSString *_lastStartTagName;
    NSMutableString *_temporaryBuffer;
    _Bool _eof;
    HTMLParser *_parser;
}

- (void).cxx_destruct;
@property(nonatomic) __weak HTMLParser *parser; // @synthesize parser=_parser;
@property(nonatomic) unsigned long long state; // @synthesize state=_currentState;
- (void)HTMLTokenizerStateCDATASection;
- (void)HTMLTokenizerStateBogusDOCTYPE;
- (void)HTMLTokenizerStateAfterDOCTYPESystemIdentifier;
- (void)HTMLTokenizerStateDOCTYPESystemIdentifierSingleQuoted;
- (void)HTMLTokenizerStateDOCTYPESystemIdentifierDoubleQuoted;
- (void)HTMLTokenizerStateBeforeDOCTYPESystemIdentifier;
- (void)HTMLTokenizerStateAfterDOCTYPESystemKeyword;
- (void)HTMLTokenizerStateBetweenDOCTYPEPublicAndSystemIdentifiers;
- (void)HTMLTokenizerStateAfterDOCTYPEPublicIdentifier;
- (void)HTMLTokenizerStateDOCTYPEPublicIdentifierSingleQuoted;
- (void)HTMLTokenizerStateDOCTYPEPublicIdentifierDoubleQuoted;
- (void)HTMLTokenizerStateBeforeDOCTYPEPublicIdentifier;
- (void)HTMLTokenizerStateAfterDOCTYPEPublicKeyword;
- (void)HTMLTokenizerStateAfterDOCTYPEName;
- (void)HTMLTokenizerStateDOCTYPEName;
- (void)HTMLTokenizerStateBeforeDOCTYPEName;
- (void)HTMLTokenizerStateDOCTYPE;
- (void)HTMLTokenizerStateCommentEndBang;
- (void)HTMLTokenizerStateCommentEnd;
- (void)HTMLTokenizerStateCommentEndDash;
- (void)HTMLTokenizerStateComment;
- (void)HTMLTokenizerStateCommentStartDash;
- (void)HTMLTokenizerStateCommentStart;
- (void)HTMLTokenizerStateMarkupDeclarationOpen;
- (void)HTMLTokenizerStateBogusComment;
- (void)HTMLTokenizerStateSelfClosingStartTag;
- (void)HTMLTokenizerStateAfterAttributeValueQuoted;
- (void)HTMLTokenizerStateCharacterReferenceInAttributeValue;
- (void)HTMLTokenizerStateAttributeValueUnquoted;
- (void)HTMLTokenizerStateAttributeValueSingleQuoted;
- (void)HTMLTokenizerStateAttributeValueDoubleQuoted;
- (void)HTMLTokenizerStateBeforeAttributeValue;
- (void)HTMLTokenizerStateAfterAttributeName;
- (void)HTMLTokenizerStateAttributeName;
- (void)HTMLTokenizerStateBeforeAttributeName;
- (void)HTMLTokenizerStateScriptDataDoubleEscapeEnd;
- (void)HTMLTokenizerStateScriptDataDoubleEscapedLessThanSign;
- (void)HTMLTokenizerStateScriptDataDoubleEscapedDashDash;
- (void)HTMLTokenizerStateScriptDataDoubleEscapedDash;
- (void)HTMLTokenizerStateScriptDataDoubleEscaped;
- (void)HTMLTokenizerStateScriptDataDoubleEscapeStart;
- (void)HTMLTokenizerStateScriptDataEscapedEndTagName;
- (void)HTMLTokenizerStateScriptDataEscapedEndTagOpen;
- (void)HTMLTokenizerStateScriptDataEscapedLessThanSign;
- (void)HTMLTokenizerStateScriptDataEscapedDashDash;
- (void)HTMLTokenizerStateScriptDataEscapedDash;
- (void)HTMLTokenizerStateScriptDataEscaped;
- (void)HTMLTokenizerStateScriptDataEscapeStartDash;
- (void)HTMLTokenizerStateScriptDataEscapeStart;
- (void)HTMLTokenizerStateScriptDataEndTagName;
- (void)HTMLTokenizerStateScriptDataEndTagOpen;
- (void)HTMLTokenizerStateScriptDataLessThanSign;
- (void)HTMLTokenizerStateRAWTEXTEndTagName;
- (void)HTMLTokenizerStateRAWTEXTEndTagOpen;
- (void)HTMLTokenizerStateRAWTEXTLessThanSign;
- (void)HTMLTokenizerStateRCDATAEndTagName;
- (void)HTMLTokenizerStateRCDATAEndTagOpen;
- (void)HTMLTokenizerStateRCDATALessThanSign;
- (void)HTMLTokenizerStateTagName;
- (void)HTMLTokenizerStateEndTagOpen;
- (void)HTMLTokenizerStateTagOpen;
- (void)HTMLTokenizerStatePLAINTEXT;
- (void)HTMLTokenizerStateScriptData;
- (void)HTMLTokenizerStateRAWTEXT;
- (void)HTMLTokenizerStateCharacterReferenceInRCDATA;
- (void)HTMLTokenizerStateRCDATA;
- (void)HTMLTokenizerStateCharacterReferenceInData;
- (void)HTMLTokenizerStateData;
- (id)attemptToConsumeNamedCharacterReferenceInAttribute:(_Bool)arg1;
- (id)attemptToConsumeNumberCharacterReference;
- (id)attemptToConsumeCharachterReferenceWithAddtionalAllowedCharacter:(unsigned int)arg1 inAttribute:(_Bool)arg2;
- (void)finalizeCurrentAttribute;
- (void)appendToCurrentAttributeValue:(id)arg1;
- (void)appendToCurrentAttributeName:(id)arg1;
- (_Bool)isCurrentEndTagTokenAppropriate;
- (void)emitParseError:(id)arg1;
- (void)emitCharacterTokenWithString:(id)arg1;
- (void)emitCharacterToken:(unsigned int)arg1;
- (void)emitCurrentTagToken;
- (void)emitEOFToken;
- (void)emitToken:(id)arg1;
- (void)switchToState:(unsigned long long)arg1 withAdditionalAllowedCharacter:(unsigned int)arg2;
- (void)switchToState:(unsigned long long)arg1;
- (void)read;
- (id)nextObject;
@property(readonly, nonatomic) NSString *string;
- (id)initWithString:(id)arg1;

@end

