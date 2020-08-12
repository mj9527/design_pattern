//
// Created by mjzheng on 2020/8/11.
//

#include "Abstraction.h"
#include "AbstractionImp.h"

Abstraction::Abstraction() {

}

Abstraction::~Abstraction() {

}

RefinedAbstraction::RefinedAbstraction(AbstractionImp *imp)
:m_imp(imp)
{

}

RefinedAbstraction::~RefinedAbstraction(){
}

void RefinedAbstraction::Operation() {
    if (nullptr != m_imp) {
        m_imp->Operation();
    }
}

void TestBridge() {
    AbstractionImp* imp = GetImp(WINDOWS_IMPL);
    Abstraction* a1 = new RefinedAbstraction(imp);
    a1->Operation();

    AbstractionImp* imp1 = GetImp(LINUX_IMPL);
    Abstraction* a2 = new RefinedAbstraction(imp1);
    a2->Operation();
}

