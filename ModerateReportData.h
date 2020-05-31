//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface ModerateReportData : NSObject
{
    NSArray *_modReports;
    NSArray *_userReports;
    NSString *_approvedBy;
    NSString *_removedBy;
    unsigned long long _reportsCount;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long reportsCount; // @synthesize reportsCount=_reportsCount;
@property(readonly, copy, nonatomic) NSString *removedBy; // @synthesize removedBy=_removedBy;
@property(readonly, copy, nonatomic) NSString *approvedBy; // @synthesize approvedBy=_approvedBy;
@property(readonly, copy, nonatomic) NSArray *userReports; // @synthesize userReports=_userReports;
@property(readonly, copy, nonatomic) NSArray *modReports; // @synthesize modReports=_modReports;
- (id)initWithModReports:(id)arg1 userReports:(id)arg2 approvedBy:(id)arg3 removedBy:(id)arg4 reportsCount:(unsigned long long)arg5;

@end

