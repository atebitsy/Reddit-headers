//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AsyncDisplayKit/ASInterfaceStateDelegate-Protocol.h>

@class ASDisplayNode, NSString;

@interface ASNodeController : NSObject <ASInterfaceStateDelegate>
{
    ASDisplayNode *_strongNode;
    ASDisplayNode *_weakNode;
    _Bool _shouldInvertStrongReference;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool shouldInvertStrongReference; // @synthesize shouldInvertStrongReference=_shouldInvertStrongReference;
- (void)interfaceStateDidChange:(unsigned long long)arg1 fromState:(unsigned long long)arg2;
- (void)didExitPreloadState;
- (void)didEnterPreloadState;
- (void)didExitDisplayState;
- (void)didEnterDisplayState;
- (void)didExitVisibleState;
- (void)didEnterVisibleState;
- (void)nodeDidLayout;
- (void)nodeDidLoad;
@property(retain, nonatomic) ASDisplayNode *node;
- (void)setupReferencesWithNode:(id)arg1;
- (void)loadNode;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

