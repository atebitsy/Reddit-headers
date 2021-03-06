//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AsyncDisplayKit/ASDisplayNode.h>

#import "AttributedLabelMediaDelegate-Protocol.h"
#import "RichTextTextNodeDelegate-Protocol.h"

@class NSArray, NSAttributedString, NSMapTable, NSString, RichTextNodeOptions, SubredditMentionsHandler;
@protocol RichTextDisplayNodeDelegate, ViewContext;

@interface RichTextDisplayNode : ASDisplayNode <AttributedLabelMediaDelegate, RichTextTextNodeDelegate>
{
    NSAttributedString *_attributedText;
    unsigned long long _justifyContent;
    id <RichTextDisplayNodeDelegate> _delegate;
    id <ViewContext> _viewContext;
    NSArray *_displayNodes;
    NSMapTable *_mediaNodes;
    SubredditMentionsHandler *_subredditMentionsHandler;
    RichTextNodeOptions *_richTextNodeOptions;
}

- (void).cxx_destruct;
@property(retain, nonatomic) RichTextNodeOptions *richTextNodeOptions; // @synthesize richTextNodeOptions=_richTextNodeOptions;
@property(readonly, nonatomic) SubredditMentionsHandler *subredditMentionsHandler; // @synthesize subredditMentionsHandler=_subredditMentionsHandler;
@property(retain, nonatomic) NSMapTable *mediaNodes; // @synthesize mediaNodes=_mediaNodes;
@property(copy, nonatomic) NSArray *displayNodes; // @synthesize displayNodes=_displayNodes;
@property(readonly, nonatomic) id <ViewContext> viewContext; // @synthesize viewContext=_viewContext;
@property(nonatomic) __weak id <RichTextDisplayNodeDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long justifyContent; // @synthesize justifyContent=_justifyContent;
@property(copy, nonatomic) NSAttributedString *attributedText; // @synthesize attributedText=_attributedText;
- (void)resetNodesWithNewMediaNodes:(id)arg1 newDisplayNodes:(id)arg2;
- (void)attributedLabelDidTapMediaView:(id)arg1 didTapRichTextMedia:(id)arg2;
- (void)richTextTextNode:(id)arg1 didTapSpoiler:(id)arg2 atPoint:(struct CGPoint)arg3;
- (void)richTextTextNode:(id)arg1 didTapURL:(id)arg2 atPoint:(struct CGPoint)arg3 atRange:(struct _NSRange)arg4;
- (id)layoutSpecThatFits:(CDStruct_90e057aa)arg1;
- (void)configureDisplayNodes;
- (void)updateWithEnhancedAttributedString:(id)arg1;
- (id)initWithViewContext:(id)arg1 options:(id)arg2 subredditMentionsHandler:(id)arg3;
@property(readonly, nonatomic) _Bool isLinkSelected;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

