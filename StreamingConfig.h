//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL, StreamingSubredditInfo;

@interface StreamingConfig : NSObject
{
    _Bool _isViewerEnabled;
    _Bool _isAutoSwitchViewerEnabled;
    _Bool _isBroadcastEnabled;
    _Bool _showOfflineMessageIfViewingDisabled;
    _Bool _showDiscoveryUnit;
    _Bool _isSubredditLiveStreamingEnabled;
    double _configRefreshRate;
    double _viewerStreamStatsRefreshRate;
    double _viewerAutoSwitchTime;
    double _viewerHeartbeatInterval;
    long long _broadcastFPS;
    long long _broadcastWidth;
    long long _broadcastHeight;
    long long _broadcastMaxKeyframeInterval;
    long long _broadcastMaxVideoBitrate;
    long long _broadcastMaxAudioBitrate;
    long long _broadcastAudioSampleRate;
    long long _skipAheadIfThisFarBehindMillis;
    long long _topStreamsAutoSwitchThreshhold;
    long long _viewerStreamAutoRefreshSeconds;
    long long _viewerStreamAutoRefreshSlopSeconds;
    long long _viewerInitialHeartbeatDelaySeconds;
    long long _maxChatCommentLength;
    long long _homeFeedDiscoveryUnitIndex;
    long long _popularFeedDiscoveryUnitIndex;
    double _streamDurationLimit;
    NSURL *_firstTimeBroadcasterPolicyURL;
    NSURL *_unavailableVideoURL;
    long long _abrInitialCapKbps;
    double _abrBitrateCapRestoreDenominator;
    double _abrBitrateRestoreDenominator;
    double _abrReducedBitrateCapPercent;
    double _abrReducedBitratePercent;
    long long _discoveryUnitIndex;
    StreamingSubredditInfo *_subredditInfo;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isSubredditLiveStreamingEnabled; // @synthesize isSubredditLiveStreamingEnabled=_isSubredditLiveStreamingEnabled;
@property(readonly, nonatomic) StreamingSubredditInfo *subredditInfo; // @synthesize subredditInfo=_subredditInfo;
@property(readonly, nonatomic) long long discoveryUnitIndex; // @synthesize discoveryUnitIndex=_discoveryUnitIndex;
@property(readonly, nonatomic) _Bool showDiscoveryUnit; // @synthesize showDiscoveryUnit=_showDiscoveryUnit;
@property(readonly, nonatomic) double abrReducedBitratePercent; // @synthesize abrReducedBitratePercent=_abrReducedBitratePercent;
@property(readonly, nonatomic) double abrReducedBitrateCapPercent; // @synthesize abrReducedBitrateCapPercent=_abrReducedBitrateCapPercent;
@property(readonly, nonatomic) double abrBitrateRestoreDenominator; // @synthesize abrBitrateRestoreDenominator=_abrBitrateRestoreDenominator;
@property(readonly, nonatomic) double abrBitrateCapRestoreDenominator; // @synthesize abrBitrateCapRestoreDenominator=_abrBitrateCapRestoreDenominator;
@property(readonly, nonatomic) long long abrInitialCapKbps; // @synthesize abrInitialCapKbps=_abrInitialCapKbps;
@property(readonly, nonatomic) NSURL *unavailableVideoURL; // @synthesize unavailableVideoURL=_unavailableVideoURL;
@property(readonly, nonatomic) NSURL *firstTimeBroadcasterPolicyURL; // @synthesize firstTimeBroadcasterPolicyURL=_firstTimeBroadcasterPolicyURL;
@property(readonly, nonatomic) double streamDurationLimit; // @synthesize streamDurationLimit=_streamDurationLimit;
@property(readonly, nonatomic) long long popularFeedDiscoveryUnitIndex; // @synthesize popularFeedDiscoveryUnitIndex=_popularFeedDiscoveryUnitIndex;
@property(readonly, nonatomic) long long homeFeedDiscoveryUnitIndex; // @synthesize homeFeedDiscoveryUnitIndex=_homeFeedDiscoveryUnitIndex;
@property(readonly, nonatomic) long long maxChatCommentLength; // @synthesize maxChatCommentLength=_maxChatCommentLength;
@property(readonly, nonatomic) long long viewerInitialHeartbeatDelaySeconds; // @synthesize viewerInitialHeartbeatDelaySeconds=_viewerInitialHeartbeatDelaySeconds;
@property(readonly, nonatomic) long long viewerStreamAutoRefreshSlopSeconds; // @synthesize viewerStreamAutoRefreshSlopSeconds=_viewerStreamAutoRefreshSlopSeconds;
@property(readonly, nonatomic) long long viewerStreamAutoRefreshSeconds; // @synthesize viewerStreamAutoRefreshSeconds=_viewerStreamAutoRefreshSeconds;
@property(readonly, nonatomic) long long topStreamsAutoSwitchThreshhold; // @synthesize topStreamsAutoSwitchThreshhold=_topStreamsAutoSwitchThreshhold;
@property(readonly, nonatomic) long long skipAheadIfThisFarBehindMillis; // @synthesize skipAheadIfThisFarBehindMillis=_skipAheadIfThisFarBehindMillis;
@property(readonly, nonatomic) _Bool showOfflineMessageIfViewingDisabled; // @synthesize showOfflineMessageIfViewingDisabled=_showOfflineMessageIfViewingDisabled;
@property(readonly, nonatomic) long long broadcastAudioSampleRate; // @synthesize broadcastAudioSampleRate=_broadcastAudioSampleRate;
@property(readonly, nonatomic) long long broadcastMaxAudioBitrate; // @synthesize broadcastMaxAudioBitrate=_broadcastMaxAudioBitrate;
@property(readonly, nonatomic) long long broadcastMaxVideoBitrate; // @synthesize broadcastMaxVideoBitrate=_broadcastMaxVideoBitrate;
@property(readonly, nonatomic) long long broadcastMaxKeyframeInterval; // @synthesize broadcastMaxKeyframeInterval=_broadcastMaxKeyframeInterval;
@property(readonly, nonatomic) long long broadcastHeight; // @synthesize broadcastHeight=_broadcastHeight;
@property(readonly, nonatomic) long long broadcastWidth; // @synthesize broadcastWidth=_broadcastWidth;
@property(readonly, nonatomic) long long broadcastFPS; // @synthesize broadcastFPS=_broadcastFPS;
@property(readonly, nonatomic) double viewerHeartbeatInterval; // @synthesize viewerHeartbeatInterval=_viewerHeartbeatInterval;
@property(readonly, nonatomic) double viewerAutoSwitchTime; // @synthesize viewerAutoSwitchTime=_viewerAutoSwitchTime;
@property(readonly, nonatomic) double viewerStreamStatsRefreshRate; // @synthesize viewerStreamStatsRefreshRate=_viewerStreamStatsRefreshRate;
@property(readonly, nonatomic) double configRefreshRate; // @synthesize configRefreshRate=_configRefreshRate;
@property(readonly, nonatomic) _Bool isBroadcastEnabled; // @synthesize isBroadcastEnabled=_isBroadcastEnabled;
@property(readonly, nonatomic) _Bool isAutoSwitchViewerEnabled; // @synthesize isAutoSwitchViewerEnabled=_isAutoSwitchViewerEnabled;
@property(readonly, nonatomic) _Bool isViewerEnabled; // @synthesize isViewerEnabled=_isViewerEnabled;
- (id)initWithData:(id)arg1;
- (id)init;

@end

