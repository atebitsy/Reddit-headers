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

@interface AnalyticsCSAIContentReport : NSObject <TBase, NSCoding, NSCopying>
{
    _Bool _reported_urlIsSet;
    _Bool _content_urlIsSet;
    _Bool _target_idIsSet;
    _Bool _target_typeIsSet;
    _Bool _tracking_idIsSet;
    _Bool _removed_by_user_typeIsSet;
    _Bool _content_typeIsSet;
    _Bool _removed_by_user_idIsSet;
    _Bool _subreddit_idIsSet;
    _Bool _original_queue_idIsSet;
    _Bool _dest_queue_idIsSet;
    _Bool _confirmed_csai;
    _Bool _confirmed_csaiIsSet;
    _Bool _ncmec_report_numberIsSet;
    _Bool _reporter_idIsSet;
    _Bool _permalinkIsSet;
    NSString *_reported_url;
    NSString *_content_url;
    NSString *_target_id;
    NSString *_target_type;
    NSString *_tracking_id;
    NSString *_removed_by_user_type;
    NSString *_content_type;
    NSString *_removed_by_user_id;
    NSString *_subreddit_id;
    NSString *_original_queue_id;
    NSString *_dest_queue_id;
    long long _ncmec_report_number;
    NSString *_reporter_id;
    NSString *_permalink;
}

@property(nonatomic) _Bool permalinkIsSet; // @synthesize permalinkIsSet=_permalinkIsSet;
@property(copy, nonatomic) NSString *permalink; // @synthesize permalink=_permalink;
@property(nonatomic) _Bool reporter_idIsSet; // @synthesize reporter_idIsSet=_reporter_idIsSet;
@property(copy, nonatomic) NSString *reporter_id; // @synthesize reporter_id=_reporter_id;
@property(nonatomic) _Bool ncmec_report_numberIsSet; // @synthesize ncmec_report_numberIsSet=_ncmec_report_numberIsSet;
@property(nonatomic) long long ncmec_report_number; // @synthesize ncmec_report_number=_ncmec_report_number;
@property(nonatomic) _Bool confirmed_csaiIsSet; // @synthesize confirmed_csaiIsSet=_confirmed_csaiIsSet;
@property(nonatomic) _Bool confirmed_csai; // @synthesize confirmed_csai=_confirmed_csai;
@property(nonatomic) _Bool dest_queue_idIsSet; // @synthesize dest_queue_idIsSet=_dest_queue_idIsSet;
@property(copy, nonatomic) NSString *dest_queue_id; // @synthesize dest_queue_id=_dest_queue_id;
@property(nonatomic) _Bool original_queue_idIsSet; // @synthesize original_queue_idIsSet=_original_queue_idIsSet;
@property(copy, nonatomic) NSString *original_queue_id; // @synthesize original_queue_id=_original_queue_id;
@property(nonatomic) _Bool subreddit_idIsSet; // @synthesize subreddit_idIsSet=_subreddit_idIsSet;
@property(copy, nonatomic) NSString *subreddit_id; // @synthesize subreddit_id=_subreddit_id;
@property(nonatomic) _Bool removed_by_user_idIsSet; // @synthesize removed_by_user_idIsSet=_removed_by_user_idIsSet;
@property(copy, nonatomic) NSString *removed_by_user_id; // @synthesize removed_by_user_id=_removed_by_user_id;
@property(nonatomic) _Bool content_typeIsSet; // @synthesize content_typeIsSet=_content_typeIsSet;
@property(copy, nonatomic) NSString *content_type; // @synthesize content_type=_content_type;
@property(nonatomic) _Bool removed_by_user_typeIsSet; // @synthesize removed_by_user_typeIsSet=_removed_by_user_typeIsSet;
@property(copy, nonatomic) NSString *removed_by_user_type; // @synthesize removed_by_user_type=_removed_by_user_type;
@property(nonatomic) _Bool tracking_idIsSet; // @synthesize tracking_idIsSet=_tracking_idIsSet;
@property(copy, nonatomic) NSString *tracking_id; // @synthesize tracking_id=_tracking_id;
@property(nonatomic) _Bool target_typeIsSet; // @synthesize target_typeIsSet=_target_typeIsSet;
@property(copy, nonatomic) NSString *target_type; // @synthesize target_type=_target_type;
@property(nonatomic) _Bool target_idIsSet; // @synthesize target_idIsSet=_target_idIsSet;
@property(copy, nonatomic) NSString *target_id; // @synthesize target_id=_target_id;
@property(nonatomic) _Bool content_urlIsSet; // @synthesize content_urlIsSet=_content_urlIsSet;
@property(copy, nonatomic) NSString *content_url; // @synthesize content_url=_content_url;
@property(nonatomic) _Bool reported_urlIsSet; // @synthesize reported_urlIsSet=_reported_urlIsSet;
@property(copy, nonatomic) NSString *reported_url; // @synthesize reported_url=_reported_url;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (_Bool)validate:(id *)arg1;
- (_Bool)write:(id)arg1 error:(id *)arg2;
- (_Bool)read:(id)arg1 error:(id *)arg2;
- (void)unsetPermalink;
- (void)unsetReporter_id;
- (void)unsetNcmec_report_number;
- (void)unsetConfirmed_csai;
- (void)unsetDest_queue_id;
- (void)unsetOriginal_queue_id;
- (void)unsetSubreddit_id;
- (void)unsetRemoved_by_user_id;
- (void)unsetContent_type;
- (void)unsetRemoved_by_user_type;
- (void)unsetTracking_id;
- (void)unsetTarget_type;
- (void)unsetTarget_id;
- (void)unsetContent_url;
- (void)unsetReported_url;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithReported_url:(id)arg1 content_url:(id)arg2 target_id:(id)arg3 target_type:(id)arg4 tracking_id:(id)arg5 removed_by_user_type:(id)arg6 content_type:(id)arg7 removed_by_user_id:(id)arg8 subreddit_id:(id)arg9 original_queue_id:(id)arg10 dest_queue_id:(id)arg11 confirmed_csai:(_Bool)arg12 ncmec_report_number:(long long)arg13 reporter_id:(id)arg14 permalink:(id)arg15;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
