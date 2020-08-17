//
// Created by mjzheng on 2020/8/12.
//

#ifndef DESIGN_PATTERN_STRATEGY_H
#define DESIGN_PATTERN_STRATEGY_H


class Strategy {
public:
    virtual void PrimitiveOperation1() = 0;
    virtual void PrimitiveOperation2() = 0;
};

class ConcreteStrategyA : public Strategy {
    virtual void PrimitiveOperation1();
    virtual void PrimitiveOperation2();
};


class ConcreteStrategyB : public Strategy {
    virtual void PrimitiveOperation1();
    virtual void PrimitiveOperation2();
};



#endif //DESIGN_PATTERN_STRATEGY_H
