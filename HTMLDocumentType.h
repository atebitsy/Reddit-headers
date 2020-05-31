//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HTMLKit/HTMLNode.h>

@class NSString;

@interface HTMLDocumentType : HTMLNode
{
    NSString *_publicIdentifier;
    NSString *_systemIdentifier;
}

- (void).cxx_destruct;
- (id)description;
- (id)outerHTML;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)length;
- (short)quirksMode;
- (_Bool)isValid;
@property(readonly, copy, nonatomic) NSString *systemIdentifier;
@property(readonly, copy, nonatomic) NSString *publicIdentifier;
- (id)initWithName:(id)arg1 publicIdentifier:(id)arg2 systemIdentifier:(id)arg3;
- (id)init;

@end
