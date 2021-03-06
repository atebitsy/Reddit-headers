//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ChatPostUserTypeAheadViewDelegate-Protocol.h"
#import "TextInputPrefixListenerDelegate-Protocol.h"

@class ChatPostUserTypeAheadView, NSArray, NSString, TextInputPrefixListener, UIResponder;
@protocol UITextInput;

@interface ChatPostUserTypeAheadController : NSObject <TextInputPrefixListenerDelegate, ChatPostUserTypeAheadViewDelegate>
{
    TextInputPrefixListener *_prefixListener;
    NSArray *_users;
    UIResponder<UITextInput> *_textInput;
    ChatPostUserTypeAheadView *_userTypeAheadView;
}

- (void).cxx_destruct;
@property(nonatomic) __weak ChatPostUserTypeAheadView *userTypeAheadView; // @synthesize userTypeAheadView=_userTypeAheadView;
@property(nonatomic) __weak UIResponder<UITextInput> *textInput; // @synthesize textInput=_textInput;
@property(copy, nonatomic) NSArray *users; // @synthesize users=_users;
@property(retain, nonatomic) TextInputPrefixListener *prefixListener; // @synthesize prefixListener=_prefixListener;
- (void)chatPostUserTypeAheadView:(id)arg1 didSelectUser:(id)arg2 prefix:(id)arg3 range:(struct _NSRange)arg4;
- (void)selectTextForRange:(struct _NSRange)arg1;
- (void)replaceInputTextWithUsername:(id)arg1 prefix:(id)arg2 range:(struct _NSRange)arg3 addSpace:(_Bool)arg4 shouldDispatchSelectText:(_Bool)arg5;
- (id)updatedPrefix:(id)arg1;
- (void)noPrefixFoundForTextInputPrefixListener:(id)arg1;
- (void)textInputPrefixListener:(id)arg1 foundPrefix:(id)arg2 withWord:(id)arg3 wordRange:(struct _NSRange)arg4;
- (void)configureWithTypeAheadUsers:(id)arg1;
- (id)initWithTextInput:(id)arg1 chatPostUserTypeAheadView:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

