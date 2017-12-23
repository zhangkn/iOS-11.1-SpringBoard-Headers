//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SBAppStatusBarSettingsAssertion, SBFLockScreenDateView, UIView, UIViewController<SBScreenWakeAnimationTarget>;

@interface SBScreenWakeAnimationController : NSObject
{
    SBFLockScreenDateView *_fakeWakeAnimationDateView;
    double _originalDateLeftEdge;
    double _originalDateBottomEdge;
    double _finalTimeAlpha;
    double _finalDateAlpha;
    double _finalStatusBarAlpha;
    id <SBScreenWakeAnimationControllerDelegate> _delegate;
    UIViewController<SBScreenWakeAnimationTarget> *_target;
    UIView *_realDateView;
    _Bool _preparingToAnimateWake;
    _Bool _animatingForWake;
    _Bool _animatingForSleep;
    _Bool _insideWakeCompletionBlock;
    _Bool _insideSleepCompletionBlock;
    int _animationToken;
    CDUnknownBlockType _wakeCompletionBlock;
    CDUnknownBlockType _sleepCompletionBlock;
    _Bool _animatingDateTime;
    _Bool _animatingWallpaper;
    _Bool _animatingContent;
    _Bool _animatingBacklight;
    _Bool _ignoringInteractionEvents;
    long long _lastBacklightChangeSource;
    SBAppStatusBarSettingsAssertion *_statusBarAssertion;
}

+ (double)_animationSpeedForBacklightChangeSource:(long long)arg1 isWake:(_Bool)arg2;
+ (double)backlightFadeDurationForSource:(long long)arg1 isWake:(_Bool)arg2;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (id)description;
- (void)_setDateViewAlpha:(double)arg1;
- (void)_runCompletionHandlerForWake:(_Bool)arg1;
- (void)_handleAnimationCompletionIfNecessaryForWaking:(_Bool)arg1;
- (void)sleepForSource:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)sleepForSource:(long long)arg1 target:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_startWakeAnimationsForWaking:(_Bool)arg1 animationSettings:(id)arg2;
- (void)_setLastBacklightChangeSource:(long long)arg1;
- (void)_cleanupAnimationWhenInterruptingWaking:(_Bool)arg1;
- (void)_assistantVisibilityChanged;
- (void)_startWakeIfNecessary;
- (void)prepareToWakeForSource:(long long)arg1 timeAlpha:(double)arg2 dateAlpha:(double)arg3 statusBarAlpha:(double)arg4 delegate:(id)arg5 target:(id)arg6 completion:(CDUnknownBlockType)arg7;
- (void)_stopIgnoringInteractionEventsIfNeeded;
- (_Bool)interruptSleepAnimationIfNeeded;
- (void)_setFakeAnimationDateView:(id)arg1;
- (id)_animationSettingsForBacklightChangeSource:(long long)arg1 isWake:(_Bool)arg2;
- (void)_setRelevantLockScreenViewsHidden:(_Bool)arg1;
- (void)updateDateFrameHorizontalOffset:(double)arg1 verticalOffset:(double)arg2;
- (_Bool)isSleepAnimationInProgress;
- (_Bool)isWakeAnimationInProgressForSource:(long long)arg1;
- (_Bool)isWakeAnimationInProgress;
- (void)dealloc;
- (id)init;

@end

