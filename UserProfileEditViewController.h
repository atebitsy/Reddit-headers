//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseViewController.h"

#import "ProfileSettingTextViewDelegate-Protocol.h"
#import "RUIActionSheetViewControllerDelegate-Protocol.h"
#import "RequestToNavigateView-Protocol.h"
#import "UIImagePickerControllerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"

@class NSDictionary, NSString, ProfileEditHeaderView, ProfileSettingTextView, RedditService, ToggleTextDetailView, UIImagePickerController, UIScrollView, User;
@protocol AccountContext, UserProfileEditViewControllerDelegate;

@interface UserProfileEditViewController : BaseViewController <RequestToNavigateView, ProfileSettingTextViewDelegate, RUIActionSheetViewControllerDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate>
{
    id <UserProfileEditViewControllerDelegate> _delegate;
    id <AccountContext> _accountContext;
    NSString *_displayName;
    NSString *_aboutText;
    ProfileEditHeaderView *_headerView;
    ProfileSettingTextView *_usernameView;
    ProfileSettingTextView *_aboutView;
    ToggleTextDetailView *_contentVisibilityView;
    ToggleTextDetailView *_activeCommunitiesView;
    UIScrollView *_scrollView;
    User *_user;
    NSDictionary *_subredditSettings;
    UIImagePickerController *_picker;
    NSString *_currentActionIdentifier;
    NSString *_currentImageUrlString;
    NSString *_uploadedImageUrlString;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *uploadedImageUrlString; // @synthesize uploadedImageUrlString=_uploadedImageUrlString;
@property(copy, nonatomic) NSString *currentImageUrlString; // @synthesize currentImageUrlString=_currentImageUrlString;
@property(copy, nonatomic) NSString *currentActionIdentifier; // @synthesize currentActionIdentifier=_currentActionIdentifier;
@property(retain, nonatomic) UIImagePickerController *picker; // @synthesize picker=_picker;
@property(retain, nonatomic) NSDictionary *subredditSettings; // @synthesize subredditSettings=_subredditSettings;
@property(retain, nonatomic) User *user; // @synthesize user=_user;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) ToggleTextDetailView *activeCommunitiesView; // @synthesize activeCommunitiesView=_activeCommunitiesView;
@property(retain, nonatomic) ToggleTextDetailView *contentVisibilityView; // @synthesize contentVisibilityView=_contentVisibilityView;
@property(retain, nonatomic) ProfileSettingTextView *aboutView; // @synthesize aboutView=_aboutView;
@property(retain, nonatomic) ProfileSettingTextView *usernameView; // @synthesize usernameView=_usernameView;
@property(retain, nonatomic) ProfileEditHeaderView *headerView; // @synthesize headerView=_headerView;
@property(copy, nonatomic) NSString *aboutText; // @synthesize aboutText=_aboutText;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, nonatomic) id <AccountContext> accountContext; // @synthesize accountContext=_accountContext;
@property(nonatomic) __weak id <UserProfileEditViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)showProfileUpdateFailedError;
- (void)showBannerUpdateFailedError;
- (void)showUnableToSaveError;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)requestToNavigateAwayWithCompletion:(CDUnknownBlockType)arg1;
- (void)updateProfileWithUploadedImageAtS3Path:(id)arg1;
- (void)uploadProfileToS3PWithImageAtPath:(id)arg1;
- (void)endProfileUpload;
- (void)prepareProfileUpload;
- (void)updateBannerWithUploadedImageAtS3Path:(id)arg1;
- (void)uploadBannerToS3PWithImageAtPath:(id)arg1;
- (void)endBannerUpload;
- (void)prepareBannerUpload;
- (_Bool)shouldCompressImage:(id)arg1;
- (id)saveImageToDisk:(id)arg1 withName:(id)arg2;
- (void)configureForPickedImage:(id)arg1 fromSource:(long long)arg2;
- (void)presentImagePickerForSourceType:(long long)arg1;
- (void)didTapPhotosButton;
- (void)didTapCameraButton;
- (void)removeProfile;
- (void)removeHeader;
- (void)actionSheetViewController:(id)arg1 didSelectItem:(id)arg2;
- (void)actionSheetViewController:(id)arg1 didGetDismissedFromOutside:(_Bool)arg2;
- (void)textViewSizeDidChange:(id)arg1 newSize:(struct CGSize)arg2;
- (void)updateShowInActiveCommunitySettings;
@property(readonly, nonatomic) _Bool isAnySettingModified;
- (void)updateSubredditSettings;
- (void)goBack;
- (void)didTapDone:(id)arg1;
- (void)didTapClose:(id)arg1;
- (void)stopProgressOverView:(id)arg1;
- (id)startProgressOverView:(id)arg1;
- (double)preferredHeaderBarHeight;
- (void)updateProfileImage:(id)arg1;
- (void)updateHeaderImage:(id)arg1;
- (void)enableUploadControls;
- (void)didTapView:(id)arg1;
- (void)fetchSettings;
- (void)verifyURLReachability:(id)arg1;
- (void)verifyUpdatedBannerImage;
- (void)verifyUpdatedProfileImage;
- (void)updateProfile;
- (void)setupNavBarItems;
- (void)registerNotifications;
- (void)configureHeaderWithUser:(id)arg1;
- (void)fillBannerComponents;
- (void)clearBannerComponents;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)dealloc;
@property(readonly, nonatomic) RedditService *redditService;
- (id)initWithUser:(id)arg1 accountContext:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

