//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <Economy/UICollectionViewDataSource-Protocol.h>
#import <Economy/UICollectionViewDelegate-Protocol.h>

__attribute__((visibility("hidden")))
@interface _TtCC7Economy14AwardSelection9AwardList : UIView <UICollectionViewDataSource, UICollectionViewDelegate>
{
    // Error parsing type: , name: shouldHidePrice
    // Error parsing type: , name: eventLogger
    // Error parsing type: , name: isV2
    // Error parsing type: , name: _selectedAwardViewModel
    // Error parsing type: , name: didSelectAward
    // Error parsing type: , name: displayedAwardViewModels
    // Error parsing type: , name: awardViewModels
    // Error parsing type: , name: theme
    // Error parsing type: , name: knownCellFrames
    // Error parsing type: , name: collectionView
}

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)initWithCoder:(id)arg1;

@end

