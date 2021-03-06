//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <RedditCore/NSCopying-Protocol.h>

@class NSDate, NSHTTPCookie, NSString;
@protocol KeychainAdapter;

@interface Credentials : NSObject <NSCopying>
{
    _Bool _isInvalid;
    NSObject<KeychainAdapter> *_keychain;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<KeychainAdapter> *keychain; // @synthesize keychain=_keychain;
@property(nonatomic) _Bool isInvalid; // @synthesize isInvalid=_isInvalid;
@property(readonly, nonatomic) NSHTTPCookie *modMailCookie;
- (void)clearAllValues;
@property(nonatomic) double tokenDuration;
@property(copy, nonatomic) NSDate *expirationDate;
@property(copy, nonatomic) NSString *refreshTokenString;
@property(copy, nonatomic) NSString *tokenString;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)debugDescription;
@property(readonly, nonatomic) _Bool isExpired;
@property(readonly, nonatomic) _Bool isNotExpiringSoon;
- (_Bool)updateWithData:(id)arg1;
- (void)migrateFromSAMKeychain;
- (id)initWithKeychainAdapter:(id)arg1;
- (id)initWithIdentifier:(id)arg1;

@end

