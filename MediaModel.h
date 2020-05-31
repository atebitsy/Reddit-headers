//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface MediaModel : NSObject
{
    NSString *_imageID;
    NSArray *_resolutionInfo;
    NSDictionary *_variantInfo;
}

+ (id)videoModelFromData:(id)arg1;
+ (id)mediaModelFromData:(id)arg1;
+ (void)initialize;
- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *variantInfo; // @synthesize variantInfo=_variantInfo;
@property(copy, nonatomic) NSArray *resolutionInfo; // @synthesize resolutionInfo=_resolutionInfo;
@property(copy, nonatomic) NSString *imageID; // @synthesize imageID=_imageID;
@property(readonly, nonatomic) _Bool isHostedVideo;
- (id)safeURLForDictionary:(id)arg1 key:(id)arg2;
- (_Bool)hasVideos;
- (id)debugDescription;
- (_Bool)hasBadImageQuality;
- (_Bool)isServerCroppingPreviewImages;
@property(readonly, copy, nonatomic) NSArray *allVideoURLs;
@property(readonly, copy, nonatomic) NSArray *allImageURLs;
- (double)aspectRatio;
- (struct CGSize)highestResolutionImageSize;
- (struct CGSize)lowestResolutionImageSize;
- (struct CGSize)lowestResolutionVideoSize;
- (struct CGSize)highestResolutionVideoSize;
- (struct CGSize)sizeOfResolution:(id)arg1;
- (struct CGSize)postVideoSizeFittingSize:(struct CGSize)arg1;
@property(readonly, nonatomic) _Bool hasHlsURL;
- (id)postVideoURLStringFittingSize:(struct CGSize)arg1;
- (id)gifMp4Url;
- (id)scrubberMediaURL;
- (id)lowestResolutionVideoURLString;
- (id)highestResolutionVideoURLString;
- (id)lowestResolutionVideoData;
- (id)highestResolutionVideoData;
- (id)variantResolutionsForKey:(id)arg1;
- (_Bool)isVerticalHostedMedia;
- (id)lowestResolutionImageURLString;
- (id)highestResolutionImageURLString;
- (id)highestResImageURLWithBlur:(_Bool)arg1;
- (id)postImageURLStringFittingSize:(struct CGSize)arg1 shouldBlur:(_Bool)arg2;
- (id)resolutionInfoWithBlur:(_Bool)arg1;
- (id)videoURLStringFromResolution:(id)arg1 selfHostedKey:(id)arg2;
- (id)postImageURLStringFittingSize:(struct CGSize)arg1;
- (struct CGSize)postImageSizeFittingSize:(struct CGSize)arg1;
- (id)findMaxFitResolution:(id)arg1 fittingSize:(struct CGSize)arg2;
- (void)updateWithData:(id)arg1;

@end

