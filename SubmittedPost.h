//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RedditCore/ObservableObject.h>

#import <RedditCore/BaseModel-Protocol.h>
#import <RedditCore/NSSecureCoding-Protocol.h>

@class NSArray, NSDictionary, NSNumber, NSString, NSURL, NSURLSessionUploadTask, NSUUID, PostFlair, SocketSession, UIImage;

@interface SubmittedPost : ObservableObject <BaseModel, NSSecureCoding>
{
    _Bool _isChatPost;
    _Bool _hasVideo;
    _Bool _isGIF;
    _Bool _isNSFW;
    _Bool _isSpoiler;
    NSString *_pk;
    NSString *_title;
    NSString *_linkURL;
    NSString *_imageLinkURL;
    NSString *_selfText;
    NSArray *_mediaGallery;
    UIImage *_image;
    NSString *_videoFilename;
    NSURL *_videoURL;
    NSUUID *_videoUUID;
    NSString *_mediaKey;
    NSURLSessionUploadTask *_uploadReq;
    NSURL *_transcodingWebsocketURL;
    long long _transcodingState;
    SocketSession *_transcodingSocketSession;
    UIImage *_thumbnailImage;
    NSString *_imageFileName;
    NSDictionary *_imageUploadMetaData;
    NSString *_subredditPk;
    NSString *_subredditName;
    NSNumber *_pollDuration;
    NSArray *_pollOptions;
    long long _state;
    long long _failureReason;
    NSArray *_apiErrors;
    unsigned long long _postType;
    PostFlair *_flairModel;
    double _uploadPercentage;
    NSString *_crosspostId;
    NSString *_draftPostId;
}

+ (id)keyPathsToObserveChanges;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *draftPostId; // @synthesize draftPostId=_draftPostId;
@property(retain, nonatomic) NSString *crosspostId; // @synthesize crosspostId=_crosspostId;
@property(nonatomic) _Bool isSpoiler; // @synthesize isSpoiler=_isSpoiler;
@property(nonatomic) _Bool isNSFW; // @synthesize isNSFW=_isNSFW;
@property(nonatomic) _Bool isGIF; // @synthesize isGIF=_isGIF;
@property(nonatomic) _Bool hasVideo; // @synthesize hasVideo=_hasVideo;
@property(nonatomic) double uploadPercentage; // @synthesize uploadPercentage=_uploadPercentage;
@property(copy, nonatomic) PostFlair *flairModel; // @synthesize flairModel=_flairModel;
@property(nonatomic) _Bool isChatPost; // @synthesize isChatPost=_isChatPost;
@property(nonatomic) unsigned long long postType; // @synthesize postType=_postType;
@property(retain, nonatomic) NSArray *apiErrors; // @synthesize apiErrors=_apiErrors;
@property(nonatomic) long long failureReason; // @synthesize failureReason=_failureReason;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(copy, nonatomic) NSArray *pollOptions; // @synthesize pollOptions=_pollOptions;
@property(retain, nonatomic) NSNumber *pollDuration; // @synthesize pollDuration=_pollDuration;
@property(copy, nonatomic) NSString *subredditName; // @synthesize subredditName=_subredditName;
@property(copy, nonatomic) NSString *subredditPk; // @synthesize subredditPk=_subredditPk;
@property(copy, nonatomic) NSDictionary *imageUploadMetaData; // @synthesize imageUploadMetaData=_imageUploadMetaData;
@property(copy, nonatomic) NSString *imageFileName; // @synthesize imageFileName=_imageFileName;
@property(retain, nonatomic) UIImage *thumbnailImage; // @synthesize thumbnailImage=_thumbnailImage;
@property(retain, nonatomic) SocketSession *transcodingSocketSession; // @synthesize transcodingSocketSession=_transcodingSocketSession;
@property(nonatomic) long long transcodingState; // @synthesize transcodingState=_transcodingState;
@property(retain, nonatomic) NSURL *transcodingWebsocketURL; // @synthesize transcodingWebsocketURL=_transcodingWebsocketURL;
@property(copy, nonatomic) NSURLSessionUploadTask *uploadReq; // @synthesize uploadReq=_uploadReq;
@property(copy, nonatomic) NSString *mediaKey; // @synthesize mediaKey=_mediaKey;
@property(retain, nonatomic) NSUUID *videoUUID; // @synthesize videoUUID=_videoUUID;
@property(retain, nonatomic) NSURL *videoURL; // @synthesize videoURL=_videoURL;
@property(copy, nonatomic) NSString *videoFilename; // @synthesize videoFilename=_videoFilename;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) NSArray *mediaGallery; // @synthesize mediaGallery=_mediaGallery;
@property(copy, nonatomic) NSString *selfText; // @synthesize selfText=_selfText;
@property(copy, nonatomic) NSString *imageLinkURL; // @synthesize imageLinkURL=_imageLinkURL;
@property(copy, nonatomic) NSString *linkURL; // @synthesize linkURL=_linkURL;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) NSString *pk; // @synthesize pk=_pk;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property(readonly, nonatomic) NSDictionary *draftPostParameters;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) _Bool hasImage;
@property(readonly, nonatomic) _Bool hasMediaGallery;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPk:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

