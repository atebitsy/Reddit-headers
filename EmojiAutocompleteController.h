//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TextInputPrefixListenerDelegate-Protocol.h"

@class NSArray, NSString, TextInputPrefixListener, UIResponder;
@protocol EmojiAutocompleteControllerDelegate, UITextInput;

@interface EmojiAutocompleteController : NSObject <TextInputPrefixListenerDelegate>
{
    id <EmojiAutocompleteControllerDelegate> _delegate;
    NSArray *_emojis;
    UIResponder<UITextInput> *_textInput;
    TextInputPrefixListener *_prefixListener;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TextInputPrefixListener *prefixListener; // @synthesize prefixListener=_prefixListener;
@property(retain, nonatomic) UIResponder<UITextInput> *textInput; // @synthesize textInput=_textInput;
@property(copy, nonatomic) NSArray *emojis; // @synthesize emojis=_emojis;
@property(nonatomic) __weak id <EmojiAutocompleteControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)noPrefixFoundForTextInputPrefixListener:(id)arg1;
- (void)textInputPrefixListener:(id)arg1 foundPrefix:(id)arg2 withWord:(id)arg3 wordRange:(struct _NSRange)arg4;
- (void)selectAllText;
- (void)configureWithEmojis:(id)arg1;
- (id)initWithTextInput:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

