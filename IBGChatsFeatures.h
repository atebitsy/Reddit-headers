//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class IBGCurrentChatsManager;

@interface IBGChatsFeatures : NSObject
{
    IBGCurrentChatsManager *_currentChatsManager;
}

+ (id)sharedInstance;
@property(retain, nonatomic) IBGCurrentChatsManager *currentChatsManager; // @synthesize currentChatsManager=_currentChatsManager;
- (void).cxx_destruct;
- (_Bool)hasChats;
- (_Bool)shouldShowChatsListManually;
- (_Bool)shouldShowChatManually;
- (_Bool)shouldShowComposeChatInChatList;
- (_Bool)shouldShowChatsListInPrompt;
- (_Bool)shouldShowNewChatInPrompt;
- (_Bool)shouldHandleNotifications;
- (_Bool)repliesEnabled;
- (_Bool)chatsEnabled;
- (id)initWithCurrentChatsManager:(id)arg1;

@end
