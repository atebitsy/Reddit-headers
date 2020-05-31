//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface HLSPlaylist : NSObject
{
    NSURL *_url;
    NSString *_identifier;
}

+ (id)uniqueIdentifierFromRedditHLSPlaylistURL:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
- (id)debugDescription;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)initWithURL:(id)arg1 identifier:(id)arg2;

@end

