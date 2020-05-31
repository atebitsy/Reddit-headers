//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface HLSAssetDownloadSession : NSObject
{
    NSMutableDictionary *_assetCache;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedSession;
- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSMutableDictionary *assetCache; // @synthesize assetCache=_assetCache;
- (void)handleInitializationFailedForHLSAsset:(id)arg1;
- (id)invalidAssetError;
- (void)startDownloadForPlaylist:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithQueue:(id)arg1;
- (id)init;

@end

