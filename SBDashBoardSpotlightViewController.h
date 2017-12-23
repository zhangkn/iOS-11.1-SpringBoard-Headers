//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBDashBoardViewControllerBase.h"

#import "SBHomeGestureParticipantDelegate.h"
#import "SBSpotlightMultiplexingViewControllerDelegate.h"
#import "SBSystemGestureRecognizerDelegate.h"
#import "SBViewControllerTransitionContextDelegate.h"

@class NSString, SBHomeGesturePanGestureRecognizer, SBHomeGestureParticipant, SBSearchBackdropView, UIViewController<SBSpotlightInitiating>, _SBDashBoardSpotlightViewController;

@interface SBDashBoardSpotlightViewController : SBDashBoardViewControllerBase <SBHomeGestureParticipantDelegate, SBSpotlightMultiplexingViewControllerDelegate, SBSystemGestureRecognizerDelegate, SBViewControllerTransitionContextDelegate>
{
    SBSearchBackdropView *_backdropView;
    UIViewController<SBSpotlightInitiating> *_initiatingViewController;
    id <SBDashBoardSpotlightViewControllerDelegate> _spotlightViewControllerDelegate;
    _SBDashBoardSpotlightViewController *_spotlightViewController;
    SBHomeGesturePanGestureRecognizer *_bottomEdgeRecognizer;
    SBHomeGestureParticipant *_homeGestureParticipant;
}

@property(retain, nonatomic) SBHomeGestureParticipant *homeGestureParticipant; // @synthesize homeGestureParticipant=_homeGestureParticipant;
@property(retain, nonatomic) SBHomeGesturePanGestureRecognizer *bottomEdgeRecognizer; // @synthesize bottomEdgeRecognizer=_bottomEdgeRecognizer;
@property(retain, nonatomic) _SBDashBoardSpotlightViewController *spotlightViewController; // @synthesize spotlightViewController=_spotlightViewController;
@property(nonatomic) __weak id <SBDashBoardSpotlightViewControllerDelegate> spotlightViewControllerDelegate; // @synthesize spotlightViewControllerDelegate=_spotlightViewControllerDelegate;
@property(retain, nonatomic) UIViewController<SBSpotlightInitiating> *initiatingViewController; // @synthesize initiatingViewController=_initiatingViewController;
- (void).cxx_destruct;
- (_Bool)_shouldCancelInteractiveDismissGesture:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)viewForSystemGestureRecognizer:(id)arg1;
- (void)_handleBottomEdgeGestureEnded:(id)arg1;
- (void)_handleBottomEdgeGestureChanged:(id)arg1;
- (void)_handleBottomEdgeGestureBegan:(id)arg1;
- (void)_handleBottomEdgeGesture:(id)arg1;
- (void)_addOrRemoveGestureForCurrentSettings;
- (void)_relinquishHomeGestureOwnership;
- (void)_requestHomeGestureOwnership;
- (void)homeGestureParticipantOwningHomeGestureDidChange:(id)arg1;
- (id)_backdropViewSettingsForStyle;
- (unsigned long long)_searchBackdropLowQualityStyleForStyle;
- (unsigned long long)_spotlightDismissalReasonForCurrentTransitionFallBackReason:(unsigned long long)arg1;
- (_Bool)_shouldUseDarkTintForStyle;
- (_Bool)_initiallyTransitioningToSpotlight:(id)arg1;
- (_Bool)_transitioningIntoSpotlight:(id)arg1;
- (_Bool)_isTransitioning;
- (void)transitionDidFinish:(id)arg1;
- (void)transitionWillFinish:(id)arg1;
- (void)transitionDidReverse:(id)arg1;
- (void)transitionWillBegin:(id)arg1;
- (void)dismissSpotlightWithReason:(unsigned long long)arg1;
- (void)aggregateBehavior:(id)arg1;
- (void)performCustomTransitionToVisible:(_Bool)arg1 withAnimationSettings:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)shouldAutomaticallyForwardAppearanceMethods;
- (_Bool)wouldHandleButtonEvent:(id)arg1;
- (_Bool)handleEvent:(id)arg1;
- (id)displayLayoutElementIdentifier;
- (long long)presentationTransition;
- (long long)presentationType;
- (long long)presentationStyle;
- (_Bool)presentationCancelsTouches;
- (id)transitionContextToShowSpotlight:(_Bool)arg1 animated:(_Bool)arg2 interactive:(_Bool)arg3;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

