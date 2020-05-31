//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseViewController.h"

#import "FilterViewControllerDelegate-Protocol.h"
#import "KeyboardStyleEditorDelegate-Protocol.h"
#import "LineDrawingControllerDelegate-Protocol.h"
#import "PhotoPickerViewControllerDelegate-Protocol.h"
#import "SnoomojiViewControllerDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class BaseButton, ColorPickerViewController, EditMemeToolbar, FilterViewController, KeyboardStyleEditor, LineDrawingController, NSLayoutConstraint, NSString, PhotoPickerViewController, SnoomojiViewController, UIFont, UIImage, UIImageView, UITextField, UIView;
@protocol EditMemeViewControllerDelegate;

@interface EditMemeViewController : BaseViewController <SnoomojiViewControllerDelegate, FilterViewControllerDelegate, PhotoPickerViewControllerDelegate, UIGestureRecognizerDelegate, UITextFieldDelegate, KeyboardStyleEditorDelegate, LineDrawingControllerDelegate>
{
    id <EditMemeViewControllerDelegate> _delegate;
    double _maxTextViewHeight;
    double _maxImageViewHeight;
    UIImage *_unfilteredMemeImage;
    UIImageView *_memePreviewImageView;
    UIView *_imageContainerView;
    UIView *_selectedView;
    UIView *_topShadedCueView;
    UIView *_bottomShadedCueView;
    UIView *_leftShadedCueView;
    UIView *_rightShadedCueView;
    NSLayoutConstraint *_snoomojiViewControllerAnimatedHiddenConstraint;
    NSLayoutConstraint *_photoPickerViewControllerAnimatedHiddenConstraint;
    NSLayoutConstraint *_filterViewControllerAnimatedHiddenConstraint;
    NSLayoutConstraint *_colorPickerViewControllerAnimatedHiddenConstraint;
    NSLayoutConstraint *_keyboardStylerHeightConstraint;
    UITextField *_selectedTextField;
    BaseButton *_trashButton;
    BaseButton *_undoButton;
    EditMemeToolbar *_editMemeToolbar;
    KeyboardStyleEditor *_keyboardStyleEditor;
    SnoomojiViewController *_snoomojiViewController;
    PhotoPickerViewController *_photoPickerViewController;
    FilterViewController *_filterViewController;
    ColorPickerViewController *_colorPickerViewController;
    double _retainedKeyboardHeight;
    UIFont *_selectedFont;
    LineDrawingController *_lineDrawer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) LineDrawingController *lineDrawer; // @synthesize lineDrawer=_lineDrawer;
@property(retain, nonatomic) UIFont *selectedFont; // @synthesize selectedFont=_selectedFont;
@property(nonatomic) double retainedKeyboardHeight; // @synthesize retainedKeyboardHeight=_retainedKeyboardHeight;
@property(retain, nonatomic) ColorPickerViewController *colorPickerViewController; // @synthesize colorPickerViewController=_colorPickerViewController;
@property(retain, nonatomic) FilterViewController *filterViewController; // @synthesize filterViewController=_filterViewController;
@property(retain, nonatomic) PhotoPickerViewController *photoPickerViewController; // @synthesize photoPickerViewController=_photoPickerViewController;
@property(retain, nonatomic) SnoomojiViewController *snoomojiViewController; // @synthesize snoomojiViewController=_snoomojiViewController;
@property(retain, nonatomic) KeyboardStyleEditor *keyboardStyleEditor; // @synthesize keyboardStyleEditor=_keyboardStyleEditor;
@property(retain, nonatomic) EditMemeToolbar *editMemeToolbar; // @synthesize editMemeToolbar=_editMemeToolbar;
@property(retain, nonatomic) BaseButton *undoButton; // @synthesize undoButton=_undoButton;
@property(retain, nonatomic) BaseButton *trashButton; // @synthesize trashButton=_trashButton;
@property(retain, nonatomic) UITextField *selectedTextField; // @synthesize selectedTextField=_selectedTextField;
@property(retain, nonatomic) NSLayoutConstraint *keyboardStylerHeightConstraint; // @synthesize keyboardStylerHeightConstraint=_keyboardStylerHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *colorPickerViewControllerAnimatedHiddenConstraint; // @synthesize colorPickerViewControllerAnimatedHiddenConstraint=_colorPickerViewControllerAnimatedHiddenConstraint;
@property(retain, nonatomic) NSLayoutConstraint *filterViewControllerAnimatedHiddenConstraint; // @synthesize filterViewControllerAnimatedHiddenConstraint=_filterViewControllerAnimatedHiddenConstraint;
@property(retain, nonatomic) NSLayoutConstraint *photoPickerViewControllerAnimatedHiddenConstraint; // @synthesize photoPickerViewControllerAnimatedHiddenConstraint=_photoPickerViewControllerAnimatedHiddenConstraint;
@property(retain, nonatomic) NSLayoutConstraint *snoomojiViewControllerAnimatedHiddenConstraint; // @synthesize snoomojiViewControllerAnimatedHiddenConstraint=_snoomojiViewControllerAnimatedHiddenConstraint;
@property(retain, nonatomic) UIView *rightShadedCueView; // @synthesize rightShadedCueView=_rightShadedCueView;
@property(retain, nonatomic) UIView *leftShadedCueView; // @synthesize leftShadedCueView=_leftShadedCueView;
@property(retain, nonatomic) UIView *bottomShadedCueView; // @synthesize bottomShadedCueView=_bottomShadedCueView;
@property(retain, nonatomic) UIView *topShadedCueView; // @synthesize topShadedCueView=_topShadedCueView;
@property(retain, nonatomic) UIView *selectedView; // @synthesize selectedView=_selectedView;
@property(retain, nonatomic) UIView *imageContainerView; // @synthesize imageContainerView=_imageContainerView;
@property(retain, nonatomic) UIImageView *memePreviewImageView; // @synthesize memePreviewImageView=_memePreviewImageView;
@property(retain, nonatomic) UIImage *unfilteredMemeImage; // @synthesize unfilteredMemeImage=_unfilteredMemeImage;
@property(nonatomic) double maxImageViewHeight; // @synthesize maxImageViewHeight=_maxImageViewHeight;
@property(nonatomic) double maxTextViewHeight; // @synthesize maxTextViewHeight=_maxTextViewHeight;
@property(nonatomic) __weak id <EditMemeViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)lineDrawingControllerDidStartDrawing:(id)arg1;
- (void)restoreKeyboardStylerPropertiesForTextField;
- (void)restoreDefaultSelectedTextFieldPropertiesWithKeyboard:(_Bool)arg1;
- (void)keyboardStyleEditor:(id)arg1 didSelectFontColor:(id)arg2;
- (void)keyboardStyleEditor:(id)arg1 didSelectFontBackgroundColor:(id)arg2;
- (void)keyboardStyleEditor:(id)arg1 didSelectFont:(id)arg2;
- (void)keyboardStyleEditorDidTapClose:(id)arg1;
- (void)keyboardStyleEditorDidTapStyle:(id)arg1;
- (void)keyboardStyleEditorDidTapKeyboard:(id)arg1;
- (void)textChanged:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)didSelectFilteredImage:(id)arg1;
- (void)photoPickerViewController:(id)arg1 didSelectPhoto:(id)arg2;
- (void)snoomojiViewController:(id)arg1 didSelectSnoomoji:(id)arg2;
- (void)didTapToolbarDrawButton;
- (void)didTapToolbarFiltersButton;
- (void)didTapToolbarImagesButton;
- (void)didTapToolbarStickersButton;
- (void)didTapToolbarTextEditButton;
- (void)hideFeatureViewController:(id)arg1 hiddenConstraint:(id)arg2;
- (void)showFeatureViewController:(id)arg1 hiddenConstraint:(id)arg2;
- (void)hideFilterViewController;
- (void)hidePhotoPickerViewController;
- (void)hideSnoomojiViewController;
- (void)enableDrawing;
- (void)disableDrawing;
- (void)hideFeatureViewControllers;
- (void)unhighlightMemePreviewImageViewBorders;
- (void)highlightMemePreviewImageViewBorders;
- (struct CGSize)photoPickerScaledSize:(struct CGSize)arg1;
- (void)expandTextFieldWidthToMaxVisibleWidth:(id)arg1;
- (void)attachGestureRecognizersToView:(id)arg1;
- (void)image:(id)arg1 didFinishSavingWithError:(id)arg2 contextInfo:(void *)arg3;
- (_Bool)hasEditedMeme;
- (void)dismissAllFeatures;
- (void)enableTrashButtonWithSelectedView:(id)arg1;
- (void)disableTrashButton;
- (void)didTapViewWithGestureRecognizer:(id)arg1;
- (void)handleTrashButtonOverlapWithGestureRecognizer:(id)arg1;
- (void)handleDidPinchImageViewRecognizer:(id)arg1;
- (void)handleDidPinchTextFieldRecognizer:(id)arg1;
- (void)didRotateView:(id)arg1;
- (void)didPinchView:(id)arg1;
- (void)didPanView:(id)arg1;
- (void)didTapUndo;
- (void)didTapTrash;
- (void)didTapDone;
- (void)didTapSave;
- (void)didTapExit;
- (void)configureViewAppearance;
- (void)setupFiltersToolbarViewController;
- (void)setupPhotoPickerViewController;
- (void)setupUndoButton;
- (void)setupTrashButton;
- (void)setupSnoomojiViewController;
- (void)setupShadedCueViews;
- (void)setupMemePreviewImageView;
- (void)setupImageContainerView;
- (void)setupEditMemeToolbar;
- (void)setupKeyboardStyler;
- (void)toggleKeyboardConstraintsActive:(_Bool)arg1;
- (void)setupColorPickerViewController;
- (void)setupNavigationItem;
- (void)viewDidLoad;
- (id)initWithImage:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

