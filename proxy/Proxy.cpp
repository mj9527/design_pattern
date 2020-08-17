//
// Created by mjzheng on 2020/8/12.
//

#include "Proxy.h"
#include <iostream>

Subject::Subject() {

}

Subject::~Subject() {

}

ConcreteSubject::ConcreteSubject() {

}

ConcreteSubject::~ConcreteSubject() {

}

void ConcreteSubject::Request() {
    std::cout << __func__  << std::endl;
}

Proxy::Proxy() {

}

Proxy::Proxy(Subject *sub) {
    m_sub = sub;
}

Proxy::~Proxy() {

}

void Proxy::Request() {
    if (m_sub != nullptr) {
        m_sub->Request();
    }
}

void TestProxy() {
    Subject* sub = new ConcreteSubject();
    Proxy* p = new Proxy(sub);
    p->Request();
}
