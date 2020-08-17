//
// Created by mjzheng on 2020/8/13.
//

#ifndef DESIGN_PATTERN_STATE_H
#define DESIGN_PATTERN_STATE_H



class StateContext;

class State {
public:
    virtual void OperationInterface(StateContext *c) = 0;

    virtual void OperationChangeState(StateContext *c) = 0;

protected:
    bool ChangeState(StateContext *c, State *st);
};

class ConcreteStateA : public State {
public:
    virtual void OperationInterface(StateContext *c);

    virtual void OperationChangeState(StateContext *c);
};

class ConcreteStateB : public State {
public:
    virtual void OperationInterface(StateContext *c);

    virtual void OperationChangeState(StateContext *c);

};





#endif //DESIGN_PATTERN_STATE_H
