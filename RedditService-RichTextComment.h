//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RedditCore/RedditService.h>

@class AdEventsManager, AnalyticsManager, BadgeCountManager, ChatMessageStore, ChatNetworkManager, ChatSubredditMessageStore, ConfigManager, ContactByChannelStore, ContactStore, ContentDiskCacheManager, CrosspostManager, DatabaseManager, DirectChannelStore, FocusVerticalManager, InitialHomeFeedController, LocationFilterManager, LoggedOutHiddenPostManager, MetaManager, NSSet, NewsPersonalizationManager, PostCommentCache, PostHistoryManager, PostSubmissionManager, PreferenceSyncManager, RecentChatPostManager, SubredditChannelStore, SubredditListManager, SubredditManager, SubscribedSubredditsManager, UploadRequestManager, _TtC6Reddit13SurveyManager;

@interface RedditService (RichTextComment)
- (void)editComment:(id)arg1 withText:(id)arg2 isRichText:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)replyToComment:(id)arg1 withText:(id)arg2 isRichText:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)replyToPost:(id)arg1 withText:(id)arg2 isRichText:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (_Bool)isChatMessageReportable:(id)arg1;
- (_Bool)isOwnChatMessage:(id)arg1;
- (id)chatMessageWithBasicDataInChannel:(id)arg1;
- (id)chatMessageWithSnoomojiName:(id)arg1 inChannel:(id)arg2;
- (id)chatMessageWithGifData:(id)arg1 inChannel:(id)arg2;
- (id)chatMessageWithImage:(id)arg1 inChannel:(id)arg2;
- (id)chatMessageWithPost:(id)arg1 inChannel:(id)arg2;
- (id)chatMessageWithText:(id)arg1 inChannel:(id)arg2;
- (id)chatMessageWithURL:(id)arg1 inChannel:(id)arg2;
@property(readonly, nonatomic) _TtC6Reddit13SurveyManager *surveyManager;
@property(readonly, nonatomic) UploadRequestManager *uploadRequestManager;
@property(readonly, nonatomic) PreferenceSyncManager *preferenceSyncManager;
@property(readonly, nonatomic) MetaManager *metaManager;
@property(copy, nonatomic) NSSet *reportedMessageIds;
@property(copy, nonatomic) NSSet *blockedUserIds;
@property(readonly, nonatomic) RecentChatPostManager *recentChatPostManager;
@property(readonly, nonatomic) ContactByChannelStore *contactByChannelStore;
@property(readonly, nonatomic) SubredditChannelStore *subredditChannelStore;
@property(readonly, nonatomic) DirectChannelStore *directChannelStore;
@property(readonly, nonatomic) ContactStore *contactStore;
@property(readonly, nonatomic) ChatSubredditMessageStore *chatSubredditMessageStore;
@property(readonly, nonatomic) ChatMessageStore *chatMessageStore;
- (void)createChatStores;
@property(readonly, nonatomic) DatabaseManager *dbManager;
@property(readonly, nonatomic) AnalyticsManager *analyticsManager;
@property(readonly, nonatomic) AdEventsManager *adEventsManager;
@property(readonly, nonatomic) FocusVerticalManager *focusVerticalManager;
@property(readonly, nonatomic) SubredditManager *subredditManager;
@property(readonly, nonatomic) NewsPersonalizationManager *newsPersonalizationManager;
@property(readonly, nonatomic) CrosspostManager *crosspostManager;
@property(readonly, nonatomic) ContentDiskCacheManager *contentDiskCacheManager;
@property(readonly, nonatomic) PostSubmissionManager *postSubmissionManager;
@property(readonly, nonatomic) SubscribedSubredditsManager *subscribedSubredditsManager;
@property(readonly, nonatomic) PostCommentCache *postCommentCache;
@property(readonly, nonatomic) ChatNetworkManager *chatNetworkManager;
@property(readonly, nonatomic) ConfigManager *configManager;
@property(readonly, nonatomic) LoggedOutHiddenPostManager *loggedOutHiddenPostManager;
@property(readonly, nonatomic) InitialHomeFeedController *initialHomeFeedController;
@property(readonly, nonatomic) BadgeCountManager *badgeManager;
@property(readonly, nonatomic) LocationFilterManager *locationFilterManager;
@property(readonly, nonatomic) SubredditListManager *subredditHistoryManager;
@property(readonly, nonatomic) PostHistoryManager *postHistoryManager;
@end

