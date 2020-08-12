//
// Created by mjzheng on 2020/8/10.
//

#include "Prototype.h"
#include <iostream>

Prototype::~Prototype() {
    std::cout << __func__  << std::endl;
}

Prototype::Prototype() {
    std::cout << __func__  << std::endl;
}

ConcretePrototype::ConcretePrototype() {
    std::cout << __func__  << std::endl;
}

ConcretePrototype::ConcretePrototype(const ConcretePrototype& other) {
    std::cout << __func__  << std::endl;
}

ConcretePrototype::~ConcretePrototype() {
    std::cout << __func__  << std::endl;
}

Prototype * ConcretePrototype::Clone() const {
    return new ConcretePrototype(*this);
}