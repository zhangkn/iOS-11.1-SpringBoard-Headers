//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSSet, NSString, SBDashBoardLayoutStrategy, UIColor, _UILegibilitySettings;

@protocol SBDashBoardAppearanceProviding <NSObject>
@property(retain, nonatomic) SBDashBoardLayoutStrategy *layoutStrategy;
@property(readonly, nonatomic) UIColor *backgroundColor;
@property(readonly, nonatomic) _UILegibilitySettings *legibilitySettings;
@property(readonly, copy, nonatomic) NSSet *components;
@property(readonly, nonatomic) long long backgroundStyle;
@property(readonly, copy, nonatomic) NSString *appearanceIdentifier;
@end

