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

@interface AnalyticsNCMECReport : NSObject <TBase, NSCoding, NSCopying>
{
    _Bool _idIsSet;
    _Bool _classification_typeIsSet;
    _Bool _post_idIsSet;
    _Bool _file_viewed_by_admin;
    _Bool _file_viewed_by_adminIsSet;
    _Bool _user_idIsSet;
    _Bool _email_verified;
    _Bool _email_verifiedIsSet;
    _Bool _email_verified_timestampIsSet;
    _Bool _account_created_timestampIsSet;
    _Bool _account_registration_proxy;
    _Bool _account_registration_proxyIsSet;
    _Bool _account_added_noteIsSet;
    _Bool _permalinkIsSet;
    _Bool _content_urlIsSet;
    _Bool _content_is_reddit_hosted;
    _Bool _content_is_reddit_hostedIsSet;
    _Bool _post_created_timestampIsSet;
    _Bool _post_possible_proxy;
    _Bool _post_possible_proxyIsSet;
    _Bool _filenameIsSet;
    _Bool _content_publicly_available;
    _Bool _content_publicly_availableIsSet;
    _Bool _report_added_noteIsSet;
    _Bool _post_added_noteIsSet;
    _Bool _is_live_stream;
    _Bool _is_live_streamIsSet;
    int _id;
    NSString *_classification_type;
    NSString *_post_id;
    NSString *_user_id;
    long long _email_verified_timestamp;
    long long _account_created_timestamp;
    NSString *_account_added_note;
    NSString *_permalink;
    NSString *_content_url;
    long long _post_created_timestamp;
    NSString *_filename;
    NSString *_report_added_note;
    NSString *_post_added_note;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool is_live_streamIsSet; // @synthesize is_live_streamIsSet=_is_live_streamIsSet;
@property(nonatomic) _Bool is_live_stream; // @synthesize is_live_stream=_is_live_stream;
@property(nonatomic) _Bool post_added_noteIsSet; // @synthesize post_added_noteIsSet=_post_added_noteIsSet;
@property(copy, nonatomic) NSString *post_added_note; // @synthesize post_added_note=_post_added_note;
@property(nonatomic) _Bool report_added_noteIsSet; // @synthesize report_added_noteIsSet=_report_added_noteIsSet;
@property(copy, nonatomic) NSString *report_added_note; // @synthesize report_added_note=_report_added_note;
@property(nonatomic) _Bool content_publicly_availableIsSet; // @synthesize content_publicly_availableIsSet=_content_publicly_availableIsSet;
@property(nonatomic) _Bool content_publicly_available; // @synthesize content_publicly_available=_content_publicly_available;
@property(nonatomic) _Bool filenameIsSet; // @synthesize filenameIsSet=_filenameIsSet;
@property(copy, nonatomic) NSString *filename; // @synthesize filename=_filename;
@property(nonatomic) _Bool post_possible_proxyIsSet; // @synthesize post_possible_proxyIsSet=_post_possible_proxyIsSet;
@property(nonatomic) _Bool post_possible_proxy; // @synthesize post_possible_proxy=_post_possible_proxy;
@property(nonatomic) _Bool post_created_timestampIsSet; // @synthesize post_created_timestampIsSet=_post_created_timestampIsSet;
@property(nonatomic) long long post_created_timestamp; // @synthesize post_created_timestamp=_post_created_timestamp;
@property(nonatomic) _Bool content_is_reddit_hostedIsSet; // @synthesize content_is_reddit_hostedIsSet=_content_is_reddit_hostedIsSet;
@property(nonatomic) _Bool content_is_reddit_hosted; // @synthesize content_is_reddit_hosted=_content_is_reddit_hosted;
@property(nonatomic) _Bool content_urlIsSet; // @synthesize content_urlIsSet=_content_urlIsSet;
@property(copy, nonatomic) NSString *content_url; // @synthesize content_url=_content_url;
@property(nonatomic) _Bool permalinkIsSet; // @synthesize permalinkIsSet=_permalinkIsSet;
@property(copy, nonatomic) NSString *permalink; // @synthesize permalink=_permalink;
@property(nonatomic) _Bool account_added_noteIsSet; // @synthesize account_added_noteIsSet=_account_added_noteIsSet;
@property(copy, nonatomic) NSString *account_added_note; // @synthesize account_added_note=_account_added_note;
@property(nonatomic) _Bool account_registration_proxyIsSet; // @synthesize account_registration_proxyIsSet=_account_registration_proxyIsSet;
@property(nonatomic) _Bool account_registration_proxy; // @synthesize account_registration_proxy=_account_registration_proxy;
@property(nonatomic) _Bool account_created_timestampIsSet; // @synthesize account_created_timestampIsSet=_account_created_timestampIsSet;
@property(nonatomic) long long account_created_timestamp; // @synthesize account_created_timestamp=_account_created_timestamp;
@property(nonatomic) _Bool email_verified_timestampIsSet; // @synthesize email_verified_timestampIsSet=_email_verified_timestampIsSet;
@property(nonatomic) long long email_verified_timestamp; // @synthesize email_verified_timestamp=_email_verified_timestamp;
@property(nonatomic) _Bool email_verifiedIsSet; // @synthesize email_verifiedIsSet=_email_verifiedIsSet;
@property(nonatomic) _Bool email_verified; // @synthesize email_verified=_email_verified;
@property(nonatomic) _Bool user_idIsSet; // @synthesize user_idIsSet=_user_idIsSet;
@property(copy, nonatomic) NSString *user_id; // @synthesize user_id=_user_id;
@property(nonatomic) _Bool file_viewed_by_adminIsSet; // @synthesize file_viewed_by_adminIsSet=_file_viewed_by_adminIsSet;
@property(nonatomic) _Bool file_viewed_by_admin; // @synthesize file_viewed_by_admin=_file_viewed_by_admin;
@property(nonatomic) _Bool post_idIsSet; // @synthesize post_idIsSet=_post_idIsSet;
@property(copy, nonatomic) NSString *post_id; // @synthesize post_id=_post_id;
@property(nonatomic) _Bool classification_typeIsSet; // @synthesize classification_typeIsSet=_classification_typeIsSet;
@property(copy, nonatomic) NSString *classification_type; // @synthesize classification_type=_classification_type;
@property(nonatomic) _Bool idIsSet; // @synthesize idIsSet=_idIsSet;
@property(nonatomic) int id; // @synthesize id=_id;
@property(readonly, copy) NSString *description;
- (_Bool)validate:(id *)arg1;
- (_Bool)write:(id)arg1 error:(id *)arg2;
- (_Bool)read:(id)arg1 error:(id *)arg2;
- (void)unsetIs_live_stream;
- (void)unsetPost_added_note;
- (void)unsetReport_added_note;
- (void)unsetContent_publicly_available;
- (void)unsetFilename;
- (void)unsetPost_possible_proxy;
- (void)unsetPost_created_timestamp;
- (void)unsetContent_is_reddit_hosted;
- (void)unsetContent_url;
- (void)unsetPermalink;
- (void)unsetAccount_added_note;
- (void)unsetAccount_registration_proxy;
- (void)unsetAccount_created_timestamp;
- (void)unsetEmail_verified_timestamp;
- (void)unsetEmail_verified;
- (void)unsetUser_id;
- (void)unsetFile_viewed_by_admin;
- (void)unsetPost_id;
- (void)unsetClassification_type;
- (void)unsetId;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithId:(int)arg1 classification_type:(id)arg2 post_id:(id)arg3 file_viewed_by_admin:(_Bool)arg4 user_id:(id)arg5 email_verified:(_Bool)arg6 email_verified_timestamp:(long long)arg7 account_created_timestamp:(long long)arg8 account_registration_proxy:(_Bool)arg9 account_added_note:(id)arg10 permalink:(id)arg11 content_url:(id)arg12 content_is_reddit_hosted:(_Bool)arg13 post_created_timestamp:(long long)arg14 post_possible_proxy:(_Bool)arg15 filename:(id)arg16 content_publicly_available:(_Bool)arg17 report_added_note:(id)arg18 post_added_note:(id)arg19 is_live_stream:(_Bool)arg20;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

