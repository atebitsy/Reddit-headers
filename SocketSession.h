//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <RedditCore/SRWebSocketDelegate-Protocol.h>

@class NSString, NSURL, SRWebSocket;
@protocol OS_dispatch_queue, SocketParser, SocketSessionDelegate;

@interface SocketSession : NSObject <SRWebSocketDelegate>
{
    _Bool _hasOpened;
    _Bool _shouldReconnect;
    id <SocketSessionDelegate> _delegate;
    id <SocketParser> _parser;
    SRWebSocket *_socket;
    double _reconnectTime;
    NSURL *_websocketURL;
    NSObject<OS_dispatch_queue> *_parsingQueue;
}

+ (id)keyPathsForValuesAffectingSocketState;
- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *parsingQueue; // @synthesize parsingQueue=_parsingQueue;
@property(nonatomic) _Bool shouldReconnect; // @synthesize shouldReconnect=_shouldReconnect;
@property(nonatomic) _Bool hasOpened; // @synthesize hasOpened=_hasOpened;
@property(retain, nonatomic) NSURL *websocketURL; // @synthesize websocketURL=_websocketURL;
@property(nonatomic) double reconnectTime; // @synthesize reconnectTime=_reconnectTime;
@property(retain, nonatomic) SRWebSocket *socket; // @synthesize socket=_socket;
@property(retain, nonatomic) id <SocketParser> parser; // @synthesize parser=_parser;
@property(nonatomic) __weak id <SocketSessionDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) long long socketState;
- (void)attemptToReconnect;
- (void)webSocket:(id)arg1 didFailWithError:(id)arg2;
- (void)webSocket:(id)arg1 didCloseWithCode:(long long)arg2 reason:(id)arg3 wasClean:(_Bool)arg4;
- (void)webSocket:(id)arg1 didReceiveMessage:(id)arg2;
- (void)webSocketDidOpen:(id)arg1;
- (id)initWithParser:(id)arg1 websocketURL:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

