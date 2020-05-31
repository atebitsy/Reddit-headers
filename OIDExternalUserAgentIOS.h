//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppAuth/ASWebAuthenticationPresentationContextProviding-Protocol.h>
#import <AppAuth/OIDExternalUserAgent-Protocol.h>
#import <AppAuth/SFSafariViewControllerDelegate-Protocol.h>

@class ASWebAuthenticationSession, NSString, SFAuthenticationSession, SFSafariViewController, UIViewController;
@protocol OIDExternalUserAgentSession;

@interface OIDExternalUserAgentIOS : NSObject <SFSafariViewControllerDelegate, ASWebAuthenticationPresentationContextProviding, OIDExternalUserAgent>
{
    UIViewController *_presentingViewController;
    _Bool _externalUserAgentFlowInProgress;
    id <OIDExternalUserAgentSession> _session;
    SFSafariViewController *_safariVC;
    SFAuthenticationSession *_authenticationVC;
    ASWebAuthenticationSession *_webAuthenticationVC;
}

- (void).cxx_destruct;
- (id)presentationAnchorForWebAuthenticationSession:(id)arg1;
- (void)safariViewControllerDidFinish:(id)arg1;
- (void)cleanUp;
- (void)dismissExternalUserAgentAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)presentExternalUserAgentRequest:(id)arg1 session:(id)arg2;
- (id)initWithPresentingViewController:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

