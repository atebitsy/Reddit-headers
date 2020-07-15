//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RedditCore/ObservableObject.h>

#import <RedditCore/BaseModel-Protocol.h>
#import <RedditCore/ReportableModel-Protocol.h>

@class AuthorFlair, Media, ModerationInfo, NSArray, NSAttributedString, NSDate, NSDictionary, NSString, NSURL, PostAuthorOnlyInfo, PostEventInfo, PostFlair, PostLocation, PostPoll, RichText, Subreddit;

@interface Post : ObservableObject <BaseModel, ReportableModel>
{
    _Bool _isScoreHidden;
    _Bool _showMedia;
    _Bool _isNSFW;
    _Bool _isArchived;
    _Bool _isHidden;
    _Bool _isLocked;
    _Bool _isSaved;
    _Bool _isSelfPost;
    _Bool _isRPANVideo;
    _Bool _isStickied;
    _Bool _isOriginalContent;
    _Bool _isVisited;
    _Bool _isContestMode;
    _Bool _isSpoiler;
    _Bool _isOwnPost;
    _Bool _isPollIncluded;
    _Bool _isUserReported;
    _Bool _isAuthorCakeday;
    _Bool _isDeleted;
    _Bool _isCrosspostable;
    _Bool _isFollowed;
    _Bool _canAward;
    _Bool _isFromGraphQL;
    _Bool _isHlsVideo;
    _Bool _isHlsGif;
    NSString *_pk;
    NSString *_postID;
    NSURL *_linkURL;
    NSURL *_thumbnailURL;
    NSString *_websocketUrlString;
    NSString *_title;
    NSString *_domain;
    NSString *_selfText;
    NSAttributedString *_selfTextAttributed;
    NSString *_postHint;
    NSArray *_mediaModels;
    Media *_media;
    NSString *_permalink;
    NSString *_subredditVisualName;
    Subreddit *_subreddit;
    NSString *_author;
    NSString *_authorPk;
    NSDate *_createdAt;
    long long _score;
    double _upvoteRatio;
    long long _voteState;
    unsigned long long _commentCount;
    long long _distinguished;
    unsigned long long _viewCount;
    PostAuthorOnlyInfo *_authorOnlyInfo;
    PostPoll *_poll;
    long long _removedByCategory;
    ModerationInfo *_moderationInfo;
    PostFlair *_postFlair;
    AuthorFlair *_authorFlair;
    RichText *_selfPostRichText;
    NSArray *_comments;
    PostLocation *_location;
    NSArray *_crosspostParentList;
    NSArray *_categories;
    PostEventInfo *_eventInfo;
    NSArray *_postCollectionIds;
    NSArray *_gallery;
    NSArray *_awardingTotals;
    unsigned long long _totalAwardsReceived;
    long long _discussionType;
    unsigned long long _gilded;
    NSAttributedString *_selfPostRichTextAttributed;
    NSDictionary *_selfPostRichTextData;
    NSDictionary *_selfPostRichTextMediaMetadata;
    unsigned long long _suggestedCommentSort;
}

+ (id)keyPathsToObserveChanges;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long suggestedCommentSort; // @synthesize suggestedCommentSort=_suggestedCommentSort;
@property(retain, nonatomic) NSDictionary *selfPostRichTextMediaMetadata; // @synthesize selfPostRichTextMediaMetadata=_selfPostRichTextMediaMetadata;
@property(retain, nonatomic) NSDictionary *selfPostRichTextData; // @synthesize selfPostRichTextData=_selfPostRichTextData;
@property(copy, nonatomic) NSAttributedString *selfPostRichTextAttributed; // @synthesize selfPostRichTextAttributed=_selfPostRichTextAttributed;
@property(nonatomic) unsigned long long gilded; // @synthesize gilded=_gilded;
@property(nonatomic) _Bool isHlsGif; // @synthesize isHlsGif=_isHlsGif;
@property(nonatomic) _Bool isHlsVideo; // @synthesize isHlsVideo=_isHlsVideo;
@property(nonatomic) long long discussionType; // @synthesize discussionType=_discussionType;
@property(nonatomic) _Bool isFromGraphQL; // @synthesize isFromGraphQL=_isFromGraphQL;
@property(nonatomic) unsigned long long totalAwardsReceived; // @synthesize totalAwardsReceived=_totalAwardsReceived;
@property(copy, nonatomic) NSArray *awardingTotals; // @synthesize awardingTotals=_awardingTotals;
@property(nonatomic) _Bool canAward; // @synthesize canAward=_canAward;
@property(retain, nonatomic) NSArray *gallery; // @synthesize gallery=_gallery;
@property(retain, nonatomic) NSArray *postCollectionIds; // @synthesize postCollectionIds=_postCollectionIds;
@property(retain, nonatomic) PostEventInfo *eventInfo; // @synthesize eventInfo=_eventInfo;
@property(nonatomic) _Bool isFollowed; // @synthesize isFollowed=_isFollowed;
@property(copy, nonatomic) NSArray *categories; // @synthesize categories=_categories;
@property(nonatomic) _Bool isCrosspostable; // @synthesize isCrosspostable=_isCrosspostable;
@property(copy, nonatomic) NSArray *crosspostParentList; // @synthesize crosspostParentList=_crosspostParentList;
@property(copy, nonatomic) PostLocation *location; // @synthesize location=_location;
@property(copy, nonatomic) NSArray *comments; // @synthesize comments=_comments;
@property(nonatomic) _Bool isDeleted; // @synthesize isDeleted=_isDeleted;
@property(retain, nonatomic) RichText *selfPostRichText; // @synthesize selfPostRichText=_selfPostRichText;
@property(nonatomic) _Bool isAuthorCakeday; // @synthesize isAuthorCakeday=_isAuthorCakeday;
@property(retain, nonatomic) AuthorFlair *authorFlair; // @synthesize authorFlair=_authorFlair;
@property(retain, nonatomic) PostFlair *postFlair; // @synthesize postFlair=_postFlair;
@property(retain, nonatomic) ModerationInfo *moderationInfo; // @synthesize moderationInfo=_moderationInfo;
@property(nonatomic) _Bool isUserReported; // @synthesize isUserReported=_isUserReported;
@property(nonatomic) long long removedByCategory; // @synthesize removedByCategory=_removedByCategory;
@property(retain, nonatomic) PostPoll *poll; // @synthesize poll=_poll;
@property(retain, nonatomic) PostAuthorOnlyInfo *authorOnlyInfo; // @synthesize authorOnlyInfo=_authorOnlyInfo;
@property(nonatomic) _Bool isPollIncluded; // @synthesize isPollIncluded=_isPollIncluded;
@property(nonatomic) _Bool isOwnPost; // @synthesize isOwnPost=_isOwnPost;
@property(nonatomic) unsigned long long viewCount; // @synthesize viewCount=_viewCount;
@property(nonatomic) long long distinguished; // @synthesize distinguished=_distinguished;
@property(nonatomic) _Bool isSpoiler; // @synthesize isSpoiler=_isSpoiler;
@property(nonatomic) _Bool isContestMode; // @synthesize isContestMode=_isContestMode;
@property(nonatomic) _Bool isVisited; // @synthesize isVisited=_isVisited;
@property(nonatomic) _Bool isOriginalContent; // @synthesize isOriginalContent=_isOriginalContent;
@property(nonatomic) _Bool isStickied; // @synthesize isStickied=_isStickied;
@property(nonatomic) _Bool isRPANVideo; // @synthesize isRPANVideo=_isRPANVideo;
@property(nonatomic) _Bool isSelfPost; // @synthesize isSelfPost=_isSelfPost;
@property(nonatomic) _Bool isSaved; // @synthesize isSaved=_isSaved;
@property(nonatomic) _Bool isLocked; // @synthesize isLocked=_isLocked;
@property(nonatomic) _Bool isHidden; // @synthesize isHidden=_isHidden;
@property(nonatomic) _Bool isArchived; // @synthesize isArchived=_isArchived;
@property(nonatomic) _Bool isNSFW; // @synthesize isNSFW=_isNSFW;
@property(nonatomic) _Bool showMedia; // @synthesize showMedia=_showMedia;
@property(nonatomic) unsigned long long commentCount; // @synthesize commentCount=_commentCount;
@property(nonatomic) _Bool isScoreHidden; // @synthesize isScoreHidden=_isScoreHidden;
@property(nonatomic) long long voteState; // @synthesize voteState=_voteState;
@property(nonatomic) double upvoteRatio; // @synthesize upvoteRatio=_upvoteRatio;
@property(nonatomic) long long score; // @synthesize score=_score;
@property(retain, nonatomic) NSDate *createdAt; // @synthesize createdAt=_createdAt;
@property(copy, nonatomic) NSString *authorPk; // @synthesize authorPk=_authorPk;
@property(copy, nonatomic) NSString *author; // @synthesize author=_author;
@property(retain, nonatomic) Subreddit *subreddit; // @synthesize subreddit=_subreddit;
@property(copy, nonatomic) NSString *subredditVisualName; // @synthesize subredditVisualName=_subredditVisualName;
@property(copy, nonatomic) NSString *permalink; // @synthesize permalink=_permalink;
@property(retain, nonatomic) Media *media; // @synthesize media=_media;
@property(copy, nonatomic) NSArray *mediaModels; // @synthesize mediaModels=_mediaModels;
@property(copy, nonatomic) NSString *postHint; // @synthesize postHint=_postHint;
@property(copy, nonatomic) NSAttributedString *selfTextAttributed; // @synthesize selfTextAttributed=_selfTextAttributed;
@property(copy, nonatomic) NSString *selfText; // @synthesize selfText=_selfText;
@property(copy, nonatomic) NSString *domain; // @synthesize domain=_domain;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *websocketUrlString; // @synthesize websocketUrlString=_websocketUrlString;
@property(retain, nonatomic) NSURL *thumbnailURL; // @synthesize thumbnailURL=_thumbnailURL;
@property(retain, nonatomic) NSURL *linkURL; // @synthesize linkURL=_linkURL;
@property(copy, nonatomic) NSString *postID; // @synthesize postID=_postID;
@property(readonly, copy, nonatomic) NSString *pk; // @synthesize pk=_pk;
- (void)updateSelfPostRichTextAttributed;
@property(readonly, copy, nonatomic) NSString *sharingPermalinkIncludingDomain;
@property(readonly, copy, nonatomic) NSString *internalPermalinkIncludingDomain;
@property(readonly, nonatomic) _Bool isIngestedGif;
@property(readonly, nonatomic) _Bool hasLargeAssetsToDisplay;
- (id)getVideoPreviewModel;
- (id)getVideoModel;
@property(readonly, nonatomic) _Bool isChatPost;
@property(readonly, nonatomic) _Bool isTitleSameAsCrosspostParent;
@property(readonly, nonatomic) Post *crosspostParent;
@property(readonly, nonatomic) _Bool isCrosspost;
@property(readonly, nonatomic) _Bool isRemoved;
@property(readonly, nonatomic) _Bool canBeBlocked;
@property(readonly, nonatomic) _Bool canBeReported;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)r2StyleRichTextMediaMetadataFromGraphQLData:(id)arg1;
- (void)configureWithGraphQLData:(id)arg1;
- (void)configureWithData:(id)arg1;
- (id)initWithPk:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

