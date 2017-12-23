//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIGestureRecognizerTransformAnalyzerInfo;

@interface UIGestureRecognizerTransformAnalyzer : NSObject
{
    UIGestureRecognizerTransformAnalyzerInfo *_smoothedInfo;
    double _translationWeight;
    double _pinchingWeight;
    double _rotationWeight;
    int _dominantComponent;
}

@property(readonly, nonatomic) UIGestureRecognizerTransformAnalyzerInfo *smoothedInfo; // @synthesize smoothedInfo=_smoothedInfo;
@property(readonly, nonatomic) int dominantComponent; // @synthesize dominantComponent=_dominantComponent;
@property(nonatomic) double rotationWeight; // @synthesize rotationWeight=_rotationWeight;
@property(nonatomic) double pinchingWeight; // @synthesize pinchingWeight=_pinchingWeight;
@property(nonatomic) double translationWeight; // @synthesize translationWeight=_translationWeight;
- (void).cxx_destruct;
- (id)analyzeTouches:(id)arg1;
- (void)reset;
- (id)init;

@end

