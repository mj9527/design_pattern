//
// Created by mjzheng on 2020/8/13.
//

#include "StateContext.h"
#include "State.h"

StateContext::StateContext(State *state)
: _state(state)
{

}

void StateContext::OperationChanageState() {
    if (nullptr != _state) {
        _state->OperationChangeState(this);
    }
}

void StateContext::OperationInterface() {
    if (nullptr != _state) {
        _state->OperationInterface(this);
    }
}

bool StateContext::ChangeState(State *state) {
    _state = state;
    return true;
}

void TestState1() {
    State *st = new ConcreteStateA();
    StateContext *con = new StateContext(st);
    con->OperationChanageState();
    con->OperationChanageState();
    con->OperationChanageState();
}