//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ASCollectionNode, NSArray, SerialAsyncQueue;

@interface CollectionDiffingAdapter : NSObject
{
    _Bool _didReadInitialItems;
    ASCollectionNode *_collectionNode;
    NSArray *_items;
    SerialAsyncQueue *_serialQueue;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool didReadInitialItems; // @synthesize didReadInitialItems=_didReadInitialItems;
@property(retain, nonatomic) SerialAsyncQueue *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(copy, nonatomic) NSArray *items; // @synthesize items=_items;
@property(nonatomic) __weak ASCollectionNode *collectionNode; // @synthesize collectionNode=_collectionNode;
- (id)deepCopySections:(id)arg1;
- (id)diffChangesWithNewItems:(id)arg1 oldItems:(id)arg2;
- (id)indexPathForDiffableItem:(id)arg1;
- (id)itemForIndexPath:(id)arg1;
- (void)reloadData;
- (void)setSections:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithTimeoutSeconds:(double)arg1;
- (id)init;

@end

