//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface ASTraitCollection : NSObject
{
    long long _horizontalSizeClass;
    long long _verticalSizeClass;
    double _displayScale;
    long long _displayGamut;
    long long _userInterfaceIdiom;
    long long _forceTouchCapability;
    long long _layoutDirection;
    NSString *_preferredContentSizeCategory;
    struct CGSize _containerSize;
}

+ (id)traitCollectionWithUITraitCollection:(id)arg1 containerSize:(struct CGSize)arg2 fallbackContentSizeCategory:(id)arg3;
+ (id)traitCollectionWithUITraitCollection:(id)arg1 containerSize:(struct CGSize)arg2;
+ (id)traitCollectionWithHorizontalSizeClass:(long long)arg1 verticalSizeClass:(long long)arg2 displayScale:(double)arg3 displayGamut:(long long)arg4 userInterfaceIdiom:(long long)arg5 forceTouchCapability:(long long)arg6 layoutDirection:(long long)arg7 preferredContentSizeCategory:(id)arg8 containerSize:(struct CGSize)arg9;
+ (id)traitCollectionWithASPrimitiveTraitCollection:(struct ASPrimitiveTraitCollection)arg1;
+ (id)traitCollectionWithDisplayScale:(double)arg1 userInterfaceIdiom:(long long)arg2 horizontalSizeClass:(long long)arg3 verticalSizeClass:(long long)arg4 forceTouchCapability:(long long)arg5 containerSize:(struct CGSize)arg6;
- (void).cxx_destruct;
@property(readonly, nonatomic) struct CGSize containerSize; // @synthesize containerSize=_containerSize;
@property(readonly, nonatomic) NSString *preferredContentSizeCategory; // @synthesize preferredContentSizeCategory=_preferredContentSizeCategory;
@property(readonly, nonatomic) long long layoutDirection; // @synthesize layoutDirection=_layoutDirection;
@property(readonly, nonatomic) long long forceTouchCapability; // @synthesize forceTouchCapability=_forceTouchCapability;
@property(readonly, nonatomic) long long userInterfaceIdiom; // @synthesize userInterfaceIdiom=_userInterfaceIdiom;
@property(readonly, nonatomic) long long displayGamut; // @synthesize displayGamut=_displayGamut;
@property(readonly, nonatomic) double displayScale; // @synthesize displayScale=_displayScale;
@property(readonly, nonatomic) long long verticalSizeClass; // @synthesize verticalSizeClass=_verticalSizeClass;
@property(readonly, nonatomic) long long horizontalSizeClass; // @synthesize horizontalSizeClass=_horizontalSizeClass;
- (_Bool)isEqualToTraitCollection:(id)arg1;
- (id)initWithHorizontalSizeClass:(long long)arg1 verticalSizeClass:(long long)arg2 displayScale:(double)arg3 displayGamut:(long long)arg4 userInterfaceIdiom:(long long)arg5 forceTouchCapability:(long long)arg6 layoutDirection:(long long)arg7 preferredContentSizeCategory:(id)arg8 containerSize:(struct CGSize)arg9;
- (struct ASPrimitiveTraitCollection)primitiveTraitCollection;
- (id)init;

@end

