//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;

@interface HlsItemMetaData : NSObject
{
    _Bool _muted;
    _Bool _playing;
    _Bool _soundDetected;
    NSDate *_storeDate;
    unsigned long long _state;
    CDStruct_1b6d18a9 _duration;
    CDStruct_1b6d18a9 _elapsed;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool soundDetected; // @synthesize soundDetected=_soundDetected;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(retain, nonatomic) NSDate *storeDate; // @synthesize storeDate=_storeDate;
@property(nonatomic) _Bool playing; // @synthesize playing=_playing;
@property(nonatomic) _Bool muted; // @synthesize muted=_muted;
@property(nonatomic) CDStruct_1b6d18a9 elapsed; // @synthesize elapsed=_elapsed;
@property(nonatomic) CDStruct_1b6d18a9 duration; // @synthesize duration=_duration;

@end

