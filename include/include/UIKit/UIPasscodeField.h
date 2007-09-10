/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import <UIKit/UIView.h>

@class NSMutableArray, NSMutableString, UIPushButton;

@interface UIPasscodeField : UIView
{
    NSMutableString *_value;
    NSMutableArray *_entryFields;
    NSMutableArray *_entryBackgrounds;
    UIPushButton *_okButton;
    BOOL _opaqueBackground;
    BOOL _centerHorizontally;
    id _delegate;
}

+ (float)defaultHeight;	// IMP=0x324ac7f4
- (void)_textDidChange;	// IMP=0x324ad2b0
- (void)_updateFields;	// IMP=0x324ac9c4
- (void)appendString:(id)fp8;	// IMP=0x324ad0fc
- (unsigned int)becomeFirstResponder;	// IMP=0x324ad250
- (BOOL)canBecomeFirstResponder;	// IMP=0x324ad224
- (void)dealloc;	// IMP=0x324ac914
- (void)deleteLastCharacter;	// IMP=0x324ad510
- (id)hitTest:(struct CGPoint)fp8 forEvent:(struct __GSEvent *)fp16;	// IMP=0x324ad4b8
- (id)initWithFrame:(struct CGRect)fp8;	// IMP=0x324ac834
- (int)numberOfEntryFields;	// IMP=0x324ad1e4
- (void)okButtonClicked:(id)fp8;	// IMP=0x324ad46c
- (void)setDelegate:(id)fp8;	// IMP=0x324ad2a8
- (void)setNumberOfEntryFields:(int)fp8;	// IMP=0x324ad204
- (void)setNumberOfEntryFields:(int)fp8 opaqueBackground:(BOOL)fp12;	// IMP=0x324ad574
- (void)setShowsOKButton:(BOOL)fp8;	// IMP=0x324acc18
- (void)setStringValue:(id)fp8;	// IMP=0x324ad02c
- (void)setTextCentersHorizontally:(BOOL)fp8;	// IMP=0x324acfa0
- (BOOL)showsOKButton;	// IMP=0x324acc08
- (id)stringValue;	// IMP=0x324acffc
- (BOOL)textField:(id)fp8 shouldInsertText:(id)fp12 replacingRange:(struct _NSRange)fp16;	// IMP=0x324ad368
- (void)textFieldDidResignFirstResponder:(id)fp8;	// IMP=0x324ad410
- (BOOL)textFieldShouldStartEditing:(id)fp8;	// IMP=0x324ad3c8

@end
