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

@interface AnalyticsProgrammatic : NSObject <TBase, NSCoding, NSCopying>
{
    _Bool _ad_unitIsSet;
    _Bool _countIsSet;
    _Bool _partnerIsSet;
    _Bool _typeIsSet;
    NSString *_ad_unit;
    long long _count;
    NSString *_partner;
    NSString *_type;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool typeIsSet; // @synthesize typeIsSet=_typeIsSet;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(nonatomic) _Bool partnerIsSet; // @synthesize partnerIsSet=_partnerIsSet;
@property(copy, nonatomic) NSString *partner; // @synthesize partner=_partner;
@property(nonatomic) _Bool countIsSet; // @synthesize countIsSet=_countIsSet;
@property(nonatomic) long long count; // @synthesize count=_count;
@property(nonatomic) _Bool ad_unitIsSet; // @synthesize ad_unitIsSet=_ad_unitIsSet;
@property(copy, nonatomic) NSString *ad_unit; // @synthesize ad_unit=_ad_unit;
@property(readonly, copy) NSString *description;
- (_Bool)validate:(id *)arg1;
- (_Bool)write:(id)arg1 error:(id *)arg2;
- (_Bool)read:(id)arg1 error:(id *)arg2;
- (void)unsetType;
- (void)unsetPartner;
- (void)unsetCount;
- (void)unsetAd_unit;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAd_unit:(id)arg1 count:(long long)arg2 partner:(id)arg3 type:(id)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

