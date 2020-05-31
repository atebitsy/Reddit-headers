//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSScanner, NSString;

@interface HTMLInputStreamReader : NSObject
{
    NSString *_string;
    NSScanner *_scanner;
    struct {
        unsigned short buffer[64];
        struct __CFString *theString;
        unsigned short *directUniCharBuffer;
        char *directCStringBuffer;
        struct {
            long long location;
            long long length;
        } rangeToBuffer;
        long long bufferedRangeStart;
        long long bufferedRangeEnd;
    } _buffer;
    unsigned long long _location;
    unsigned long long _mark;
    unsigned int _currentInputCharacter;
    unsigned long long _consume;
    CDUnknownBlockType _errorCallback;
    _Bool _reconsume;
}

@property(copy, nonatomic) CDUnknownBlockType errorCallback; // @synthesize errorCallback=_errorCallback;
@property(readonly, nonatomic) unsigned long long currentLocation; // @synthesize currentLocation=_location;
@property(readonly, nonatomic) NSString *string; // @synthesize string=_string;
- (void).cxx_destruct;
- (void)reset;
- (void)rewindToMarkedLocation;
- (void)markCurrentLocation;
- (void)unconsumeCurrentInputCharacter;
- (void)reconsumeCurrentInputCharacter;
- (id)consumeAlphanumericCharacters;
- (id)consumeCharactersInString:(id)arg1;
- (id)consumeCharactersUpToString:(id)arg1;
- (id)consumeCharactersUpToCharactersInString:(id)arg1;
- (_Bool)consumeString:(id)arg1 caseSensitive:(_Bool)arg2;
- (_Bool)consumeHexNumber:(unsigned long long *)arg1;
- (_Bool)consumeDecimalNumber:(CDStruct_5fe7aead *)arg1;
- (_Bool)consumeNumber:(unsigned long long *)arg1;
- (_Bool)consumeCharacter:(unsigned int)arg1;
- (unsigned int)consumeNextInputCharacter;
- (unsigned int)inputCharacterPointAtOffset:(unsigned long long)arg1;
- (unsigned int)nextInputCharacter;
- (unsigned int)currentInputCharacter;
- (void)emitParseError:(id)arg1;
- (id)initWithString:(id)arg1;

@end
