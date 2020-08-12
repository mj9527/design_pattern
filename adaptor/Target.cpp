//
// Created by mjzheng on 2020/8/11.
//

#include "Target.h"
#include <iostream>
#include "Adaptor.h"
#include "Adaptee.h"

Target::Target() {}


Target::~Target() {

}

void Target::Request() {
    std::cout << __func__  << std::endl;
}

void UseAadptee() {
    Adaptee* te = new Adaptee();
    Target* p = new Adaptor(te);
    p->Request();
}