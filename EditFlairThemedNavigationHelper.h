//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class RedditService, UINavigationController, UIViewController;
@protocol EditFlairViewControllerDelegate;

@interface EditFlairThemedNavigationHelper : NSObject
{
    UIViewController<EditFlairViewControllerDelegate> *_fromVC;
    UINavigationController *_navigationController;
    RedditService *_service;
}

@property(retain, nonatomic) RedditService *service; // @synthesize service=_service;
@property(retain, nonatomic) UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(retain, nonatomic) UIViewController<EditFlairViewControllerDelegate> *fromVC; // @synthesize fromVC=_fromVC;
- (void).cxx_destruct;
- (void)presentEditFlairViewControllerWithFlair:(id)arg1 flairType:(long long)arg2 flairEditType:(long long)arg3 subreddit:(id)arg4 post:(id)arg5 modPermissions:(unsigned long long)arg6;
- (void)navigateToEditFlairViewControllerWithFlair:(id)arg1 flairType:(long long)arg2 flairEditType:(long long)arg3 subreddit:(id)arg4 post:(id)arg5 modPermissions:(unsigned long long)arg6;
- (id)navBarTitleTextAttributes;
- (id)initWithTheme:(id)arg1 fromVC:(id)arg2 navigationController:(id)arg3 redditService:(id)arg4;

@end
