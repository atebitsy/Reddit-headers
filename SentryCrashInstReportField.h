//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableData, NSString, SentryCrashCString;

@interface SentryCrashInstReportField : NSObject
{
    int _index;
    NSString *_key;
    id _value;
    NSMutableData *_fieldBacking;
    SentryCrashCString *_keyBacking;
    SentryCrashCString *_valueBacking;
}

+ (id)fieldWithIndex:(int)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) SentryCrashCString *valueBacking; // @synthesize valueBacking=_valueBacking;
@property(retain, nonatomic) SentryCrashCString *keyBacking; // @synthesize keyBacking=_keyBacking;
@property(retain, nonatomic) NSMutableData *fieldBacking; // @synthesize fieldBacking=_fieldBacking;
@property(retain, nonatomic) id value; // @synthesize value=_value;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
@property(readonly, nonatomic) int index; // @synthesize index=_index;
@property(readonly, nonatomic) CDStruct_91a0c811 *field;
- (id)initWithIndex:(int)arg1;

@end

