//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface DeeplinkFactory : NSObject
{
}

+ (unsigned long long)deepLinkTypeForURL:(id)arg1;
+ (id)sendbirdChannelPrefixString:(id)arg1;
+ (id)viewControllerForSendbirdChannelURL:(id)arg1 isInvite:(_Bool)arg2 accountContext:(id)arg3;
+ (id)viewControllerForChatShareableLinkURL:(id)arg1 channelURL:(id)arg2 accountContext:(id)arg3;
+ (id)viewControllerForModel:(id)arg1 accountContext:(id)arg2;
+ (void)handleMailToURL:(id)arg1 accountContext:(id)arg2;
+ (id)handleUnknownURL:(id)arg1 accountContext:(id)arg2;
+ (id)viewControllerForURL:(id)arg1 accountContext:(id)arg2;

@end

