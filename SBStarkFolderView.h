//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBFolderView.h"

@class UIButton;

@interface SBStarkFolderView : SBFolderView
{
    _Bool _buttonUXEnabled;
    UIButton *_scrollLeftButton;
    UIButton *_scrollRightButton;
    struct CGSize _scrollButtonSize;
    struct UIEdgeInsets _listViewInsets;
    struct UIEdgeInsets _statusBarInsets;
}

- (void).cxx_destruct;
- (void)_scrollButtonPressed:(id)arg1;
- (void)_updateScrollButtonStatesForIndex:(long long)arg1;
- (void)_evaluateScrollingForListViewsIfNecessary;
- (_Bool)shouldInstallFocusGuides;
- (double)_listViewSideInsetForBounds:(struct CGRect)arg1;
- (void)_updatePageControlToIndex:(long long)arg1;
- (void)_updateIconListFrames;
- (void)updateIconListViews;
- (void)resetIconListViews;
- (void)_layoutSubviews;
- (double)_offsetToCenterPageControlInSpaceForPageControl;
- (id)_newPageControl;
- (void)setInteractionAffordances:(unsigned long long)arg1;
- (id)initWithFolder:(id)arg1 orientation:(long long)arg2 viewMap:(id)arg3 context:(id)arg4;
- (id)initWithFolder:(id)arg1 orientation:(long long)arg2 viewMap:(id)arg3;

@end

