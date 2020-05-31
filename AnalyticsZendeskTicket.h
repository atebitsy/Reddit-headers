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

@interface AnalyticsZendeskTicket : NSObject <TBase, NSCoding, NSCopying>
{
    _Bool _idIsSet;
    _Bool _sourceIsSet;
    long long _id;
    NSString *_source;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool sourceIsSet; // @synthesize sourceIsSet=_sourceIsSet;
@property(copy, nonatomic) NSString *source; // @synthesize source=_source;
@property(nonatomic) _Bool idIsSet; // @synthesize idIsSet=_idIsSet;
@property(nonatomic) long long id; // @synthesize id=_id;
@property(readonly, copy) NSString *description;
- (_Bool)validate:(id *)arg1;
- (_Bool)write:(id)arg1 error:(id *)arg2;
- (_Bool)read:(id)arg1 error:(id *)arg2;
- (void)unsetSource;
- (void)unsetId;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithId:(long long)arg1 source:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

