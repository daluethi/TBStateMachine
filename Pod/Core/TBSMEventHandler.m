//
//  TBSMEventHandler.m
//  TBStateMachine
//
//  Created by Julian Krumow on 07.09.14.
//  Copyright (c) 2014-2015 Julian Krumow. All rights reserved.
//

#import "TBSMEventHandler.h"
#import "NSException+TBStateMachine.h"


@implementation TBSMEventHandler

+ (instancetype)eventHandlerWithName:(NSString *)name target:(id <TBSMTransitionVertex>)target kind:(TBSMTransitionKind)kind action:(TBSMActionBlock)action guard:(TBSMGuardBlock)guard
{
    return [[TBSMEventHandler alloc] initWithName:name target:target kind:kind action:action guard:guard];
}

- (instancetype)initWithName:(NSString *)name target:(id <TBSMTransitionVertex>)target kind:(TBSMTransitionKind)kind action:(TBSMActionBlock)action guard:(TBSMGuardBlock)guard
{
    if (name == nil || [name isEqualToString:@""]) {
        @throw [NSException tb_noNameForEventException];
    }
    self = [super init];
    if (self) {
        self.name = name;
        self.target = target;
        self.kind = kind;
        self.action = action;
        self.guard = guard;
    }
    return self;
}

@end