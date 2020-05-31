//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AsyncDisplayKit/ASDescriptionProvider-Protocol.h>

@class ASRectMap, NSArray, NSMutableArray;
@protocol ASLayoutElement;

@interface ASLayout : NSObject <ASDescriptionProvider>
{
    unsigned long long _layoutElementType;
    _Bool _retainSublayoutLayoutElements;
    id <ASLayoutElement> _layoutElement;
    NSArray *_sublayouts;
    NSMutableArray *_sublayoutLayoutElements;
    ASRectMap *_elementToRectMap;
    struct CGSize _size;
    struct CGPoint _position;
}

+ (id)layoutWithLayoutElement:(id)arg1 size:(struct CGSize)arg2;
+ (id)layoutWithLayoutElement:(id)arg1 size:(struct CGSize)arg2 sublayouts:(id)arg3;
+ (id)layoutWithLayoutElement:(id)arg1 size:(struct CGSize)arg2 position:(struct CGPoint)arg3 sublayouts:(id)arg4;
+ (_Bool)shouldRetainSublayoutLayoutElements;
+ (void)setShouldRetainSublayoutLayoutElements:(_Bool)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) ASRectMap *elementToRectMap; // @synthesize elementToRectMap=_elementToRectMap;
@property(retain, nonatomic) NSMutableArray *sublayoutLayoutElements; // @synthesize sublayoutLayoutElements=_sublayoutLayoutElements;
@property(nonatomic) _Bool retainSublayoutLayoutElements; // @synthesize retainSublayoutLayoutElements=_retainSublayoutLayoutElements;
@property(readonly, copy, nonatomic) NSArray *sublayouts; // @synthesize sublayouts=_sublayouts;
@property(nonatomic) struct CGPoint position; // @synthesize position=_position;
@property(readonly, nonatomic) struct CGSize size; // @synthesize size=_size;
@property(readonly, nonatomic) __weak id <ASLayoutElement> layoutElement; // @synthesize layoutElement=_layoutElement;
- (id)_recursiveDescriptionForLayout:(id)arg1 level:(unsigned long long)arg2;
- (id)recursiveDescription;
- (id)description;
- (id)propertiesForDescription;
@property(readonly, nonatomic) struct CGRect frame; // @dynamic frame;
- (struct CGRect)frameForElement:(id)arg1;
@property(readonly, nonatomic) unsigned long long type; // @dynamic type;
- (_Bool)isEqual:(id)arg1;
- (id)filteredNodeLayoutTree;
- (id)init;
- (id)initWithLayoutElement:(id)arg1 size:(struct CGSize)arg2 position:(struct CGPoint)arg3 sublayouts:(id)arg4;

@end

