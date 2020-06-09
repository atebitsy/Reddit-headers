//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DiscoveryUnitViewModel-Protocol.h"
#import "DiscoveryUnitViewModelAnalytics-Protocol.h"
#import "IGListDiffable-Protocol.h"

@class NSArray, NSString;
@protocol DiscoveryUnitViewModel;

@interface ElementalDiscoveryUnitViewModel : NSObject <IGListDiffable, DiscoveryUnitViewModelAnalytics, DiscoveryUnitViewModel>
{
    id <DiscoveryUnitViewModel> subDiscoveryUnitViewModel;
    NSString *_pk;
    NSArray *_discoveryUnitElements;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *discoveryUnitElements; // @synthesize discoveryUnitElements=_discoveryUnitElements;
@property(copy, nonatomic) NSString *pk; // @synthesize pk=_pk;
@property(retain) id <DiscoveryUnitViewModel> subDiscoveryUnitViewModel; // @synthesize subDiscoveryUnitViewModel;
- (_Bool)shouldShowLessForUserWithAccountSettings:(id)arg1;
- (void)updateShowLess:(_Bool)arg1 withAccountSettings:(id)arg2;
- (void)updateHidden:(_Bool)arg1 withAccountSettings:(id)arg2;
- (_Bool)isHiddenByUserWithAccountSettings:(id)arg1;
@property(readonly, nonatomic) _Bool requiresSeparationFromAds;
@property(readonly, nonatomic) _Bool shouldShowAfterFetch;
- (void)fetchDataWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithPrimaryKey:(id)arg1 discoveryUnitElements:(id)arg2;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
@property(readonly, nonatomic) unsigned long long analyticsItemsCount;
@property(readonly, nonatomic) NSArray *analyticsItemsPks;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

