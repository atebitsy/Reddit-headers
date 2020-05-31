//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Instabug/IBGNetworkRequest.h>

@class IBGFeatureCommentModel, NSString;
@protocol IBGFeatureAddCommentRequestDelegate;

@interface IBGFeatureAddCommentRequest : IBGNetworkRequest
{
    id <IBGFeatureAddCommentRequestDelegate> _delegate;
    IBGFeatureCommentModel *_comment;
    NSString *_email;
    NSString *_dataUrl;
}

@property(copy, nonatomic) NSString *dataUrl; // @synthesize dataUrl=_dataUrl;
@property(retain, nonatomic) NSString *email; // @synthesize email=_email;
@property(retain, nonatomic) IBGFeatureCommentModel *comment; // @synthesize comment=_comment;
@property(nonatomic) __weak id <IBGFeatureAddCommentRequestDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)updateDictionary:(id)arg1 withCommentStatus:(unsigned long long)arg2;
- (id)getParameters;
- (void)networkDone:(id)arg1 URLSessionDataTask:(id)arg2 response:(id)arg3 error:(id)arg4 responseDictionary:(id)arg5;
- (id)requestCreator;
- (void)setCommentStatus:(unsigned long long)arg1;
- (id)initWithDelegate:(id)arg1 comment:(id)arg2 email:(id)arg3;

@end
