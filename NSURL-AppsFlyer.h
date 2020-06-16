//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSURL.h>

@class NSString;

@interface NSURL (AppsFlyer)
+ (id)redditUrlWithAppsFlyerParameters:(id)arg1;
+ (id)redditAppURLWithPath:(id)arg1;
+ (id)redditUrlWithBranchParameters:(id)arg1;
@property(readonly, nonatomic) NSString *red_linkedVaultTransferRecipient;
@property(readonly, nonatomic) NSString *red_linkedVaultSubreddit;
@property(readonly, nonatomic) NSString *red_emailVerificationCode;
@property(readonly, nonatomic) NSString *red_linkedSubredditWikiPathName;
@property(readonly, nonatomic) NSString *red_linkedSitewideWikiPathName;
@property(readonly, nonatomic) NSString *red_linkedPostId;
@property(readonly, nonatomic) NSString *red_linkedCommentId;
@property(readonly, nonatomic) NSString *subredditNameURLComponent;
@property(readonly, nonatomic) NSString *postIDURLComponentFromCommentDeeplink;
@property(readonly, nonatomic) NSString *postIDURLComponentFromPostDeeplink;
@property(readonly, nonatomic) NSString *userNameURLComponent;
@property(readonly, nonatomic) _Bool red_isShareableChatURL;
@property(readonly, nonatomic) _Bool red_isDirectChatURL;
@property(readonly, nonatomic) _Bool red_isSubredditChatURL;
@property(readonly, nonatomic) _Bool red_isChatURL;
- (id)sendbirdChannelPrefixString:(id)arg1;
@property(readonly, nonatomic) NSString *channelURLComponent;
@property(readonly, nonatomic) unsigned long long feedSort;
@property(readonly, nonatomic) unsigned long long feedRange;
@property(readonly, nonatomic) long long deeplinkOrigin;
- (id)URLBySettingDeeplinkOrigin:(long long)arg1;
- (_Bool)isFIFEUrl;
- (id)FIFEURLRequestingCircledCropToDimensions:(struct CGSize)arg1 isProfile:(_Bool)arg2;
- (id)FIFEURLRequestingCenteredCropToDimensions:(struct CGSize)arg1;
- (id)FIFEURLRequestingSmartCropToDimensions:(struct CGSize)arg1 stripExistingOptions:(_Bool)arg2;
- (id)FIFEURLRequestingSmartCropToDimensions:(struct CGSize)arg1;
- (id)FIFEURLRequestingSmartCropToMaxSize:(double)arg1;
- (id)FIFEURLRequestingDimensions:(struct CGSize)arg1;
- (id)FIFEURLRequestingDimensions:(struct CGSize)arg1 stripExistingOptions:(_Bool)arg2;
- (id)FIFEURLRequestingExactDimensions:(struct CGSize)arg1;
- (id)FIFEURLRequestingMaxSize:(double)arg1;
- (id)URLByRemovingFIFEInfo;
- (id)FIFEArgumentsArray;
@property(readonly, copy, nonatomic) NSString *FIFEArgumentsString;
- (struct CGSize)maximumFIFEImageSize;
- (id)FIFEURLWithArguments:(id)arg1 stripExistingOptions:(_Bool)arg2;
- (id)FIFELegacyURLWithArgumentsString:(id)arg1;
- (id)legacyFIFEArgumentsString;
- (id)URLByAppendingTrailingSlash;
- (_Bool)isLegacyFIFEURLWithArguments;
- (_Bool)isLegacyFIFEURL;
- (unsigned long long)numberOfPathComponentsInLegacyFIFEURL;
@end

