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

@interface AnalyticsRelevanceModel : NSObject <TBase, NSCoding, NSCopying>
{
    _Bool _number_max_recommendationsIsSet;
    _Bool _feature_blobIsSet;
    _Bool _result_blobIsSet;
    _Bool _result_durationIsSet;
    _Bool _versionIsSet;
    _Bool _familyIsSet;
    _Bool _identifierIsSet;
    int _number_max_recommendations;
    NSString *_feature_blob;
    NSString *_result_blob;
    long long _result_duration;
    NSString *_version;
    NSString *_family;
    NSString *_identifier;
}

@property(nonatomic) _Bool identifierIsSet; // @synthesize identifierIsSet=_identifierIsSet;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) _Bool familyIsSet; // @synthesize familyIsSet=_familyIsSet;
@property(copy, nonatomic) NSString *family; // @synthesize family=_family;
@property(nonatomic) _Bool versionIsSet; // @synthesize versionIsSet=_versionIsSet;
@property(copy, nonatomic) NSString *version; // @synthesize version=_version;
@property(nonatomic) _Bool result_durationIsSet; // @synthesize result_durationIsSet=_result_durationIsSet;
@property(nonatomic) long long result_duration; // @synthesize result_duration=_result_duration;
@property(nonatomic) _Bool result_blobIsSet; // @synthesize result_blobIsSet=_result_blobIsSet;
@property(copy, nonatomic) NSString *result_blob; // @synthesize result_blob=_result_blob;
@property(nonatomic) _Bool feature_blobIsSet; // @synthesize feature_blobIsSet=_feature_blobIsSet;
@property(copy, nonatomic) NSString *feature_blob; // @synthesize feature_blob=_feature_blob;
@property(nonatomic) _Bool number_max_recommendationsIsSet; // @synthesize number_max_recommendationsIsSet=_number_max_recommendationsIsSet;
@property(nonatomic) int number_max_recommendations; // @synthesize number_max_recommendations=_number_max_recommendations;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (_Bool)validate:(id *)arg1;
- (_Bool)write:(id)arg1 error:(id *)arg2;
- (_Bool)read:(id)arg1 error:(id *)arg2;
- (void)unsetIdentifier;
- (void)unsetFamily;
- (void)unsetVersion;
- (void)unsetResult_duration;
- (void)unsetResult_blob;
- (void)unsetFeature_blob;
- (void)unsetNumber_max_recommendations;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNumber_max_recommendations:(int)arg1 feature_blob:(id)arg2 result_blob:(id)arg3 result_duration:(long long)arg4 version:(id)arg5 family:(id)arg6 identifier:(id)arg7;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
