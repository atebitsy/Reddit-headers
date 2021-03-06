//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGListDiffable-Protocol.h"

@class ChatMessage;

@interface DisplayableChatMessage : NSObject <IGListDiffable>
{
    _Bool _showFooter;
    _Bool _showHeader;
    _Bool _showDateline;
    _Bool _showGapOnLeft;
    _Bool _showBubbleBackground;
    _Bool _addExtraPadding;
    ChatMessage *_chatMessage;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool addExtraPadding; // @synthesize addExtraPadding=_addExtraPadding;
@property(readonly, nonatomic) _Bool showBubbleBackground; // @synthesize showBubbleBackground=_showBubbleBackground;
@property(readonly, nonatomic) _Bool showGapOnLeft; // @synthesize showGapOnLeft=_showGapOnLeft;
@property(readonly, nonatomic) _Bool showDateline; // @synthesize showDateline=_showDateline;
@property(readonly, nonatomic) _Bool showHeader; // @synthesize showHeader=_showHeader;
@property(readonly, nonatomic) _Bool showFooter; // @synthesize showFooter=_showFooter;
@property(retain, nonatomic) ChatMessage *chatMessage; // @synthesize chatMessage=_chatMessage;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (id)initWithMessage:(id)arg1 showFooter:(_Bool)arg2 showHeader:(_Bool)arg3 showDateline:(_Bool)arg4 showGapOnLeft:(_Bool)arg5 showBubbleBackground:(_Bool)arg6 addExtraPadding:(_Bool)arg7;

@end

