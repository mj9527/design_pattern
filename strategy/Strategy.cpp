//
// Created by mjzheng on 2020/8/12.
//

#include "Strategy.h"
#include <iostream>

void ConcreteStrategyA::PrimitiveOperation2() {
    std::cout << "ConcreteStrategyA::PrimitiveOperation2()" << std::endl;
}

void ConcreteStrategyA::PrimitiveOperation1() {
    std::cout << "ConcreteStrategyA::PrimitiveOperation1()" << std::endl;
}

void ConcreteStrategyB::PrimitiveOperation1() {
    std::cout << "ConcreteStrategyB::PrimitiveOperation1(" << std::endl;
}

void ConcreteStrategyB::PrimitiveOperation2() {
    std::cout << "ConcreteStrategyB::PrimitiveOperation2()" << std::endl;
}

