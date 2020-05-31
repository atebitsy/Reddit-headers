//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseViewController.h"

#import "BaseTextViewDelegate-Protocol.h"
#import "ChatKeyboardAnalyticsTracker-Protocol.h"
#import "ComposeChatViewDelegate-Protocol.h"
#import "ObjectObserverProtocol-Protocol.h"
#import "PhotoPickerViewControllerDelegate-Protocol.h"
#import "RequestToNavigateView-Protocol.h"
#import "SnoomojiViewControllerDelegate-Protocol.h"

@class BaseView, Channel, ChatFeedInteractor, ChatPostPickerViewController, ComposeChatOverlayView, ComposeChatView, NSString, NSTimer, PhotoPickerViewController, RedditService, SnoomojiViewController, UIViewController;
@protocol AccountContext, ChatCompositionViewControllerDelegate, CurrentActionSheetProtocol;

@interface ChatCompositionViewController : BaseViewController <ComposeChatViewDelegate, BaseTextViewDelegate, SnoomojiViewControllerDelegate, ChatKeyboardAnalyticsTracker, ObjectObserverProtocol, PhotoPickerViewControllerDelegate, RequestToNavigateView>
{
    id <ChatCompositionViewControllerDelegate> _delegate;
    Channel *_channel;
    NSTimer *_messageTypingTimer;
    UIViewController<CurrentActionSheetProtocol> *_currentMediaController;
    BaseView *_keyboardBackgroundView;
    BaseView *_mediaContainerView;
    ComposeChatView *_composeMessageView;
    SnoomojiViewController *_snoomojiViewController;
    PhotoPickerViewController *_photoPickerViewController;
    ChatPostPickerViewController *_postPickerViewController;
    ChatFeedInteractor *_interactor;
    ComposeChatOverlayView *_channelLockedView;
    ComposeChatOverlayView *_channelMutedView;
    id <AccountContext> _accountContext;
    struct CGSize _keyboardSize;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <AccountContext> accountContext; // @synthesize accountContext=_accountContext;
@property(retain, nonatomic) ComposeChatOverlayView *channelMutedView; // @synthesize channelMutedView=_channelMutedView;
@property(retain, nonatomic) ComposeChatOverlayView *channelLockedView; // @synthesize channelLockedView=_channelLockedView;
@property(retain, nonatomic) ChatFeedInteractor *interactor; // @synthesize interactor=_interactor;
@property(retain, nonatomic) ChatPostPickerViewController *postPickerViewController; // @synthesize postPickerViewController=_postPickerViewController;
@property(retain, nonatomic) PhotoPickerViewController *photoPickerViewController; // @synthesize photoPickerViewController=_photoPickerViewController;
@property(retain, nonatomic) SnoomojiViewController *snoomojiViewController; // @synthesize snoomojiViewController=_snoomojiViewController;
@property(retain, nonatomic) ComposeChatView *composeMessageView; // @synthesize composeMessageView=_composeMessageView;
@property(retain, nonatomic) BaseView *mediaContainerView; // @synthesize mediaContainerView=_mediaContainerView;
@property(retain, nonatomic) BaseView *keyboardBackgroundView; // @synthesize keyboardBackgroundView=_keyboardBackgroundView;
@property(retain, nonatomic) UIViewController<CurrentActionSheetProtocol> *currentMediaController; // @synthesize currentMediaController=_currentMediaController;
@property(retain, nonatomic) NSTimer *messageTypingTimer; // @synthesize messageTypingTimer=_messageTypingTimer;
@property(retain, nonatomic) Channel *channel; // @synthesize channel=_channel;
@property(nonatomic) struct CGSize keyboardSize; // @synthesize keyboardSize=_keyboardSize;
@property(nonatomic) __weak id <ChatCompositionViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)photoPickerViewController:(id)arg1 didSelectPhoto:(id)arg2;
- (void)snoomojiViewController:(id)arg1 didSelectSnoomoji:(id)arg2;
- (void)trackKeyboardEventWithNoun:(id)arg1;
- (void)updateContentViewsForData:(id)arg1 changeKeyPath:(id)arg2 oldValue:(id)arg3 newValue:(id)arg4;
- (void)applicationWillResignActive:(id)arg1;
- (void)animateKeyboardWithUserInfo:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)requestToNavigateAwayWithCompletion:(CDUnknownBlockType)arg1;
- (void)stoppedTypingMessage;
- (void)startedTypingMessage;
- (_Bool)shouldShowOverlay;
- (_Bool)shouldAllowBypassingOverlay;
@property(readonly, nonatomic) double mediaContainerHeight;
- (void)layoutViewsForFrame:(struct CGRect)arg1;
- (void)messageTypingTimerFired:(id)arg1;
- (void)resetMessageTypingTimer;
- (void)activateMessageTypingTimer;
- (void)composeChatViewDidChangeMessage:(id)arg1;
- (void)composeChatViewDidEndTyping:(id)arg1;
- (void)composeChatViewDidStartTyping:(id)arg1;
- (void)composeChatViewDidTapCancelSelectedMedia:(id)arg1;
- (void)composeChatViewDidTapMediaButton:(id)arg1;
- (void)textView:(id)arg1 didChangeToNewSize:(struct CGSize)arg2;
- (_Bool)textViewShouldChangeSize:(id)arg1;
- (void)mediaTypeDidChange:(id)arg1;
- (void)disable;
- (void)enable;
- (void)stopComposing;
@property(readonly, nonatomic) _Bool isComposing;
- (void)disableCompositionView;
- (void)enableCompositionView;
- (void)removeOverlays;
- (void)updateOverlaysForNonModerator:(id)arg1;
- (void)updateOverlaysForModerator:(id)arg1;
- (void)updateOverlays;
- (void)configureWithChannel:(id)arg1;
- (void)configureViewAppearance;
- (void)viewDidLoad;
@property(readonly, nonatomic) RedditService *service;
- (id)initWithAccountContext:(id)arg1 interactor:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

