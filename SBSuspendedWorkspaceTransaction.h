//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBMainWorkspaceTransaction.h"

@class NSMapTable, NSMutableSet;

@interface SBSuspendedWorkspaceTransaction : SBMainWorkspaceTransaction
{
    NSMutableSet *_outstandingProcessLaunchTransactions;
    NSMapTable *_launchTransactionToSceneEntityMap;
    _Bool _anyLaunchFailed;
}

- (void).cxx_destruct;
- (void)_didComplete;
- (void)_childTransactionDidComplete:(id)arg1;
- (void)_begin;
- (void)_sendActivationResultWithSuccess:(_Bool)arg1;

@end

