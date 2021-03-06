//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ListingViewController.h"

#import "KeyboardInteractorDelegate-Protocol.h"
#import "REDTokenFieldDataSource-Protocol.h"
#import "REDTokenFieldDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class BaseButton, BaseCollectionView, BaseLabel, BaseTextField, BaseView, Channel, KeyboardFloatingViewInteractor, NSArray, NSMutableOrderedSet, NSString, REDTokenField, RedditService, UIActivityIndicatorView, UIView, WarningLabel;
@protocol ChatAddressBookViewControllerDelegate;

@interface ChatAddressBookViewController : ListingViewController <UICollectionViewDelegate, UICollectionViewDataSource, REDTokenFieldDelegate, REDTokenFieldDataSource, UICollectionViewDelegateFlowLayout, KeyboardInteractorDelegate, UITextFieldDelegate>
{
    _Bool _allowSelection;
    _Bool _invalidSearch;
    _Bool _unableToMessage;
    _Bool _isCreatingGroupChat;
    unsigned long long _mode;
    id <ChatAddressBookViewControllerDelegate> _delegate;
    NSArray *_hiddenContacts;
    Channel *_channel;
    NSMutableOrderedSet *_pickedContacts;
    NSString *_searchText;
    BaseCollectionView *_collectionView;
    NSString *_filterText;
    REDTokenField *_searchField;
    BaseView *_bottomButtonContainer;
    BaseButton *_bottomButton;
    BaseTextField *_groupNameTextField;
    WarningLabel *_groupNameCharCountLabel;
    UIView *_groupNameTextFieldBottomBorder;
    NSString *_bottomButtonTitle;
    UIActivityIndicatorView *_activityIndicatorView;
    KeyboardFloatingViewInteractor *_keyboardInteractor;
    BaseLabel *_titleLabel;
    BaseLabel *_subtitleLabel;
    RedditService *_service;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) RedditService *service; // @synthesize service=_service;
@property(nonatomic) _Bool isCreatingGroupChat; // @synthesize isCreatingGroupChat=_isCreatingGroupChat;
@property(retain, nonatomic) BaseLabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) BaseLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) KeyboardFloatingViewInteractor *keyboardInteractor; // @synthesize keyboardInteractor=_keyboardInteractor;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
@property(retain, nonatomic) NSString *bottomButtonTitle; // @synthesize bottomButtonTitle=_bottomButtonTitle;
@property(retain, nonatomic) UIView *groupNameTextFieldBottomBorder; // @synthesize groupNameTextFieldBottomBorder=_groupNameTextFieldBottomBorder;
@property(retain, nonatomic) WarningLabel *groupNameCharCountLabel; // @synthesize groupNameCharCountLabel=_groupNameCharCountLabel;
@property(retain, nonatomic) BaseTextField *groupNameTextField; // @synthesize groupNameTextField=_groupNameTextField;
@property(retain, nonatomic) BaseButton *bottomButton; // @synthesize bottomButton=_bottomButton;
@property(retain, nonatomic) BaseView *bottomButtonContainer; // @synthesize bottomButtonContainer=_bottomButtonContainer;
@property(retain, nonatomic) REDTokenField *searchField; // @synthesize searchField=_searchField;
@property(copy, nonatomic) NSString *filterText; // @synthesize filterText=_filterText;
@property(retain, nonatomic) BaseCollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) _Bool unableToMessage; // @synthesize unableToMessage=_unableToMessage;
@property(nonatomic) _Bool invalidSearch; // @synthesize invalidSearch=_invalidSearch;
@property(copy, nonatomic) NSString *searchText; // @synthesize searchText=_searchText;
@property(retain, nonatomic) NSMutableOrderedSet *pickedContacts; // @synthesize pickedContacts=_pickedContacts;
@property(retain, nonatomic) Channel *channel; // @synthesize channel=_channel;
@property(copy, nonatomic) NSArray *hiddenContacts; // @synthesize hiddenContacts=_hiddenContacts;
@property(nonatomic) _Bool allowSelection; // @synthesize allowSelection=_allowSelection;
@property(nonatomic) __weak id <ChatAddressBookViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
- (void)trackAnalyticsViewEventWithAction:(id)arg1 noun:(id)arg2;
- (void)trackAnalyticsEventWithAction:(id)arg1 noun:(id)arg2 addedMethod:(unsigned long long)arg3;
- (id)analyticsScreenViewName;
@property(readonly, nonatomic) double keyboardHeight;
- (void)keyboardDidChange;
- (void)updateContentViewsWhenLoadingMoreFinishes;
- (void)updateContentViewsWhenReloadFinishes;
- (id)majorContentScrollView;
- (id)tokenField:(id)arg1 titleForTokenAtIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfTokensInTokenField:(id)arg1;
- (id)inputTextFieldReplacementStringForTextField:(id)arg1;
- (_Bool)tokenField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)tokenField:(id)arg1 didDeleteTokenAtIndex:(unsigned long long)arg2;
- (void)tokenField:(id)arg1 didEnterText:(id)arg2;
- (void)tokenField:(id)arg1 didChangeText:(id)arg2;
- (void)textFieldDidEndEditing:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidChange:(id)arg1;
- (void)didTapCreatePendingChannel:(id)arg1;
- (void)didTapInvite:(id)arg1;
- (void)createChannelCompletedWithChannel:(id)arg1;
- (void)didTapCreate:(id)arg1;
- (void)didTapClose:(id)arg1;
- (void)setContactSelected:(_Bool)arg1 contact:(id)arg2;
- (void)toggleContact:(id)arg1;
- (void)messageUserFailed;
- (void)userVerificationFailed;
- (void)userVerificationSucceededWithUser:(id)arg1;
- (void)addUserFromSearch;
- (id)contactForIndexPath:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplaySupplementaryView:(id)arg2 forElementKind:(id)arg3 atIndexPath:(id)arg4;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
@property(readonly, copy, nonatomic) NSString *trimmedGroupChatName;
- (void)removeContact:(id)arg1;
- (void)addContact:(id)arg1;
- (void)dismiss;
- (_Bool)hasReachedPickedContactLimit;
@property(readonly, nonatomic) _Bool groupChatEnabled;
- (_Bool)searchTextMatchesSomeoneInContactList;
- (_Bool)searchTextIsEqualToCurrentUsername;
- (id)searchErrorMessage;
@property(readonly, nonatomic) NSArray *filteredContacts;
@property(readonly, copy, nonatomic) NSArray *contacts;
- (void)updateTitleLabels;
- (void)updateTopViewFrames:(struct CGRect)arg1;
- (void)layoutViewsForFrame:(struct CGRect)arg1;
- (void)setNetworkActivityActive:(_Bool)arg1;
- (void)setBottomButtonEnabled:(_Bool)arg1;
- (void)updateBottomButtonStatus;
- (void)configureButtons;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)updateCollectionViewInsets;
- (void)viewDidLoad;
- (struct UIEdgeInsets)preferredContentInset;
- (id)initWithMode:(unsigned long long)arg1 initialContacts:(id)arg2 presenter:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

