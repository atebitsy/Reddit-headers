//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CaptureContent.h"

@class NSString, UIImage;

@interface CaptureContentTextEntry : CaptureContent
{
    _Bool _disableSmartDashesAndSmartQuotes;
    _Bool _secureTextEntry;
    _Bool _shouldShowErrorRightViewIcon;
    _Bool _shouldShowValidatedRightViewIcon;
    NSString *_descriptionText;
    NSString *_textInput;
    NSString *_subtitle;
    NSString *_placeholder;
    long long _keyboardType;
    long long _returnKeyType;
    long long _autocapitalizationType;
    long long _autocorrectionType;
    long long _clearButtonMode;
    long long _textAlignment;
    NSString *_textContentType;
    UIImage *_errorRightViewIcon;
    UIImage *_validatedRightViewIcon;
    UIImage *_accessoryRightViewIcon;
    CDUnknownBlockType _rightViewAction;
}

+ (id)keyPathsToObserveChanges;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType rightViewAction; // @synthesize rightViewAction=_rightViewAction;
@property(nonatomic) _Bool shouldShowValidatedRightViewIcon; // @synthesize shouldShowValidatedRightViewIcon=_shouldShowValidatedRightViewIcon;
@property(nonatomic) _Bool shouldShowErrorRightViewIcon; // @synthesize shouldShowErrorRightViewIcon=_shouldShowErrorRightViewIcon;
@property(retain, nonatomic) UIImage *accessoryRightViewIcon; // @synthesize accessoryRightViewIcon=_accessoryRightViewIcon;
@property(retain, nonatomic) UIImage *validatedRightViewIcon; // @synthesize validatedRightViewIcon=_validatedRightViewIcon;
@property(retain, nonatomic) UIImage *errorRightViewIcon; // @synthesize errorRightViewIcon=_errorRightViewIcon;
@property(retain, nonatomic) NSString *textContentType; // @synthesize textContentType=_textContentType;
@property(nonatomic) long long textAlignment; // @synthesize textAlignment=_textAlignment;
@property(nonatomic) long long clearButtonMode; // @synthesize clearButtonMode=_clearButtonMode;
@property(nonatomic) _Bool secureTextEntry; // @synthesize secureTextEntry=_secureTextEntry;
@property(nonatomic) _Bool disableSmartDashesAndSmartQuotes; // @synthesize disableSmartDashesAndSmartQuotes=_disableSmartDashesAndSmartQuotes;
@property(nonatomic) long long autocorrectionType; // @synthesize autocorrectionType=_autocorrectionType;
@property(nonatomic) long long autocapitalizationType; // @synthesize autocapitalizationType=_autocapitalizationType;
@property(nonatomic) long long returnKeyType; // @synthesize returnKeyType=_returnKeyType;
@property(nonatomic) long long keyboardType; // @synthesize keyboardType=_keyboardType;
@property(retain, nonatomic) NSString *placeholder; // @synthesize placeholder=_placeholder;
@property(retain, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(retain, nonatomic) NSString *textInput; // @synthesize textInput=_textInput;
@property(retain, nonatomic) NSString *descriptionText; // @synthesize descriptionText=_descriptionText;

@end

