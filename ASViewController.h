//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <AsyncDisplayKit/ASVisibilityDepth-Protocol.h>

@class ASDisplayNode, NSString;

@interface ASViewController : UIViewController <ASVisibilityDepth>
{
    _Bool _ensureDisplayed;
    _Bool _automaticallyAdjustRangeModeBasedOnViewEvents;
    _Bool _parentManagesVisibilityDepth;
    long long _visibilityDepth;
    _Bool _selfConformsToRangeModeProtocol;
    _Bool _nodeConformsToRangeModeProtocol;
    struct UIEdgeInsets _fallbackAdditionalSafeAreaInsets;
    _Bool _neverShowPlaceholders;
    ASDisplayNode *_node;
    CDUnknownBlockType _overrideDisplayTraitsWithTraitCollection;
    CDUnknownBlockType _overrideDisplayTraitsWithWindowSize;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool neverShowPlaceholders; // @synthesize neverShowPlaceholders=_neverShowPlaceholders;
@property(copy, nonatomic) CDUnknownBlockType overrideDisplayTraitsWithWindowSize; // @synthesize overrideDisplayTraitsWithWindowSize=_overrideDisplayTraitsWithWindowSize;
@property(copy, nonatomic) CDUnknownBlockType overrideDisplayTraitsWithTraitCollection; // @synthesize overrideDisplayTraitsWithTraitCollection=_overrideDisplayTraitsWithTraitCollection;
@property(readonly, nonatomic) ASDisplayNode *node; // @synthesize node=_node;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)propagateNewTraitCollection:(struct ASPrimitiveTraitCollection)arg1;
- (struct ASPrimitiveTraitCollection)primitiveTraitCollectionForUITraitCollection:(id)arg1;
@property(nonatomic) struct UIEdgeInsets additionalSafeAreaInsets;
@property(readonly, nonatomic) unsigned long long interfaceState;
- (CDStruct_42a63532)nodeConstrainedSize;
- (void)updateCurrentRangeModeWithModeIfPossible:(long long)arg1;
- (void)setAutomaticallyAdjustRangeModeBasedOnViewEvents:(_Bool)arg1;
- (_Bool)automaticallyAdjustRangeModeBasedOnViewEvents;
- (void)visibilityDepthDidChange;
- (long long)visibilityDepth;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)setVisibilityDepth:(unsigned long long)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)didMoveToParentViewController:(id)arg1;
- (void)_updateNodeFallbackSafeArea;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)loadView;
- (void)dealloc;
- (void)_initializeInstance;
- (id)initWithNode:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

