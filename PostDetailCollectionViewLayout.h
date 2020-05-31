//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewFlowLayout.h>

@class NSMutableDictionary;

@interface PostDetailCollectionViewLayout : UICollectionViewFlowLayout
{
    _Bool _shouldFixContentOffset;
    double _offsetChange;
    NSMutableDictionary *_layoutAttributeCache;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *layoutAttributeCache; // @synthesize layoutAttributeCache=_layoutAttributeCache;
@property(nonatomic) _Bool shouldFixContentOffset; // @synthesize shouldFixContentOffset=_shouldFixContentOffset;
@property(nonatomic) double offsetChange; // @synthesize offsetChange=_offsetChange;
- (double)calcuateExpectedOffsetAdjustmentWithUpdateItems:(id)arg1;
- (void)cacheCurrentCollectionViewLayoutAttributes;
- (void)finalizeCollectionViewUpdates;
- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg1;
- (void)prepareForCollectionViewUpdates:(id)arg1;
- (void)performUpdateWithFixedOffset:(CDUnknownBlockType)arg1;
- (id)init;

@end

