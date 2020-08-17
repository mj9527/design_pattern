//
// Created by mjzheng on 2020/8/12.
//

#ifndef DESIGN_PATTERN_STATECONTEXT_H
#define DESIGN_PATTERN_CONTEXT_H

class Strategy;

class Context {
public:
    Context(Strategy* stg);

    void StrategyMethod();

protected:
    Strategy* m_stg;
};

void TestStrategy();

#endif //DESIGN_PATTERN_STATECONTEXT_H
