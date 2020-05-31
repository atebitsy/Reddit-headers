//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL, UIColor;

@interface StructuredStyle : NSObject
{
    _Bool _shouldShowCustomPostVoteIcons;
    _Bool _shouldTileBannerImage;
    NSURL *_communityIconURL;
    NSURL *_bannerBackgroundImageURL;
    NSURL *_mobileBannerBackgroundImageURL;
    NSURL *_postDownvoteIconInactiveURL;
    NSURL *_postUpvoteIconInactiveURL;
    NSURL *_postDownvoteIconActiveURL;
    NSURL *_postUpvoteIconActiveURL;
    NSURL *_postPlaceholderImageURL;
    UIColor *_styledPrimaryColor;
    UIColor *_styledSecondaryColor;
    UIColor *_bannerBackgroundColor;
    UIColor *_postUpvoteCountColor;
    UIColor *_postDownvoteCountColor;
}

@property(nonatomic) _Bool shouldTileBannerImage; // @synthesize shouldTileBannerImage=_shouldTileBannerImage;
@property(nonatomic) _Bool shouldShowCustomPostVoteIcons; // @synthesize shouldShowCustomPostVoteIcons=_shouldShowCustomPostVoteIcons;
@property(retain, nonatomic) UIColor *postDownvoteCountColor; // @synthesize postDownvoteCountColor=_postDownvoteCountColor;
@property(retain, nonatomic) UIColor *postUpvoteCountColor; // @synthesize postUpvoteCountColor=_postUpvoteCountColor;
@property(retain, nonatomic) UIColor *bannerBackgroundColor; // @synthesize bannerBackgroundColor=_bannerBackgroundColor;
@property(retain, nonatomic) UIColor *styledSecondaryColor; // @synthesize styledSecondaryColor=_styledSecondaryColor;
@property(retain, nonatomic) UIColor *styledPrimaryColor; // @synthesize styledPrimaryColor=_styledPrimaryColor;
@property(retain, nonatomic) NSURL *postPlaceholderImageURL; // @synthesize postPlaceholderImageURL=_postPlaceholderImageURL;
@property(retain, nonatomic) NSURL *postUpvoteIconActiveURL; // @synthesize postUpvoteIconActiveURL=_postUpvoteIconActiveURL;
@property(retain, nonatomic) NSURL *postDownvoteIconActiveURL; // @synthesize postDownvoteIconActiveURL=_postDownvoteIconActiveURL;
@property(retain, nonatomic) NSURL *postUpvoteIconInactiveURL; // @synthesize postUpvoteIconInactiveURL=_postUpvoteIconInactiveURL;
@property(retain, nonatomic) NSURL *postDownvoteIconInactiveURL; // @synthesize postDownvoteIconInactiveURL=_postDownvoteIconInactiveURL;
@property(retain, nonatomic) NSURL *mobileBannerBackgroundImageURL; // @synthesize mobileBannerBackgroundImageURL=_mobileBannerBackgroundImageURL;
@property(retain, nonatomic) NSURL *bannerBackgroundImageURL; // @synthesize bannerBackgroundImageURL=_bannerBackgroundImageURL;
@property(retain, nonatomic) NSURL *communityIconURL; // @synthesize communityIconURL=_communityIconURL;
- (void).cxx_destruct;
- (id)initWithData:(id)arg1;

@end
