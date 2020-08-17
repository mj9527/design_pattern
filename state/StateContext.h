//
// Created by mjzheng on 2020/8/13.
//

#ifndef DESIGN_PATTERN_STATECONTEXT_H
#define DESIGN_PATTERN_STATECONTEXT_H


class State;

class StateContext {
public:
    StateContext(State* state);

    void OperationInterface();

    void OperationChanageState();

private:
    friend class State;
    bool ChangeState(State* state);

private:
    State* _state;
};


void TestState1();




#endif //DESIGN_PATTERN_STATECONTEXT_H
