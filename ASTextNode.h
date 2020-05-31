//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AsyncDisplayKit/ASControlNode.h>

#import <AsyncDisplayKit/UIGestureRecognizerDelegate-Protocol.h>

@class ASHighlightOverlayLayer, NSArray, NSAttributedString, NSString, UIColor, UILongPressGestureRecognizer;
@protocol ASTextNodeDelegate;

@interface ASTextNode : ASControlNode <UIGestureRecognizerDelegate>
{
    struct CGSize _shadowOffset;
    struct CGColor *_shadowColor;
    UIColor *_cachedShadowUIColor;
    UIColor *_placeholderColor;
    double _shadowOpacity;
    double _shadowRadius;
    struct UIEdgeInsets _textContainerInset;
    NSArray *_exclusionPaths;
    NSAttributedString *_attributedText;
    NSAttributedString *_truncationAttributedText;
    NSAttributedString *_composedTruncationText;
    NSString *_highlightedLinkAttributeName;
    id _highlightedLinkAttributeValue;
    unsigned long long _highlightStyle;
    struct _NSRange _highlightRange;
    ASHighlightOverlayLayer *_activeHighlightLayer;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    _Bool _longPressCancelsTouches;
    _Bool _passthroughNonlinkTouches;
    _Bool _usingExperiment;
    NSAttributedString *_additionalTruncationMessage;
    long long _truncationMode;
    unsigned long long _maximumNumberOfLines;
    NSArray *_linkAttributeNames;
    id <ASTextNodeDelegate> _delegate;
    NSArray *_pointSizeScaleFactors;
    struct UIEdgeInsets _placeholderInsets;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (double)_highlightOpacityForStyle:(unsigned long long)arg1;
+ (struct CGColor *)_highlightColorForStyle:(unsigned long long)arg1;
+ (void)drawRect:(struct CGRect)arg1 withParameters:(id)arg2 isCancelled:(CDUnknownBlockType)arg3 isRasterizing:(_Bool)arg4;
+ (double)ascenderWithAttributedString:(id)arg1;
- (void).cxx_destruct;
@property(readonly) _Bool usingExperiment; // @synthesize usingExperiment=_usingExperiment;
@property(copy, nonatomic) NSArray *pointSizeScaleFactors; // @synthesize pointSizeScaleFactors=_pointSizeScaleFactors;
@property(nonatomic) _Bool passthroughNonlinkTouches; // @synthesize passthroughNonlinkTouches=_passthroughNonlinkTouches;
@property(nonatomic) _Bool longPressCancelsTouches; // @synthesize longPressCancelsTouches=_longPressCancelsTouches;
@property __weak id <ASTextNodeDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy) NSArray *linkAttributeNames; // @synthesize linkAttributeNames=_linkAttributeNames;
@property struct UIEdgeInsets placeholderInsets; // @synthesize placeholderInsets=_placeholderInsets;
@property unsigned long long maximumNumberOfLines; // @synthesize maximumNumberOfLines=_maximumNumberOfLines;
@property long long truncationMode; // @synthesize truncationMode=_truncationMode;
@property(copy) NSAttributedString *additionalTruncationMessage; // @synthesize additionalTruncationMessage=_additionalTruncationMessage;
- (id)_locked_prepareTruncationStringForDrawing:(id)arg1;
- (id)_locked_composedTruncationText;
- (struct _NSRange)_additionalTruncationMessageRangeWithVisibleRange:(struct _NSRange)arg1;
- (void)_invalidateTruncationText;
@property(readonly) unsigned long long lineCount;
@property(readonly, getter=isTruncated) _Bool truncated;
@property(copy) NSAttributedString *truncationAttributedText;
@property(readonly) struct UIEdgeInsets shadowPadding;
- (void)setShadowRadius:(double)arg1;
- (double)shadowRadius;
- (void)setShadowOpacity:(double)arg1;
- (double)shadowOpacity;
- (void)setShadowOffset:(struct CGSize)arg1;
- (struct CGSize)shadowOffset;
- (void)setShadowColor:(struct CGColor *)arg1;
- (struct CGColor *)shadowColor;
- (_Bool)_pendingTruncationTap;
- (_Bool)_pendingLinkTap;
- (void)_handleLongPress:(id)arg1;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)placeholderImage;
@property(copy) UIColor *placeholderColor;
- (struct CGRect)frameForTextRange:(struct _NSRange)arg1;
- (struct CGRect)trailingRect;
- (id)_rectsForTextRange:(struct _NSRange)arg1 measureOption:(unsigned long long)arg2;
- (id)highlightRectsForTextRange:(struct _NSRange)arg1;
- (id)rectsForTextRange:(struct _NSRange)arg1;
- (void)_clearHighlightIfNecessary;
- (void)_setHighlightRange:(struct _NSRange)arg1 forAttributeName:(id)arg2 value:(id)arg3 animated:(_Bool)arg4;
- (void)setHighlightRange:(struct _NSRange)arg1 animated:(_Bool)arg2;
@property struct _NSRange highlightRange;
@property unsigned long long highlightStyle;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)_linkAttributeValueAtPoint:(struct CGPoint)arg1 attributeName:(out id *)arg2 range:(out struct _NSRange *)arg3 inAdditionalTruncationMessage:(out _Bool *)arg4 forHighlighting:(_Bool)arg5;
- (id)linkAttributeValueAtPoint:(struct CGPoint)arg1 attributeName:(out id *)arg2 range:(out struct _NSRange *)arg3;
- (id)drawParametersForAsyncLayer:(id)arg1;
@property(copy) NSArray *exclusionPaths;
@property(copy) NSAttributedString *attributedText;
- (struct CGSize)calculateSizeThatFits:(struct CGSize)arg1;
@property(nonatomic) struct UIEdgeInsets textContainerInset;
- (struct ASTextKitAttributes)_locked_rendererAttributes;
- (id)_locked_rendererWithBounds:(struct CGRect)arg1;
- (id)_locked_renderer;
- (id)_rendererWithBounds:(struct CGRect)arg1;
- (id)_renderer;
- (_Bool)supportsLayerBacking;
- (void)didLoad;
- (id)propertiesForDebugDescription;
- (id)propertiesForDescription;
- (id)_plainStringForDescription;
- (void)dealloc;
- (id)init;
@property(copy) NSAttributedString *truncationAttributedString;
@property(copy) NSAttributedString *attributedString;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property _Bool placeholderEnabled; // @dynamic placeholderEnabled;
@property(readonly) Class superclass;

@end

