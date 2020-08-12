//
// Created by mjzheng on 2020/8/11.
//

#ifndef DESIGN_PATTERN_ABSTRACTION_H
#define DESIGN_PATTERN_ABSTRACTION_H

#include "AbstractionImp.h"

class AbstractionImp;

class Abstraction {
public:
    virtual ~Abstraction();

    virtual void Operation() = 0;

protected:
    Abstraction();
};

class RefinedAbstraction: public Abstraction {
public:
    RefinedAbstraction(AbstractionImp* imp);
    ~RefinedAbstraction();

    void Operation();

private:
    AbstractionImp* m_imp;
};

void TestBridge();




#endif //DESIGN_PATTERN_ABSTRACTION_H
