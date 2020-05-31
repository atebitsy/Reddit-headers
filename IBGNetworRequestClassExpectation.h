//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <Instabug/IBGNetworRequestExpectation-Protocol.h>

@class IBGNetworkExpectationResponse;

@interface IBGNetworRequestClassExpectation : NSObject <IBGNetworRequestExpectation>
{
    _Bool _isMatched;
    Class _klass;
    IBGNetworkExpectationResponse *_expectedResponse;
}

+ (id)expectationWithRequestClass:(Class)arg1 expectedResponse:(id)arg2;
+ (id)expectationWithRequestClass:(Class)arg1;
@property(retain, nonatomic) IBGNetworkExpectationResponse *expectedResponse; // @synthesize expectedResponse=_expectedResponse;
@property(retain, nonatomic) Class klass; // @synthesize klass=_klass;
@property(nonatomic) _Bool isMatched; // @synthesize isMatched=_isMatched;
- (void).cxx_destruct;
- (id)matchRequest:(id)arg1 rawRequest:(id)arg2;
- (id)initWithClass:(Class)arg1 expectedResonse:(id)arg2;

@end
