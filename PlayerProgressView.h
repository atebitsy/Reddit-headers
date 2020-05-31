//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RedditUI/BaseView.h>

#import "RUIThemeUpdateCallbackProtocol-Protocol.h"

@class AVPlayerItem, AVPlayerLayer, BaseButton, BaseLabel, NSArray, NSString, PlayerProgressViewOptions, UILongPressGestureRecognizer, UIPanGestureRecognizer;

@interface PlayerProgressView : BaseView <RUIThemeUpdateCallbackProtocol>
{
    _Bool _isMinimized;
    _Bool _isLiveStream;
    _Bool _isThumbnailLoading;
    _Bool _isThumbnailShowing;
    NSString *_playerItemURLString;
    unsigned long long _state;
    BaseLabel *_elapsedLabel;
    BaseLabel *_durationLabel;
    BaseLabel *_timeRemainingLabel;
    BaseButton *_liveButton;
    BaseButton *_playPauseButton;
    BaseView *_barTouchAreaView;
    BaseView *_maximizedPlayedBarView;
    BaseView *_maximizedBufferedBarView;
    BaseView *_maximizedUnplayedBarView;
    BaseView *_thumbnailCircleView;
    BaseView *_thumbnailPlayerContainerView;
    BaseView *_thumbnailScrubberTouchAreaView;
    AVPlayerLayer *_thumbnailPlayerLayer;
    AVPlayerItem *_thumbnailPlayerItem;
    UIPanGestureRecognizer *_panGestureRecognizer;
    UILongPressGestureRecognizer *_tapGestureRecognizer;
    CDUnknownBlockType _onThumbnailDidEndScrubbingBlock;
    CDUnknownBlockType _onThumbnailDidScrubBlock;
    CDUnknownBlockType _onThumbnailDidBeginScrubbingBlock;
    CDUnknownBlockType _onLiveButtonTappedBlock;
    CDUnknownBlockType _onPlayButtonTappedBlock;
    CDUnknownBlockType _onPauseButtonTappedBlock;
    CDUnknownBlockType _onReplayButtonTappedBlock;
    NSArray *_buffered;
    double _initialScrubX;
    PlayerProgressViewOptions *_options;
    CDStruct_1b6d18a9 _duration;
    CDStruct_1b6d18a9 _elapsed;
}

- (void).cxx_destruct;
@property(retain, nonatomic) PlayerProgressViewOptions *options; // @synthesize options=_options;
@property(nonatomic) double initialScrubX; // @synthesize initialScrubX=_initialScrubX;
@property(nonatomic) CDStruct_1b6d18a9 elapsed; // @synthesize elapsed=_elapsed;
@property(copy, nonatomic) NSArray *buffered; // @synthesize buffered=_buffered;
@property(nonatomic) CDStruct_1b6d18a9 duration; // @synthesize duration=_duration;
@property(nonatomic) _Bool isThumbnailShowing; // @synthesize isThumbnailShowing=_isThumbnailShowing;
@property(nonatomic) _Bool isThumbnailLoading; // @synthesize isThumbnailLoading=_isThumbnailLoading;
@property(copy, nonatomic) CDUnknownBlockType onReplayButtonTappedBlock; // @synthesize onReplayButtonTappedBlock=_onReplayButtonTappedBlock;
@property(copy, nonatomic) CDUnknownBlockType onPauseButtonTappedBlock; // @synthesize onPauseButtonTappedBlock=_onPauseButtonTappedBlock;
@property(copy, nonatomic) CDUnknownBlockType onPlayButtonTappedBlock; // @synthesize onPlayButtonTappedBlock=_onPlayButtonTappedBlock;
@property(copy, nonatomic) CDUnknownBlockType onLiveButtonTappedBlock; // @synthesize onLiveButtonTappedBlock=_onLiveButtonTappedBlock;
@property(copy, nonatomic) CDUnknownBlockType onThumbnailDidBeginScrubbingBlock; // @synthesize onThumbnailDidBeginScrubbingBlock=_onThumbnailDidBeginScrubbingBlock;
@property(copy, nonatomic) CDUnknownBlockType onThumbnailDidScrubBlock; // @synthesize onThumbnailDidScrubBlock=_onThumbnailDidScrubBlock;
@property(copy, nonatomic) CDUnknownBlockType onThumbnailDidEndScrubbingBlock; // @synthesize onThumbnailDidEndScrubbingBlock=_onThumbnailDidEndScrubbingBlock;
@property(retain, nonatomic) UILongPressGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer; // @synthesize panGestureRecognizer=_panGestureRecognizer;
@property(retain, nonatomic) AVPlayerItem *thumbnailPlayerItem; // @synthesize thumbnailPlayerItem=_thumbnailPlayerItem;
@property(retain, nonatomic) AVPlayerLayer *thumbnailPlayerLayer; // @synthesize thumbnailPlayerLayer=_thumbnailPlayerLayer;
@property(retain, nonatomic) BaseView *thumbnailScrubberTouchAreaView; // @synthesize thumbnailScrubberTouchAreaView=_thumbnailScrubberTouchAreaView;
@property(retain, nonatomic) BaseView *thumbnailPlayerContainerView; // @synthesize thumbnailPlayerContainerView=_thumbnailPlayerContainerView;
@property(retain, nonatomic) BaseView *thumbnailCircleView; // @synthesize thumbnailCircleView=_thumbnailCircleView;
@property(retain, nonatomic) BaseView *maximizedUnplayedBarView; // @synthesize maximizedUnplayedBarView=_maximizedUnplayedBarView;
@property(retain, nonatomic) BaseView *maximizedBufferedBarView; // @synthesize maximizedBufferedBarView=_maximizedBufferedBarView;
@property(retain, nonatomic) BaseView *maximizedPlayedBarView; // @synthesize maximizedPlayedBarView=_maximizedPlayedBarView;
@property(retain, nonatomic) BaseView *barTouchAreaView; // @synthesize barTouchAreaView=_barTouchAreaView;
@property(retain, nonatomic) BaseButton *playPauseButton; // @synthesize playPauseButton=_playPauseButton;
@property(retain, nonatomic) BaseButton *liveButton; // @synthesize liveButton=_liveButton;
@property(retain, nonatomic) BaseLabel *timeRemainingLabel; // @synthesize timeRemainingLabel=_timeRemainingLabel;
@property(retain, nonatomic) BaseLabel *durationLabel; // @synthesize durationLabel=_durationLabel;
@property(retain, nonatomic) BaseLabel *elapsedLabel; // @synthesize elapsedLabel=_elapsedLabel;
@property unsigned long long state; // @synthesize state=_state;
@property(nonatomic) _Bool isLiveStream; // @synthesize isLiveStream=_isLiveStream;
@property(retain, nonatomic) NSString *playerItemURLString; // @synthesize playerItemURLString=_playerItemURLString;
@property(nonatomic) _Bool isMinimized; // @synthesize isMinimized=_isMinimized;
- (void)onReplayButtonTapped:(CDUnknownBlockType)arg1;
- (void)onPauseButtonTapped:(CDUnknownBlockType)arg1;
- (void)onPlayButtonTapped:(CDUnknownBlockType)arg1;
- (void)playPauseButtonTapped:(id)arg1;
- (void)transitionToReplay;
- (void)transitionToPlay;
- (void)transitionToPause;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1;
- (void)onLiveButtonTapped:(CDUnknownBlockType)arg1;
- (void)onThumbnailDidEndScrubbing:(CDUnknownBlockType)arg1;
- (void)onThumbnailDidScrub:(CDUnknownBlockType)arg1;
- (void)onThumbnailDidBeginScrubbing:(CDUnknownBlockType)arg1;
- (void)maximizeProgressBarAnimated:(_Bool)arg1;
- (void)minimizeProgressBarAnimated:(_Bool)arg1;
- (void)showThumbnailAnimated:(_Bool)arg1;
- (void)hideThumbnailAnimated:(_Bool)arg1;
- (void)detachThumbnailPreview;
- (void)configureWithThumbnail;
- (void)attachPlayerToThumbnail;
- (void)configureWithBuffered:(id)arg1;
- (void)configureWithElapsed:(CDStruct_1b6d18a9)arg1;
- (void)configureWithDuration:(CDStruct_1b6d18a9)arg1;
- (void)liveButtonTapped;
- (void)thumbnailScrubbed:(id)arg1;
- (void)progressBarTapped:(id)arg1;
- (void)updateViewsMaximized;
- (id)thumbnailPlayer;
- (void)layoutSubviews;
- (void)themeDidChange:(id)arg1;
- (id)initWithOptions:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

