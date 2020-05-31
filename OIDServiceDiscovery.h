//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppAuth/NSCopying-Protocol.h>
#import <AppAuth/NSSecureCoding-Protocol.h>

@class NSArray, NSDictionary, NSURL;

@interface OIDServiceDiscovery : NSObject <NSCopying, NSSecureCoding>
{
    NSDictionary *_discoveryDictionary;
}

+ (_Bool)supportsSecureCoding;
+ (_Bool)dictionaryHasRequiredFields:(id)arg1 error:(id *)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSURL *OPTosURI;
@property(readonly, nonatomic) NSURL *OPPolicyURI;
@property(readonly, nonatomic) _Bool requireRequestURIRegistration;
@property(readonly, nonatomic) _Bool requestURIParameterSupported;
@property(readonly, nonatomic) _Bool requestParameterSupported;
@property(readonly, nonatomic) _Bool claimsParameterSupported;
@property(readonly, nonatomic) NSArray *UILocalesSupported;
@property(readonly, nonatomic) NSArray *claimsLocalesSupported;
@property(readonly, nonatomic) NSURL *serviceDocumentation;
@property(readonly, nonatomic) NSArray *claimsSupported;
@property(readonly, nonatomic) NSArray *claimTypesSupported;
@property(readonly, nonatomic) NSArray *displayValuesSupported;
@property(readonly, nonatomic) NSArray *tokenEndpointAuthSigningAlgorithmValuesSupported;
@property(readonly, nonatomic) NSArray *tokenEndpointAuthMethodsSupported;
@property(readonly, nonatomic) NSArray *requestObjectEncryptionEncodingValuesSupported;
@property(readonly, nonatomic) NSArray *requestObjectEncryptionAlgorithmValuesSupported;
@property(readonly, nonatomic) NSArray *requestObjectSigningAlgorithmValuesSupported;
@property(readonly, nonatomic) NSArray *userinfoEncryptionEncodingValuesSupported;
@property(readonly, nonatomic) NSArray *userinfoEncryptionAlgorithmValuesSupported;
@property(readonly, nonatomic) NSArray *userinfoSigningAlgorithmValuesSupported;
@property(readonly, nonatomic) NSArray *IDTokenEncryptionEncodingValuesSupported;
@property(readonly, nonatomic) NSArray *IDTokenEncryptionAlgorithmValuesSupported;
@property(readonly, nonatomic) NSArray *IDTokenSigningAlgorithmValuesSupported;
@property(readonly, nonatomic) NSArray *subjectTypesSupported;
@property(readonly, nonatomic) NSArray *acrValuesSupported;
@property(readonly, nonatomic) NSArray *grantTypesSupported;
@property(readonly, nonatomic) NSArray *responseModesSupported;
@property(readonly, nonatomic) NSArray *responseTypesSupported;
@property(readonly, nonatomic) NSArray *scopesSupported;
@property(readonly, nonatomic) NSURL *endSessionEndpoint;
@property(readonly, nonatomic) NSURL *registrationEndpoint;
@property(readonly, nonatomic) NSURL *jwksURL;
@property(readonly, nonatomic) NSURL *userinfoEndpoint;
@property(readonly, nonatomic) NSURL *tokenEndpoint;
@property(readonly, nonatomic) NSURL *authorizationEndpoint;
@property(readonly, nonatomic) NSURL *issuer;
@property(readonly, nonatomic) NSDictionary *discoveryDictionary;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDictionary:(id)arg1 error:(id *)arg2;
- (id)initWithJSONData:(id)arg1 error:(id *)arg2;
- (id)initWithJSON:(id)arg1 error:(id *)arg2;
- (id)init;

@end

