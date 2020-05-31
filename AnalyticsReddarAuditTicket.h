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

@interface AnalyticsReddarAuditTicket : NSObject <TBase, NSCoding, NSCopying>
{
    _Bool _idIsSet;
    _Bool _audit_idIsSet;
    _Bool _auditor_idIsSet;
    _Bool _ticket_idIsSet;
    _Bool _agent_idIsSet;
    _Bool _qa_user_actionIsSet;
    _Bool _qa_content_actionIsSet;
    _Bool _qa_policyIsSet;
    _Bool _qa_messageIsSet;
    NSString *_id;
    NSString *_audit_id;
    NSString *_auditor_id;
    NSString *_ticket_id;
    NSString *_agent_id;
    NSString *_qa_user_action;
    NSString *_qa_content_action;
    NSString *_qa_policy;
    NSString *_qa_message;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool qa_messageIsSet; // @synthesize qa_messageIsSet=_qa_messageIsSet;
@property(copy, nonatomic) NSString *qa_message; // @synthesize qa_message=_qa_message;
@property(nonatomic) _Bool qa_policyIsSet; // @synthesize qa_policyIsSet=_qa_policyIsSet;
@property(copy, nonatomic) NSString *qa_policy; // @synthesize qa_policy=_qa_policy;
@property(nonatomic) _Bool qa_content_actionIsSet; // @synthesize qa_content_actionIsSet=_qa_content_actionIsSet;
@property(copy, nonatomic) NSString *qa_content_action; // @synthesize qa_content_action=_qa_content_action;
@property(nonatomic) _Bool qa_user_actionIsSet; // @synthesize qa_user_actionIsSet=_qa_user_actionIsSet;
@property(copy, nonatomic) NSString *qa_user_action; // @synthesize qa_user_action=_qa_user_action;
@property(nonatomic) _Bool agent_idIsSet; // @synthesize agent_idIsSet=_agent_idIsSet;
@property(copy, nonatomic) NSString *agent_id; // @synthesize agent_id=_agent_id;
@property(nonatomic) _Bool ticket_idIsSet; // @synthesize ticket_idIsSet=_ticket_idIsSet;
@property(copy, nonatomic) NSString *ticket_id; // @synthesize ticket_id=_ticket_id;
@property(nonatomic) _Bool auditor_idIsSet; // @synthesize auditor_idIsSet=_auditor_idIsSet;
@property(copy, nonatomic) NSString *auditor_id; // @synthesize auditor_id=_auditor_id;
@property(nonatomic) _Bool audit_idIsSet; // @synthesize audit_idIsSet=_audit_idIsSet;
@property(copy, nonatomic) NSString *audit_id; // @synthesize audit_id=_audit_id;
@property(nonatomic) _Bool idIsSet; // @synthesize idIsSet=_idIsSet;
@property(copy, nonatomic) NSString *id; // @synthesize id=_id;
@property(readonly, copy) NSString *description;
- (_Bool)validate:(id *)arg1;
- (_Bool)write:(id)arg1 error:(id *)arg2;
- (_Bool)read:(id)arg1 error:(id *)arg2;
- (void)unsetQa_message;
- (void)unsetQa_policy;
- (void)unsetQa_content_action;
- (void)unsetQa_user_action;
- (void)unsetAgent_id;
- (void)unsetTicket_id;
- (void)unsetAuditor_id;
- (void)unsetAudit_id;
- (void)unsetId;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithId:(id)arg1 audit_id:(id)arg2 auditor_id:(id)arg3 ticket_id:(id)arg4 agent_id:(id)arg5 qa_user_action:(id)arg6 qa_content_action:(id)arg7 qa_policy:(id)arg8 qa_message:(id)arg9;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

