//
// Created by mjzheng on 2020/8/12.
//

#include "Facade.h"

#include <iostream>

void Subsystem1:: Operation() {
    std::cout << __func__  << std::endl;
}

void Subsystem2::Operation() {
    std::cout << __func__  << std::endl;
}

Facade::Facade() {
    m_sys1 = new Subsystem1();
    m_sys2 = new Subsystem2();
}

Facade::~Facade() {
    delete m_sys2;
    delete m_sys1;
}

void Facade::OperationWrapper() {
    if (nullptr != m_sys1) {
        m_sys1->Operation();
    }

    if (nullptr != m_sys2) {
        m_sys2->Operation();
    }
}

void TestFacade() {
    Facade* fac = new Facade();
    fac->OperationWrapper();
}

