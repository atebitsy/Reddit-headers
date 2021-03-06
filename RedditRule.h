//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, NSURL;

@interface RedditRule : NSObject
{
    _Bool _requestCrisisSupport;
    _Bool _shouldFileComplaint;
    NSString *_reasonTextToShow;
    NSString *_reasonText;
    NSString *_nextStepHeader;
    NSArray *_nextStepReasons;
    NSString *_complaintPromptTitle;
    NSString *_complaintPrompt;
    NSString *_complaintButtonText;
    NSURL *_complaintURL;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSURL *complaintURL; // @synthesize complaintURL=_complaintURL;
@property(readonly, nonatomic) NSString *complaintButtonText; // @synthesize complaintButtonText=_complaintButtonText;
@property(readonly, nonatomic) NSString *complaintPrompt; // @synthesize complaintPrompt=_complaintPrompt;
@property(readonly, nonatomic) NSString *complaintPromptTitle; // @synthesize complaintPromptTitle=_complaintPromptTitle;
@property(nonatomic) _Bool shouldFileComplaint; // @synthesize shouldFileComplaint=_shouldFileComplaint;
@property(readonly, nonatomic) _Bool requestCrisisSupport; // @synthesize requestCrisisSupport=_requestCrisisSupport;
@property(retain, nonatomic) NSArray *nextStepReasons; // @synthesize nextStepReasons=_nextStepReasons;
@property(retain, nonatomic) NSString *nextStepHeader; // @synthesize nextStepHeader=_nextStepHeader;
@property(retain, nonatomic) NSString *reasonText; // @synthesize reasonText=_reasonText;
@property(retain, nonatomic) NSString *reasonTextToShow; // @synthesize reasonTextToShow=_reasonTextToShow;
@property(readonly, nonatomic) _Bool hasNextSteps;
- (id)complaintURLForReportable:(id)arg1;
- (id)initWithData:(id)arg1;

@end

