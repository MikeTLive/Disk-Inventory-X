//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSImageView.h"

@class NTFileDesc, NTIconFamily;

@interface NTCustomIconView : NSImageView
{
    NTIconFamily *_iconFamily;
    NTFileDesc *_desc;
}

- (void)dealloc;
- (void)setDesc:(id)arg1;
- (void)drawRect:(struct _NSRect)arg1;
- (void)copy:(id)arg1;
- (void)cut:(id)arg1;
- (void)clear:(id)arg1;
- (void)paste:(id)arg1;

@end

