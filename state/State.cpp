//
// Created by mjzheng on 2020/8/13.
//

#include "State.h"
#include "StateContext.h"
#include <iostream>

bool State::ChangeState(StateContext *c, State *st) {
    c->ChangeState(st);
    return true;
}

void ConcreteStateA::OperationInterface(StateContext *c) {
    std::cout << "ConcreteStateA::OperationInterface" << std::endl;
}

void ConcreteStateA::OperationChangeState(StateContext *c) {
    OperationInterface(c);
    ChangeState(c, new ConcreteStateB());
}

void ConcreteStateB::OperationInterface(StateContext *c) {
    std::cout << " ConcreteStateB::OperationInterface" << std::endl;
}

void ConcreteStateB::OperationChangeState(StateContext *c) {
    OperationInterface(c);
    ChangeState(c, new ConcreteStateA());
}