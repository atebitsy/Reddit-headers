//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UITextView;

@interface IBGMetadataDetailView : UIView
{
    NSString *_details;
    UITextView *_detailsTextView;
}

@property(retain, nonatomic) UITextView *detailsTextView; // @synthesize detailsTextView=_detailsTextView;
@property(copy, nonatomic) NSString *details; // @synthesize details=_details;
- (void).cxx_destruct;
- (void)updateConstraints;
- (void)applyTheme;
- (id)initWithDetailsString:(id)arg1;

@end
