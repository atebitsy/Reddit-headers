//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HTMLKit/HTMLNode.h>

@class HTMLDocumentType, HTMLElement, NSHashTable;

@interface HTMLDocument : HTMLNode
{
    HTMLDocument *_inertTemplateDocument;
    NSHashTable *_nodeIterators;
    NSHashTable *_ranges;
    short _quirksMode;
    short _readyState;
    HTMLDocumentType *_documentType;
}

+ (id)documentWithString:(id)arg1;
@property(nonatomic) short readyState; // @synthesize readyState=_readyState;
@property(nonatomic) short quirksMode; // @synthesize quirksMode=_quirksMode;
@property(retain, nonatomic) HTMLDocumentType *documentType; // @synthesize documentType=_documentType;
- (void).cxx_destruct;
- (id)debugQuickLookObject;
- (id)associatedInertTemplateDocument;
- (id)adoptNode:(id)arg1;
- (void)runRemovingStepsForNode:(id)arg1 withOldParent:(id)arg2 andOldPreviousSibling:(id)arg3;
- (void)clampRangesAfterSplittingTextNode:(id)arg1 atOffset:(unsigned long long)arg2;
- (void)didInsertNewTextNode:(id)arg1 intoParent:(id)arg2 afterSplittingTextNode:(id)arg3 atOffset:(unsigned long long)arg4;
- (void)didAddCharacterDataToNode:(id)arg1 atOffset:(unsigned long long)arg2 withLength:(unsigned long long)arg3;
- (void)didRemoveCharacterDataInNode:(id)arg1 atOffset:(unsigned long long)arg2 withLength:(unsigned long long)arg3;
- (void)detachRange:(id)arg1;
- (void)attachRange:(id)arg1;
- (void)detachNodeIterator:(id)arg1;
- (void)attachNodeIterator:(id)arg1;
@property(retain, nonatomic) HTMLElement *body;
@property(retain, nonatomic) HTMLElement *head;
@property(retain, nonatomic) HTMLElement *documentElement;
@property(retain, nonatomic) HTMLElement *rootElement;
- (void)setOwnerDocument:(id)arg1;
- (id)init;

@end
