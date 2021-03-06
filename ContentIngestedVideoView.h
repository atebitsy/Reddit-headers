//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HlsPlayerView.h"

@class BaseImageView, Post;

@interface ContentIngestedVideoView : HlsPlayerView
{
    Post *_post;
    BaseImageView *_videoPlayButtonOverlay;
}

- (void).cxx_destruct;
@property(retain, nonatomic) BaseImageView *videoPlayButtonOverlay; // @synthesize videoPlayButtonOverlay=_videoPlayButtonOverlay;
@property(retain, nonatomic) Post *post; // @synthesize post=_post;
- (id)mp4URL;
- (void)streamPlayerView:(id)arg1 didUpdateElapsedTime:(CDStruct_1b6d18a9)arg2;
- (void)handleAppDidEnterBackground;
- (void)handleAppDidEnterForeground;
- (void)noLongerPastVisibilityThreshold;
- (void)didEndDisplaying;
- (void)applyStoredMetadata;
- (void)configureWithTheatreMediaItem:(id)arg1;
- (void)configureWithVideoID:(id)arg1 videoURL:(id)arg2 thumbnailURL:(id)arg3 previewImageURL:(id)arg4 contentSize:(struct CGSize)arg5 isGif:(_Bool)arg6 shareSheetPost:(id)arg7;
- (void)configureWithPost:(id)arg1;
- (void)streamPlayerFinishPreloading:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (_Bool)parentIsCarouselView;
- (void)play;
- (void)loadAndPlay;
- (void)configurePlayerWithURL:(id)arg1;
- (void)layoutSubviews;
- (_Bool)isPlaying;
- (_Bool)isGIFContent;
- (id)playPauseImageView;
- (id)progressView;

@end

