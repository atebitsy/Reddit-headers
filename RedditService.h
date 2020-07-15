//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class Account, AccountIdentifiers, BaseStore, ExperimentManager, LegacyCredentials, Loid, NSArray, NSHTTPCookie, NSURL, NSURLSession, RedditServiceBackoffState, SessionTracker;
@protocol OS_dispatch_queue;

@interface RedditService : NSObject
{
    _Bool _isCurrentService;
    _Bool _isRefreshingToken;
    _Bool _isUnableToRefreshToken;
    Account *_account;
    Loid *_loid;
    SessionTracker *_sessionTracker;
    AccountIdentifiers *_accountIdentifiers;
    NSURL *_dataDirectory;
    BaseStore *_userStore;
    BaseStore *_subredditStore;
    BaseStore *_messageStore;
    BaseStore *_multiStore;
    BaseStore *_liveEventStore;
    BaseStore *_submittedPostStore;
    BaseStore *_postStore;
    BaseStore *_commentStore;
    BaseStore *_postCollectionStore;
    BaseStore *_liveStreamStore;
    ExperimentManager *_experimentManager;
    NSObject<OS_dispatch_queue> *_tokenRefreshQueue;
    NSObject<OS_dispatch_queue> *_pendingRequestQueue;
    RedditServiceBackoffState *_backoffState;
    NSURLSession *_session;
    LegacyCredentials *_credentials;
    NSObject<OS_dispatch_queue> *_parseQueue;
    NSArray *_requestProcessors;
    NSArray *_responseProcessors;
}

+ (id)oauthClientID;
+ (id)graphQLOperationNameForOperationText:(id)arg1;
+ (id)graphQLOperationNameForPersistedId:(id)arg1;
+ (id)graphQLOperationIdForRequest:(id)arg1;
+ (id)graphQLOperationNameForRequest:(id)arg1;
+ (id)graphQLOperations;
+ (id)defaultHeaders;
+ (id)infoFromTargetingInputs:(id)arg1;
+ (id)targetingInputsFromInfo:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *responseProcessors; // @synthesize responseProcessors=_responseProcessors;
@property(readonly, nonatomic) NSArray *requestProcessors; // @synthesize requestProcessors=_requestProcessors;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *parseQueue; // @synthesize parseQueue=_parseQueue;
@property(retain, nonatomic) LegacyCredentials *credentials; // @synthesize credentials=_credentials;
@property(readonly, nonatomic) NSURLSession *session; // @synthesize session=_session;
@property(retain, nonatomic) RedditServiceBackoffState *backoffState; // @synthesize backoffState=_backoffState;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *pendingRequestQueue; // @synthesize pendingRequestQueue=_pendingRequestQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *tokenRefreshQueue; // @synthesize tokenRefreshQueue=_tokenRefreshQueue;
@property(nonatomic) _Bool isUnableToRefreshToken; // @synthesize isUnableToRefreshToken=_isUnableToRefreshToken;
@property(nonatomic) _Bool isRefreshingToken; // @synthesize isRefreshingToken=_isRefreshingToken;
@property(readonly, nonatomic) ExperimentManager *experimentManager; // @synthesize experimentManager=_experimentManager;
@property(readonly, nonatomic) BaseStore *liveStreamStore; // @synthesize liveStreamStore=_liveStreamStore;
@property(readonly, nonatomic) BaseStore *postCollectionStore; // @synthesize postCollectionStore=_postCollectionStore;
@property(readonly, nonatomic) BaseStore *commentStore; // @synthesize commentStore=_commentStore;
@property(readonly, nonatomic) BaseStore *postStore; // @synthesize postStore=_postStore;
@property(readonly, nonatomic) BaseStore *submittedPostStore; // @synthesize submittedPostStore=_submittedPostStore;
@property(readonly, nonatomic) BaseStore *liveEventStore; // @synthesize liveEventStore=_liveEventStore;
@property(readonly, nonatomic) BaseStore *multiStore; // @synthesize multiStore=_multiStore;
@property(readonly, nonatomic) BaseStore *messageStore; // @synthesize messageStore=_messageStore;
@property(readonly, nonatomic) BaseStore *subredditStore; // @synthesize subredditStore=_subredditStore;
@property(readonly, nonatomic) BaseStore *userStore; // @synthesize userStore=_userStore;
@property(readonly, nonatomic) NSURL *dataDirectory; // @synthesize dataDirectory=_dataDirectory;
@property(nonatomic) _Bool isCurrentService; // @synthesize isCurrentService=_isCurrentService;
@property(readonly, nonatomic) AccountIdentifiers *accountIdentifiers; // @synthesize accountIdentifiers=_accountIdentifiers;
@property(readonly, nonatomic) SessionTracker *sessionTracker; // @synthesize sessionTracker=_sessionTracker;
@property(retain, nonatomic) Loid *loid; // @synthesize loid=_loid;
@property(retain, nonatomic) Account *account; // @synthesize account=_account;
- (void)createAuthenticatedRequest:(id)arg1 successHandler:(CDUnknownBlockType)arg2 failureHandler:(CDUnknownBlockType)arg3;
- (void)startRequest:(id)arg1 successHandler:(CDUnknownBlockType)arg2 failureHandler:(CDUnknownBlockType)arg3;
- (id)graphQLRequestForOperationName:(id)arg1 variables:(id)arg2;
- (id)httpErrorFromResponse:(id)arg1 json:(id)arg2;
- (id)tokenRefreshRequest;
- (void)endTracingNetworkSpanForRequest:(id)arg1 context:(id)arg2;
- (id)beginTracingNetworkSpanForRequest:(id)arg1 context:(id)arg2;
- (void)endTracingCredentialAcquisitionWithContext:(id)arg1;
- (id)beginTracingCredentialAcquisitionWithContext:(id)arg1;
- (id)activeTracingContext;
- (void)notifyBackoffResetForRequest:(id)arg1;
- (void)notifyBackoffIncrementedForRequest:(id)arg1 response:(id)arg2;
- (void)notifyBackoffEnforcedWithRequest:(id)arg1;
- (void)notifyTokenDidRefresh;
- (void)notifyTokenRefreshFailureWithError:(id)arg1 response:(id)arg2 duration:(double)arg3;
- (void)notifyMissingToken;
- (void)notifyRequestError:(id)arg1 request:(id)arg2 response:(id)arg3 data:(id)arg4 duration:(double)arg5;
- (void)notifyTaskDidFinishWithResponse:(id)arg1;
- (void)notifyTaskWillStartWithRequest:(id)arg1;
- (void)processResponse:(id)arg1;
- (void)processRequest:(id)arg1;
- (void)authorizeRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)refreshTokenForFailedRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)createAuthenticatedRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) _Bool usePersistedOperations;
- (void)invalidate;
- (void)dealloc;
@property(readonly, nonatomic) NSHTTPCookie *modMailCookie;
- (id)initWithAccount:(id)arg1 dataDirectory:(id)arg2 credentials:(id)arg3 accountIdendifiers:(id)arg4 requestProcessors:(id)arg5 responseProcessors:(id)arg6 sessionTracker:(id)arg7 loid:(id)arg8;
- (id)initWithAccount:(id)arg1 dataDirectory:(id)arg2;
- (void)deleteDraftPost:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)saveDraftPostForSubmittedPost:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchDraftPostCountWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchDraftPostsWithCompletion:(CDUnknownBlockType)arg1;
- (void)hideAward:(id)arg1 onTargetWithId:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)reportThingWithParameters:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)hideAward:(id)arg1 post:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)hideAward:(id)arg1 comment:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)reportAward:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)reportUsernameToCrisisTextLine:(id)arg1 reason:(id)arg2 siteReason:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)reportLiveStreamPost:(id)arg1 reason:(id)arg2 siteReason:(id)arg3 relativeReportTime:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)reportLiveStream:(id)arg1 reason:(id)arg2 siteReason:(id)arg3 relativeReportTime:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)reportMessage:(id)arg1 reason:(id)arg2 siteReason:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)reportComment:(id)arg1 reason:(id)arg2 siteReason:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)reportPost:(id)arg1 reason:(id)arg2 siteReason:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)reportUser:(id)arg1 reason:(id)arg2 detail:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)killLiveStream:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)deleteLiveStream:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)endBroadcast:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)createBroadcastWithSubredditInfo:(id)arg1 title:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)checkBroadcastEligibilityWithSubredditInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)sendChatMessage:(id)arg1 toLiveStream:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)unsetVoteStateForLiveStream:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)downvoteLiveStream:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)upvoteLiveStream:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)sendHeartbeatForLiveStream:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)sendHeartbeatForLiveStreamPost:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchLiveStreamWithPostId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchStreamsWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchTopLiveStreamsForPopularFeedWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchTopLiveStreamsForHomeFeedWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchTopLiveStreamsForSubredditInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchRecommendedBroadcastSubredditInfoItemsWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchRecommendedViewerPromptForCurrentStream:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchRecommendedViewerSubredditInfoItemsWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchLiveStreamSubscriptionDetails:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchConfigWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchLiveStreamingConfigForPopularFeedWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchLiveStreamingConfigForHomeFeedWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchLiveStreamingConfigForDeeplinkSubredditName:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchLiveStreamingConfigForSubredditInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchLiveStreamingConfigForSubreddit:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)liveStreamWithData:(id)arg1;
- (void)markObjectAsReadWithInboxMessageId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchNotificationPreferencesWithCompletion:(CDUnknownBlockType)arg1;
- (void)saveNotificationPreferences:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)unlinkIdentityProvider:(id)arg1 currentPassword:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)linkIdentityProviderWithIdentityToken:(id)arg1 currentPassword:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchConfigWithLegacyExperiments:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setAuthorFlairEnabled:(_Bool)arg1 inSubreddit:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setAuthorFlair:(id)arg1 forUser:(id)arg2 inSubreddit:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)registerPushNotificationToken:(id)arg1 forAccountsWithAuthTokens:(id)arg2 authorizationStatus:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)registerPushNotificationToken:(id)arg1 authorizationStatus:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)requestUsernameForEmail:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)sendVerificationEmailWithCompletion:(CDUnknownBlockType)arg1;
- (void)changeEmailAddress:(id)arg1 currentPassword:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)changePasswordFromCurrentPassword:(id)arg1 toNewPassword:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)requestPasswordResetForUsername:(id)arg1 email:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchSuggestedUsernamesWithCompletion:(CDUnknownBlockType)arg1;
- (void)isUsernameAvailable:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)saveAccountPreferences:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchAccountPreferencesWithCompletion:(CDUnknownBlockType)arg1;
- (void)updateUsername:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchAccountWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchCommentsAdForPost:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)validatePremiumCancelSubscriptionAcceptanceWithId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchPremiumSubscriptionInfoWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchPremiumCancellationOfferWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchActiveCoinSaleInfoWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchRecommendedCoinPackageInfoForAward:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchGoldProductsInfoWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchGeoRegionsWithCompletion:(CDUnknownBlockType)arg1;
- (void)updateInboxActivitySeenState:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchBadgeIndicatorsWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchBadgeCountsWithCompletion:(CDUnknownBlockType)arg1;
- (void)markAllMessagesAsReadWithCompletion:(CDUnknownBlockType)arg1;
- (void)markNotificationAsRead:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)markNotificationAsReadForId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)markMessageAsRead:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)replyToMessage:(id)arg1 withText:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)sendMessageToUser:(id)arg1 withSubject:(id)arg2 text:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)messageWithData:(id)arg1;
- (id)liveCommentSessionForLiveStream:(id)arg1 withDelegate:(id)arg2;
- (id)liveCommentSessionForPost:(id)arg1 withDelegate:(id)arg2;
- (void)convertCommentMarkdownToRichText:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setIsReceivingReplies:(_Bool)arg1 forComment:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)unlockComment:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)lockComment:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchAwardingTotalsForComment:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateRemovedComment:(id)arg1 asSpam:(_Bool)arg2 moderatorName:(id)arg3;
- (void)updateUncollapsedComment:(id)arg1 moderatorName:(id)arg2;
- (void)updateApprovedComment:(id)arg1 moderatorName:(id)arg2;
- (void)removeComments:(id)arg1 asSpam:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)removeComment:(id)arg1 asSpam:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)approveComments:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)approveComment:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)showComment:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)undistinguishComment:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)distinguishCommentAsAdmin:(id)arg1 sticky:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)distinguishCommentAsModerator:(id)arg1 sticky:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)deleteComment:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)unsaveComment:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)saveComment:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)downvoteComment:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)upvoteComment:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)editComment:(id)arg1 withRichText:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)editComment:(id)arg1 withText:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)replyToComment:(id)arg1 withRichText:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)replyToComment:(id)arg1 withText:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)replyToPost:(id)arg1 withRichText:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)replyToPost:(id)arg1 withText:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)loadingMoreCommentCommentWithData:(id)arg1;
- (id)commentWithData:(id)arg1;
- (void)updateFavoriteState:(_Bool)arg1 forMulti:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateFollowState:(_Bool)arg1 forMulti:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)copyMulti:(id)arg1 withNewName:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)removeSubredditWithName:(id)arg1 fromMulti:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)addSubredditsWithNames:(id)arg1 toMulti:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)addSubredditWithName:(id)arg1 toMulti:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchMultiWithName:(id)arg1 forUsername:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)deleteMulti:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateMulti:(id)arg1 displayName:(id)arg2 iconURL:(id)arg3 descriptionText:(id)arg4 visibility:(long long)arg5 completion:(CDUnknownBlockType)arg6;
- (void)createMultiWithName:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)multiWithGraphQLData:(id)arg1;
- (id)multiWithData:(id)arg1;
- (void)visitPost:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)voteForPollOnPost:(id)arg1 pollOptionId:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setIsReceivingPostReplies:(_Bool)arg1 forPost:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchAwardingTotalsForPost:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)unfollowEventPost:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)followEventPost:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)editSelfText:(id)arg1 forPost:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchDuplicatePostsForPost:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateFlair:(id)arg1 forPost:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)unsetStickyForPost:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setStickyForPost:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)unlockCommentsForPost:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)lockCommentsForPost:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateRemovedPost:(id)arg1 asSpam:(_Bool)arg2 moderatorName:(id)arg3;
- (void)updateApprovedPost:(id)arg1 moderatorName:(id)arg2;
- (void)removePosts:(id)arg1 asSpam:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)removePost:(id)arg1 asSpam:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)approvePosts:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)approvePost:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)undistinguishPost:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)distinguishPostAsAdmin:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)distinguishPostAsModerator:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeOriginalContentTagFromPost:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addOriginalContentTagToPost:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeNSFWTagFromPost:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addNSFWTagToPost:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeSpoilerTagFromPost:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addSpoilerTagToPost:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)unhidePost:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)hidePost:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)deletePost:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchSavedPostCategories:(CDUnknownBlockType)arg1;
- (void)unsavePost:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)savePost:(id)arg1 toCategoryWithName:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)downvotePost:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)upvotePost:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchPostsWithIds:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchPostWithId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)postWithGraphQLData:(id)arg1 configureWithBlock:(CDUnknownBlockType)arg2;
- (id)postWithData:(id)arg1;
- (void)handlePremiumPackageWithJSON:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleCoinPackageWithJSON:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)validatePurchaseWithMetadata:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)submitExposureEvents:(id)arg1 targetingInfo:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchExperimentVariantsWithTargetingInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchTopAwardedPostsWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchSortedUsableAwardTotalsForSubreddit:(id)arg1 post:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateAccountCoinsWithAmount:(id)arg1;
- (id)errorForStatus:(id)arg1;
- (void)awardWithPostPk:(id)arg1 options:(id)arg2 correlationId:(id)arg3 completion:(CDUnknownBlockType)arg4 handler:(CDUnknownBlockType)arg5;
- (void)awardComment:(id)arg1 options:(id)arg2 correlationId:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)awardLiveStream:(id)arg1 options:(id)arg2 correlationId:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)awardPost:(id)arg1 options:(id)arg2 correlationId:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)fetchPostCollectionsWithIds:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)postCollectionWithGraphQLData:(id)arg1;
- (void)submitPost:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)parseGraphQLPostData:(id)arg1 parseSubreddits:(_Bool)arg2 parseCrosspostSubreddits:(_Bool)arg3;
- (CDUnknownBlockType)parsePostWithSubredditBlock;
- (id)moderatedSubredditsListingForUserId:(id)arg1 first:(long long)arg2;
- (id)geoContributableSubredditsListing;
- (id)globalCommunityTagsListing:(_Bool)arg1;
- (id)blockedUserIdsListing;
- (id)subredditsListingForMulti:(id)arg1;
- (id)favoritedMultiredditsListing;
- (id)allMultiredditsListing;
- (id)followedEventPostsListingWithStartDate:(id)arg1 endDate:(id)arg2;
- (id)allEventPostsListingWithStartDate:(id)arg1 endDate:(id)arg2;
- (id)usernameMentionsListing;
- (id)commentRepliesListing;
- (id)postRepliesListing;
- (id)allNotificationsListing;
- (id)hiddenPostsListing;
- (id)downvotedPostsListing;
- (id)upvotedPostsListing;
- (id)savedPostsListing;
- (id)forYouPostFeedWithVariant:(id)arg1 categoryIds:(id)arg2 subredditIds:(id)arg3 mwebLoid:(id)arg4 region:(id)arg5 sort:(unsigned long long)arg6 range:(unsigned long long)arg7;
- (id)postFeedForUsername:(id)arg1 withSort:(unsigned long long)arg2 range:(unsigned long long)arg3;
- (id)postFeedForMulti:(id)arg1 withSort:(unsigned long long)arg2 range:(unsigned long long)arg3;
- (id)postFeedForSubredditCategory:(id)arg1 withSort:(unsigned long long)arg2 range:(unsigned long long)arg3;
- (id)postFeedForSubreddit:(id)arg1 withSort:(unsigned long long)arg2 range:(unsigned long long)arg3;
- (id)allPostFeedWithSort:(unsigned long long)arg1 range:(unsigned long long)arg2;
- (id)popularPostFeedWithSort:(unsigned long long)arg1 range:(unsigned long long)arg2 geoRegion:(id)arg3;
- (id)adhocMultiPostFeedWithSubredditNames:(id)arg1 sort:(unsigned long long)arg2 range:(unsigned long long)arg3;
- (id)adhocMultiPostFeedWithSubredditIds:(id)arg1 sort:(unsigned long long)arg2 range:(unsigned long long)arg3;
- (id)recommendedVideoPostFeedWithSort:(unsigned long long)arg1 range:(unsigned long long)arg2 seedSubredditId:(id)arg3;
- (id)homePostFeedWithSort:(unsigned long long)arg1 range:(unsigned long long)arg2;
- (void)fetchLiveEventWithID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchFeaturedLiveEventAndAnnouncementsWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchFeaturedLiveEventAndAnnouncementWithCompletion:(CDUnknownBlockType)arg1;
- (id)liveEventWithGraphQLData:(id)arg1;
- (id)liveEventWithData:(id)arg1;
- (void)suggestSubredditGeoPlace:(id)arg1 forSubreddit:(id)arg2 sessionId:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)searchForGeoPlaceWithInput:(id)arg1 sessionId:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchActiveLanguagesWithCompletion:(CDUnknownBlockType)arg1;
- (void)updateNotificationSettingsWithUpdateSubredditNotificationSettingsInput:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchNotificationSettingsForSubredditsWithNames:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchSettingsForSubredditsWithNames:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateAuthorFlairSettingsForSubreddit:(id)arg1 isEnabled:(_Bool)arg2 isSelfAssignable:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)updatePostFlairSettingsForSubreddit:(id)arg1 isEnabled:(_Bool)arg2 isSelfAssignable:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)updateSubredditRecommendationPreferences:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchPowerupsInfoForSubreddit:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchSupportersForSubreddit:(id)arg1 supporterType:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateSettingsWithSubredditSettingsInput:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updatePrimaryTagForSubreddit:(id)arg1 primaryTag:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchPrimaryTagForSubreddit:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)createSubredditWithName:(id)arg1 publicDescription:(id)arg2 isNSFW:(_Bool)arg3 type:(long long)arg4 communityTags:(id)arg5 primaryCommunityTag:(id)arg6 completion:(CDUnknownBlockType)arg7;
- (void)validateSubredditName:(id)arg1 publicDescription:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchPostingDifficultyScoreForSubreddit:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchFocusVerticalsRecommendedSubredditsWithPostsPageSize:(long long)arg1 isNsfwIncluded:(_Bool)arg2 version:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)fetchSubredditMentionsWithSubredditNames:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchSubredditsWithNames:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchSubredditWikiIndexForSubredditName:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchSubredditWikiPage:(id)arg1 subredditName:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)subredditRecommendationsForSubredditNames:(id)arg1 excludingSubredditNames:(id)arg2 count:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)subredditTypeaheadSearchWithQuery:(id)arg1 includeNSFW:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchUsableAwardsForSubredditWithName:(id)arg1 includeSuperChatAwards:(_Bool)arg2 includeSubreddit:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)fetchUsableAwardsForSubredditWithName:(id)arg1 includeSuperChatAwards:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchUsableAwardsForSubreddit:(id)arg1 includeSuperChatAwards:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)sendMessageToModeratorsOfSubreddit:(id)arg1 withSubject:(id)arg2 text:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setNotificationLevel:(long long)arg1 forSubreddit:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setBannerImageAtURL:(id)arg1 forSubreddit:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setIconImageAtURL:(id)arg1 forSubreddit:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchSubredditEmojis:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)deleteFlairTemplateForTemplateID:(id)arg1 forSubreddit:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateAuthorFlairTemplate:(id)arg1 forSubreddit:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updatePostFlairTemplate:(id)arg1 forSubreddit:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchAuthorFlairsForSubreddit:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchCrosspostableSubredditNamesWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchPostFlairsForSubreddit:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchStructuredStyleAndWidgetsForSubreddit:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchSubredditsForLocation:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchFandomCategoryWithCategoryId:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)fetchCategoriesForSubreddit:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchSubredditsForCategory:(id)arg1 shouldShuffle:(_Bool)arg2 limit:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)fetchSubredditCategoriesWithSort:(long long)arg1 includeExtendedCategories:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)unfavoriteSubreddit:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)favoriteSubreddit:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)subscribeToSubreddits:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)subscribeToSubredditWithIds:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)unsubscribeFromSubreddit:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)subscribeToSubreddit:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)optInToQuarantinedSubredditNamed:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchSubredditWithName:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)subredditWithGraphQLData:(id)arg1;
- (id)subredditWithData:(id)arg1;
- (void)postDidBlockUserNotificationForUsername:(id)arg1;
- (void)blockAuthorOfPost:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)blockAuthorOfComment:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)blockAuthorOfMessage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)blockUser:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)unfollowUser:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)followUser:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchTrophiesForUser:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchUserWithUsername:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchGQLUserWithUsername:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)userWithGQLData:(id)arg1;
- (id)userWithData:(id)arg1;
- (void)removePostsAndComments:(id)arg1 asSpam:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)approvePostsAndComments:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)moderationAddRequestForSubreddit:(id)arg1 username:(id)arg2 additionType:(id)arg3 additionalParameters:(id)arg4;
- (id)moderationRemovalRequestForSubreddit:(id)arg1 userID:(id)arg2 removalType:(id)arg3;
- (void)fetchBanContextWithId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)banUser:(id)arg1 inSubreddit:(id)arg2 reason:(id)arg3 modNote:(id)arg4 message:(id)arg5 duration:(id)arg6 context:(id)arg7 completion:(CDUnknownBlockType)arg8;
- (void)unbanUser:(id)arg1 inSubreddit:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)unbanBannedUser:(id)arg1 inSubreddit:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)isUser:(id)arg1 bannedInSubreddit:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)unmuteUser:(id)arg1 inSubreddit:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)unmuteMutedUser:(id)arg1 inSubreddit:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)muteUser:(id)arg1 inSubreddit:(id)arg2 reason:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)isUser:(id)arg1 mutedInSubreddit:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)removeApprovedUser:(id)arg1 fromSubreddit:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)removeUser:(id)arg1 asApprovedUserFromSubreddit:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)addUser:(id)arg1 asApprovedUserForSubreddit:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)declineInvitationToSubreddit:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)acceptInvitationToSubreddit:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeModerator:(id)arg1 fromSubreddit:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setPermissions:(unsigned long long)arg1 forModerator:(id)arg2 inSubreddit:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)addModerator:(id)arg1 toSubreddit:(id)arg2 withPermissions:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)searchForUsername:(id)arg1 inSubreddit:(id)arg2 searchType:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)searchForModeratorUsername:(id)arg1 inSubreddit:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)searchForApprovedUsername:(id)arg1 inSubreddit:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)searchForMutedUsername:(id)arg1 inSubreddit:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)searchForBannedUsername:(id)arg1 inSubreddit:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchModPermissionsForSubreddit:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchRulesForSubreddit:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchLiveStreamRulesWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchSitewideRulesWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchMetaUserRatingsWithRatingType:(id)arg1 inSubreddit:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchIsTrialAvailableForProductId:(id)arg1 inSubreddit:(id)arg2 receipt:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)validateMetaPurchaseWithMetadata:(id)arg1 subredditPK:(id)arg2 productID:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setSelectedMetaBadge:(id)arg1 subreddit:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)voteInMetaPoll:(id)arg1 withOption:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchMetaPollsForPosts:(id)arg1 inSubreddit:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchMetaProductCollectionsForSubreddit:(id)arg1 types:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchMetaProductsForSubreddit:(id)arg1 ownerPKs:(id)arg2 types:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)fetchMetaProductWithPK:(id)arg1 inSubreddit:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchMetaBadgesForSubreddit:(id)arg1 userPKs:(id)arg2 onlySelected:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)fetchMetaBadgeForSubreddit:(id)arg1 badgePK:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchMetaCommunityInfoForSubreddit:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchMetaCommunitiesWithCompletion:(CDUnknownBlockType)arg1;

@end

