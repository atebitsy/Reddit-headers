//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RedditUI/BaseView.h>

@class UIColor, UIImage;

@interface RoundedImageView : BaseView
{
    _Bool _cropCircle;
    UIImage *_image;
    long long _iconShape;
    UIColor *_circleFillColor;
    struct UIEdgeInsets _imageInsets;
}

- (void).cxx_destruct;
@property(nonatomic) struct UIEdgeInsets imageInsets; // @synthesize imageInsets=_imageInsets;
@property(retain, nonatomic) UIColor *circleFillColor; // @synthesize circleFillColor=_circleFillColor;
@property(nonatomic) _Bool cropCircle; // @synthesize cropCircle=_cropCircle;
@property(nonatomic) long long iconShape; // @synthesize iconShape=_iconShape;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (struct CGSize)intrinsicContentSize;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

