//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <Instabug/IBGProfileProtocol-Protocol.h>

@class NSDate, NSString;

@interface IBGConnectivity : NSObject <IBGProfileProtocol>
{
    _Bool _isConnected;
    _Bool _isWifi;
    NSString *_connection;
    NSString *_carrierName;
    NSDate *_date;
}

@property(nonatomic) _Bool isWifi; // @synthesize isWifi=_isWifi;
@property(nonatomic) _Bool isConnected; // @synthesize isConnected=_isConnected;
@property(copy, nonatomic) NSDate *date; // @synthesize date=_date;
@property(copy, nonatomic) NSString *carrierName; // @synthesize carrierName=_carrierName;
@property(copy, nonatomic) NSString *connection; // @synthesize connection=_connection;
- (void).cxx_destruct;
- (id)profileDataDate;
- (id)toDictionaryWithTime:(double)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
