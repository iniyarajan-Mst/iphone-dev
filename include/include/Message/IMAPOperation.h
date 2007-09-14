/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSString;

@interface IMAPOperation : NSObject
{
    unsigned int _type:8;
    unsigned int _temporaryUids:1;
    NSString *_mailboxName;
    union {
        struct {
            NSArray *trueFlags;
            NSArray *falseFlags;
            struct __CFArray *uids;
        } store;
        struct {
            unsigned int uid;
            NSArray *flags;
            int internalDate;
            unsigned int size;
        } append;
        struct {
            struct __CFArray *srcUids;
            struct __CFArray *dstUids;
            NSString *destinationMailbox;
        } copy;
    } _opSpecific;
}

+ (id)deserializeFromData:(id)fp8 cursor:(unsigned int *)fp12;	// IMP=0x30b50543
- (void)_deserializeOpSpecificValuesFromData:(id)fp8 cursor:(unsigned int *)fp12;	// IMP=0x30b4f11d
- (unsigned char)_magic;	// IMP=0x30b4f119
- (BOOL)actsOnTemporaryUid:(unsigned int)fp8;	// IMP=0x30b504f9
- (unsigned int)approximateSize;	// IMP=0x30b4f555
- (void)dealloc;	// IMP=0x30b4f415
- (id)description;	// IMP=0x30b4fc1d
- (id)destinationMailbox;	// IMP=0x30b4fa6d
- (id)destinationUids;	// IMP=0x30b4f9d9
- (void)expungeTemporaryUid:(unsigned int)fp8;	// IMP=0x30b5042d
- (unsigned int)firstTemporaryUid;	// IMP=0x30b4f4ed
- (id)flags;	// IMP=0x30b4f771
- (id)flagsToClear;	// IMP=0x30b4f64d
- (id)flagsToSet;	// IMP=0x30b4f5bb
- (BOOL)getMessageId:(id *)fp8 andInternalDate:(id *)fp12 forDestinationUid:(unsigned int)fp16;	// IMP=0x30b4fafd
- (id)initWithAppendedUid:(unsigned int)fp8 approximateSize:(unsigned int)fp12 flags:(id)fp16 internalDate:(id)fp20 mailbox:(id)fp24;	// IMP=0x30b4f3b1
- (id)initWithFlagsToSet:(id)fp8 flagsToClear:(id)fp12 forUids:(id)fp16 inMailbox:(id)fp20;	// IMP=0x30b4f2cd
- (id)initWithMailboxToCreate:(id)fp8;	// IMP=0x30b4f265
- (id)initWithMailboxToDelete:(id)fp8;	// IMP=0x30b4f299
- (id)initWithUidsToCopy:(id)fp8 fromMailbox:(id)fp12 toMailbox:(id)fp16 firstNewUid:(unsigned int)fp20;	// IMP=0x30b4f329
- (id)internalDate;	// IMP=0x30b4f801
- (BOOL)isSourceOfTemporaryUid:(unsigned int)fp8;	// IMP=0x30b4f499
- (unsigned int)lastTemporaryUid;	// IMP=0x30b4f51d
- (id)mailboxName;	// IMP=0x30b4f551
- (int)operationType;	// IMP=0x30b4f54d
- (void)serializeIntoData:(id)fp8;	// IMP=0x30b4f1a7
- (void)setMessageId:(id)fp8 andInternalDate:(id)fp12 forMessageWithSourceUid:(unsigned int)fp16;	// IMP=0x30b4fb8d
- (void)setUsesRealUids:(BOOL)fp8;	// IMP=0x30b4f59f
- (unsigned int)sourceUidForTemporaryUid:(unsigned int)fp8;	// IMP=0x30b503ed
- (id)sourceUids;	// IMP=0x30b4f945
- (unsigned int)uid;	// IMP=0x30b4f8b5
- (id)uids;	// IMP=0x30b4f6dd
- (BOOL)usesRealUids;	// IMP=0x30b4f593

@end
