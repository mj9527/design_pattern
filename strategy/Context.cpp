//
// Created by mjzheng on 2020/8/12.
//

#include "Context.h"
#include "Strategy.h"


Context::Context(Strategy* stg)
:m_stg(stg)
{

}

void Context::StrategyMethod() {
    if (nullptr != m_stg) {
        m_stg->PrimitiveOperation1();
        m_stg->PrimitiveOperation2();
    }
}

void TestStrategy() {
    Context* c1 = new Context(new ConcreteStrategyA());
    c1->StrategyMethod();


    Context* c2 = new Context(new ConcreteStrategyB());
    c2->StrategyMethod();
}