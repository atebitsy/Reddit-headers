//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class IBGSurveyQuestion, NSArray, NSString;

@interface IBGSurveyQuestionViewModel : NSObject
{
    NSString *_identifier;
    NSString *_title;
    NSString *_details;
    NSArray *_answers;
    long long _type;
    NSArray *_features;
    long long _selectedOptionIndex;
    NSString *_customUpdateLink;
    IBGSurveyQuestion *_questionModel;
}

@property(retain, nonatomic) IBGSurveyQuestion *questionModel; // @synthesize questionModel=_questionModel;
@property(copy, nonatomic) NSString *customUpdateLink; // @synthesize customUpdateLink=_customUpdateLink;
@property(nonatomic) long long selectedOptionIndex; // @synthesize selectedOptionIndex=_selectedOptionIndex;
@property(retain, nonatomic) NSArray *features; // @synthesize features=_features;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSArray *answers; // @synthesize answers=_answers;
@property(retain, nonatomic) NSString *details; // @synthesize details=_details;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (_Bool)isPositiveAnswerSelected;
@property(copy, nonatomic) NSString *recordedAnswer;
- (id)init;
- (id)initWithSurveyQuestionType:(long long)arg1;
- (id)initWithSurveyQuestion:(id)arg1;

@end
