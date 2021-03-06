//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseViewController.h"

#import "SelectAwardPresentable-Protocol.h"
#import "SelectedAwardViewControllerDelegate-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class BaseCollectionView, BaseLabel, CoinSale, FeedSpinnerView, NSLayoutConstraint, NSString, SelectAwardDelegator, SelectAwardPresenter, SelectedAwardViewController, UIStackView;
@protocol SelectAwardViewControllerDelegate;

@interface SelectAwardViewController : BaseViewController <SelectedAwardViewControllerDelegate, SelectAwardPresentable, UICollectionViewDelegate>
{
    _Bool _shouldScrollToBanner;
    SelectAwardPresenter *_presenter;
    id <SelectAwardViewControllerDelegate> _delegate;
    SelectAwardDelegator *_delegator;
    BaseLabel *_titleLabel;
    BaseLabel *_promptLabel;
    UIStackView *_titleStackView;
    BaseCollectionView *_collectionView;
    SelectedAwardViewController *_selectedAwardController;
    FeedSpinnerView *_loadingIndicatorView;
    CoinSale *_coinSale;
    NSLayoutConstraint *_coinSaleBannerTop;
    NSLayoutConstraint *_selectedAwardViewBottomConstraint;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool shouldScrollToBanner; // @synthesize shouldScrollToBanner=_shouldScrollToBanner;
@property(retain, nonatomic) NSLayoutConstraint *selectedAwardViewBottomConstraint; // @synthesize selectedAwardViewBottomConstraint=_selectedAwardViewBottomConstraint;
@property(retain, nonatomic) NSLayoutConstraint *coinSaleBannerTop; // @synthesize coinSaleBannerTop=_coinSaleBannerTop;
@property(retain, nonatomic) CoinSale *coinSale; // @synthesize coinSale=_coinSale;
@property(retain, nonatomic) FeedSpinnerView *loadingIndicatorView; // @synthesize loadingIndicatorView=_loadingIndicatorView;
@property(retain, nonatomic) SelectedAwardViewController *selectedAwardController; // @synthesize selectedAwardController=_selectedAwardController;
@property(retain, nonatomic) BaseCollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) UIStackView *titleStackView; // @synthesize titleStackView=_titleStackView;
@property(retain, nonatomic) BaseLabel *promptLabel; // @synthesize promptLabel=_promptLabel;
@property(retain, nonatomic) BaseLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) SelectAwardDelegator *delegator; // @synthesize delegator=_delegator;
@property(nonatomic) __weak id <SelectAwardViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) SelectAwardPresenter *presenter; // @synthesize presenter=_presenter;
- (void)updateForKeyboardHeight:(double)arg1 keyboardInfo:(id)arg2;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)selectedAwardViewController:(id)arg1 didEnterMessage:(id)arg2;
- (void)selectedAwardViewControllerDidTapActionButton:(id)arg1;
- (void)selectedAwardViewControllerDidTapEditOptions:(id)arg1;
- (void)infoButtonDidTap:(id)arg1;
- (void)closeButtonDidTap:(id)arg1;
- (void)showToastForError:(id)arg1;
- (void)showLoadingFailureIndicator;
- (void)hideLoadingIndicator;
- (void)showLoadingIndicator;
- (void)reloadScreen;
- (void)configureNavigationBarAppearance;
- (_Bool)prefersTabBarHidden;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollToBanner:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)updateSelectedItem;
- (void)updatePromptLabel;
- (void)updateUserInteraction;
- (unsigned long long)selectedAwardViewModelOptions;
- (void)updateSelectedAwardView;
- (void)configureSelectedAwardController;
- (void)configureCollectionView;
- (void)configureNavigationItem;
- (void)configureCoinSaleBanner;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLoad;
- (id)initWithPresenter:(id)arg1 andSale:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

