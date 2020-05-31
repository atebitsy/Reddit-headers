//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ObjectObserverProtocol-Protocol.h"

@class AccountSettings, NSArray, NSString;
@protocol MainScreenTabProviderDelegate;

@interface MainScreenTabProvider : NSObject <ObjectObserverProtocol>
{
    _Bool _isCategoryScrollerEnabled;
    _Bool _isForYouFeedEnabled;
    _Bool _isStayHomeFeedEnabled;
    id <MainScreenTabProviderDelegate> _delegate;
    NSArray *_tabs;
    AccountSettings *_settings;
    NSArray *_requiredTabs;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *requiredTabs; // @synthesize requiredTabs=_requiredTabs;
@property(readonly, nonatomic) _Bool isStayHomeFeedEnabled; // @synthesize isStayHomeFeedEnabled=_isStayHomeFeedEnabled;
@property(readonly, nonatomic) _Bool isForYouFeedEnabled; // @synthesize isForYouFeedEnabled=_isForYouFeedEnabled;
@property(readonly, nonatomic) _Bool isCategoryScrollerEnabled; // @synthesize isCategoryScrollerEnabled=_isCategoryScrollerEnabled;
@property(readonly, nonatomic) AccountSettings *settings; // @synthesize settings=_settings;
@property(copy, nonatomic) NSArray *tabs; // @synthesize tabs=_tabs;
@property(nonatomic) __weak id <MainScreenTabProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (void)updateContentViewsForData:(id)arg1;
- (void)changeTabsTo:(id)arg1;
- (_Bool)areTabsValid:(id)arg1;
- (id)tabsWithStayHomeTabInserted:(id)arg1;
- (id)tabsWithForYouTabInserted:(id)arg1;
- (id)defaultTabs;
- (void)configureTabs;
- (id)initWithAccountSettings:(id)arg1 isForYouFeedEnabled:(_Bool)arg2 isCategoryScrollerEnabled:(_Bool)arg3 isStayHomeFeedEnabled:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

