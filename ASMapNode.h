//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AsyncDisplayKit/ASImageNode.h>

@class MKMapSnapshotOptions, MKMapSnapshotter, MKMapView, NSArray;
@protocol MKMapViewDelegate;

@interface ASMapNode : ASImageNode
{
    MKMapSnapshotter *_snapshotter;
    _Bool _snapshotAfterLayout;
    NSArray *_annotations;
    _Bool _needsMapReloadOnBoundsChange;
    _Bool _liveMap;
    id <MKMapViewDelegate> _mapDelegate;
    MKMapSnapshotOptions *_options;
    unsigned long long _showAnnotationsOptions;
    MKMapView *_mapView;
    CDUnknownBlockType _imageForStaticMapAnnotationBlock;
}

+ (id)defaultPinImageWithCenterOffset:(struct CGPoint *)arg1;
- (void).cxx_destruct;
@property(copy) CDUnknownBlockType imageForStaticMapAnnotationBlock; // @synthesize imageForStaticMapAnnotationBlock=_imageForStaticMapAnnotationBlock;
@property(readonly) MKMapView *mapView; // @synthesize mapView=_mapView;
- (_Bool)supportsLayerBacking;
- (void)layout;
- (void)calculatedLayoutDidChange;
- (struct CGSize)calculateSizeThatFits:(struct CGSize)arg1;
- (void)setSnapshotSizeWithReloadIfNeeded:(struct CGSize)arg1;
@property unsigned long long showAnnotationsOptions; // @synthesize showAnnotationsOptions=_showAnnotationsOptions;
- (CDStruct_2b0c6e0b)regionToFitAnnotations:(id)arg1;
@property(copy) NSArray *annotations;
- (void)removeLiveMap;
- (void)addLiveMap;
- (void)applySnapshotOptions;
- (void)destroySnapshotter;
- (void)setUpSnapshotter;
- (void)takeSnapshot;
@property(nonatomic) __weak id <MKMapViewDelegate> mapDelegate; // @synthesize mapDelegate=_mapDelegate;
@property(nonatomic) CDStruct_2b0c6e0b region;
@property(retain, nonatomic) MKMapSnapshotOptions *options; // @synthesize options=_options;
@property _Bool needsMapReloadOnBoundsChange; // @synthesize needsMapReloadOnBoundsChange=_needsMapReloadOnBoundsChange;
@property(getter=isLiveMap) _Bool liveMap; // @synthesize liveMap=_liveMap;
- (void)didExitPreloadState;
- (void)didEnterPreloadState;
- (void)setLayerBacked:(_Bool)arg1;
- (void)dealloc;
- (void)didLoad;
- (id)init;

@end

