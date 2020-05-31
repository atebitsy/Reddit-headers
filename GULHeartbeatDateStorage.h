//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSFileCoordinator, NSURL;

@interface GULHeartbeatDateStorage : NSObject
{
    NSURL *_fileURL;
    NSFileCoordinator *_fileCoordinator;
}

+ (void)checkAndCreateDirectory:(id)arg1 fileCoordinator:(id)arg2;
+ (id)directoryPathURL;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSFileCoordinator *fileCoordinator; // @synthesize fileCoordinator=_fileCoordinator;
@property(readonly, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
- (_Bool)writeDictionary:(id)arg1 forWritingURL:(id)arg2 error:(id *)arg3;
- (_Bool)setHearbeatDate:(id)arg1 forTag:(id)arg2;
- (id)heartbeatDateForTag:(id)arg1;
- (id)heartbeatDictionaryWithFileURL:(id)arg1;
- (id)initWithFileName:(id)arg1;

@end

