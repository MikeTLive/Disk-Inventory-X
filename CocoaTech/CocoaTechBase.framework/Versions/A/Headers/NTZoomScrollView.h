//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSScrollView.h"

@class NSPopUpButton, NSString, NTPrefsBoxMgr;

@interface NTZoomScrollView : NSScrollView
{
    int _scaleValue;
    NSPopUpButton *_scalePopUpButton;
    NTPrefsBoxMgr *_prefsBoxMgr;
    NSString *_prefsBoxName;
}

- (id)initWithFrame:(struct _NSRect)arg1;
- (id)initWithFrame:(struct _NSRect)arg1 saveName:(id)arg2;
- (void)dealloc;
- (int)scaleValue;
- (void)setScaleValue:(int)arg1;
- (void)setScaleValue:(int)arg1 saveAsDefault:(BOOL)arg2;
- (void)zoomIn;
- (void)zoomOut;

@end

