//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SBLockScreenActionContext : NSObject
{
    NSString *_lockLabel;
    NSString *_shortLockLabel;
    NSString *_unlockDestination;
    CDUnknownBlockType _action;
    NSString *_identifier;
    double _fontSize;
    _Bool _requiresUIUnlock;
    _Bool _deactivateAwayController;
    _Bool _canBypassPinLock;
    _Bool _wantsBiometricPresentation;
    int _source;
    int _intent;
    _Bool _requiresAuthentication;
}

@property(nonatomic) _Bool requiresAuthentication; // @synthesize requiresAuthentication=_requiresAuthentication;
@property(nonatomic) _Bool wantsBiometricPresentation; // @synthesize wantsBiometricPresentation=_wantsBiometricPresentation;
@property(nonatomic) _Bool canBypassPinLock; // @synthesize canBypassPinLock=_canBypassPinLock;
@property(nonatomic) _Bool deactivateAwayController; // @synthesize deactivateAwayController=_deactivateAwayController;
@property(nonatomic) _Bool requiresUIUnlock; // @synthesize requiresUIUnlock=_requiresUIUnlock;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) CDUnknownBlockType action; // @synthesize action=_action;
@property(nonatomic) int intent; // @synthesize intent=_intent;
@property(nonatomic) int source; // @synthesize source=_source;
@property(copy, nonatomic) NSString *unlockDestination; // @synthesize unlockDestination=_unlockDestination;
@property(retain, nonatomic) NSString *shortLockLabel; // @synthesize shortLockLabel=_shortLockLabel;
@property(retain, nonatomic) NSString *lockLabel; // @synthesize lockLabel=_lockLabel;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool hasCustomUnlockLabel;
- (id)initWithLockLabel:(id)arg1 shortLockLabel:(id)arg2 action:(CDUnknownBlockType)arg3 identifier:(id)arg4;

@end

