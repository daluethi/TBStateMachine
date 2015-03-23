//
//  TBSMSubState.h
//  TBStateMachine
//
//  Created by Julian Krumow on 19.09.14.
//  Copyright (c) 2014 Julian Krumow. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TBSMState.h"

@class TBSMStateMachine;

/**
 *  This class allows the create nested states.
 */
@interface TBSMSubState : TBSMState

/**
 *  The `TBSMStateMachine` instance contained in this sub state.
 */
@property (nonatomic, strong) TBSMStateMachine *stateMachine;

/**
 *  Creates a `TBSMSUBState` with a specified name.
 *
 *  Throws an exception when name is nil or an empty string.
 *
 *  @param name The name of this wrapper. Must be unique.
 *
 *  @return A new `TBSMSubState` instance.
 */
+ (TBSMSubState *)subStateWithName:(NSString *)name;

/**
 *  Receives a specified `TBSMEvent` instance.
 *
 *  If the node recognizes the given `TBSMEvent` it will return `YES`.
 *
 *  @param event The given `TBSMEvent` instance.
 *
 *  @return `YES` if the transition has been handled.
 */
- (BOOL)handleEvent:(TBSMEvent *)event;

- (void)enter:(TBSMState *)sourceState targetStates:(NSArray *)targetStates region:(TBSMParallelState *)region data:(NSDictionary *)data;

@end
