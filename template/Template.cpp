//
// Created by mjzheng on 2020/8/12.
//

#include "Template.h"
#include <iostream>

AbstractClass::AbstractClass() {

}

AbstractClass::~AbstractClass() {

}

void AbstractClass::TemplateMethod() {
    PrimitiveOperation1();

    PrimitiveOperation2();
}

void ConcreteClass1::PrimitiveOperation1() {
    std::cout << "ConcreteClass1::PrimitiveOperation1()" << std::endl;
}

void ConcreteClass1::PrimitiveOperation2() {
    std::cout << "ConcreteClass1::PrimitiveOperation2()" << std::endl;
}

void ConcreteClass2::PrimitiveOperation1() {
    std::cout << "ConcreteClass2::PrimitiveOperation1()" << std::endl;
}

void ConcreteClass2::PrimitiveOperation2() {
    std::cout << "ConcreteClass2::PrimitiveOperation2()" << std::endl;
}

void TestTemplate() {
    AbstractClass* p1 = new ConcreteClass1();
    p1->TemplateMethod();

    AbstractClass* p2 = new ConcreteClass2();
    p2->TemplateMethod();
}

