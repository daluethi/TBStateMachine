//
//  TBSMContainingNode.h
//  Pods
//
//  Created by Julian Krumow on 23.03.15.
//
//

#import <Foundation/Foundation.h>
#import "TBSMNode.h"

@class TBSMParallelState;

@protocol TBSMContainingNode <TBSMNode>

/**
 *  Enters a group of specified states inside a region.
 *
 *  @param sourceState The source state.
 *  @param targetState The target states inside the specified region.
 *  @param region      The target region.
 *  @param data        The payload data.
 */
- (void)enter:(TBSMState *)sourceState targetStates:(NSArray *)targetStates region:(TBSMParallelState *)region data:(NSDictionary *)data;

/**
 *  Receives a specified `TBSMEvent` instance.
 *
 *  @param event The given `TBSMEvent` instance.
 *
 *  @return `YES` if the event has been handled.
 */
- (BOOL)handleEvent:(TBSMEvent *)event;

@end
