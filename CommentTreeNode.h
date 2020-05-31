//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <RedditCore/NSCopying-Protocol.h>

@class Comment, NSString;

@interface CommentTreeNode : NSObject <NSCopying>
{
    _Bool _isLoadMorePlaceholder;
    _Bool _isTopLevelComment;
    _Bool _isCollapsed;
    _Bool _isDeleted;
    CommentTreeNode *_parent;
    Comment *_comment;
    long long _depth;
    NSString *_loadMoreCursor;
    long long _childCount;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isDeleted; // @synthesize isDeleted=_isDeleted;
@property(nonatomic) _Bool isCollapsed; // @synthesize isCollapsed=_isCollapsed;
@property(nonatomic) _Bool isTopLevelComment; // @synthesize isTopLevelComment=_isTopLevelComment;
@property(nonatomic) long long childCount; // @synthesize childCount=_childCount;
@property(copy, nonatomic) NSString *loadMoreCursor; // @synthesize loadMoreCursor=_loadMoreCursor;
@property(nonatomic) _Bool isLoadMorePlaceholder; // @synthesize isLoadMorePlaceholder=_isLoadMorePlaceholder;
@property(nonatomic) long long depth; // @synthesize depth=_depth;
@property(retain, nonatomic) Comment *comment; // @synthesize comment=_comment;
@property(retain, nonatomic) CommentTreeNode *parent; // @synthesize parent=_parent;
- (id)debugDescription;
@property(readonly, nonatomic) CommentTreeNode *root;
@property(readonly, nonatomic) _Bool isContinueThreadPlaceholder;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

