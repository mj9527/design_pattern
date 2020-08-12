//
// Created by mjzheng on 2020/8/11.
//

#include "Adaptee.h"
#include <iostream>

Adaptee::Adaptee() {

}

Adaptee::~Adaptee() {

}

void Adaptee::SpecificRequest() {
    std::cout << __func__  << std::endl;
}
