//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AnalyticsFramework/NSCoding-Protocol.h>
#import <AnalyticsFramework/NSCopying-Protocol.h>
#import <AnalyticsFramework/TBase-Protocol.h>

@class NSString;

@interface AnalyticsApi : NSObject <TBase, NSCoding, NSCopying>
{
    _Bool _nameIsSet;
    _Bool _addressIsSet;
    _Bool _endpointIsSet;
    NSString *_name;
    NSString *_address;
    NSString *_endpoint;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool endpointIsSet; // @synthesize endpointIsSet=_endpointIsSet;
@property(copy, nonatomic) NSString *endpoint; // @synthesize endpoint=_endpoint;
@property(nonatomic) _Bool addressIsSet; // @synthesize addressIsSet=_addressIsSet;
@property(copy, nonatomic) NSString *address; // @synthesize address=_address;
@property(nonatomic) _Bool nameIsSet; // @synthesize nameIsSet=_nameIsSet;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy) NSString *description;
- (_Bool)validate:(id *)arg1;
- (_Bool)write:(id)arg1 error:(id *)arg2;
- (_Bool)read:(id)arg1 error:(id *)arg2;
- (void)unsetEndpoint;
- (void)unsetAddress;
- (void)unsetName;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 address:(id)arg2 endpoint:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

