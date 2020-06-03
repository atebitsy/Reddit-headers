//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImage.h>

@interface UIImage (Factory)
+ (id)removedIconForModerationInfo:(id)arg1;
+ (id)imageForFeedSort:(unsigned long long)arg1;
+ (id)iconForActivityFilterType:(unsigned long long)arg1 isSmallSize:(_Bool)arg2;
+ (id)iconForHistoryType:(long long)arg1 smallSize:(_Bool)arg2;
+ (id)defaultDownvoteImageWithTintColor:(id)arg1;
+ (id)defaultUpvoteImageWithTintColor:(id)arg1;
+ (id)defaultTintedDownvoteImage;
+ (id)defaultTintedUpvoteImage;
+ (id)linkDisplayTypeIconForPostDisplayType:(unsigned long long)arg1;
+ (id)postDisplayTypeIconForPostDisplayType:(unsigned long long)arg1;
+ (id)imageForFeedDisplayMode:(unsigned long long)arg1;
+ (id)avatarDefaultImageForBase10ID:(long long)arg1;
+ (id)addWatermarkToImage:(id)arg1 withSubredditName:(id)arg2 withUsername:(id)arg3 withLogo:(id)arg4;
+ (id)addWatermarkToImage:(id)arg1 withSubredditName:(id)arg2 withUsername:(id)arg3;
+ (id)circledImageNamed:(id)arg1 tintColor:(id)arg2 fillColor:(id)arg3 size:(double)arg4;
+ (id)imageWithImage:(id)arg1 scaledToWidth:(double)arg2;
+ (id)circularImageFromColor:(id)arg1 withRadius:(double)arg2;
+ (id)imageTemplateNamed:(id)arg1;
+ (id)imageNamed:(id)arg1 color:(id)arg2;
+ (id)sharedInstance;
- (id)imageForWatermarkInfo:(id)arg1;
- (void)saveWithCompletion:(CDUnknownBlockType)arg1;
- (id)circledImageNamed:(id)arg1 tintColor:(id)arg2 fillColor:(id)arg3 borderColor:(id)arg4;
- (id)roundedImageWithCacheName:(id)arg1 tintColor:(id)arg2 fillColor:(id)arg3 borderColor:(id)arg4 size:(double)arg5 scaleOriginalImage:(_Bool)arg6 cornerRadius:(double)arg7;
- (id)roundedImageWithTintColor:(id)arg1 fillColor:(id)arg2 borderColor:(id)arg3 size:(double)arg4 cornerRadius:(double)arg5;
- (id)gid_imageWithBlendMode:(int)arg1 color:(id)arg2;
@end

