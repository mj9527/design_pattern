//
// Created by mjzheng on 2020/8/10.
//

#include "AbstractProduct.h"
#include <iostream>

AbstractProductA::AbstractProductA() {
    std::cout << __func__  << std::endl;
}

AbstractProductA::~AbstractProductA() {
    std::cout << __func__  << std::endl;
}

ProductALow::ProductALow() {
    std::cout << __func__  << std::endl;
}

ProductALow::~ProductALow() {
    std::cout << __func__  << std::endl;
}

ProductAMiddle::ProductAMiddle() {
    std::cout << __func__  << std::endl;
}

ProductAMiddle::~ProductAMiddle() {
    std::cout << __func__  << std::endl;
}

AbstractProductB::AbstractProductB(){
    std::cout << __func__  << std::endl;
}

AbstractProductB::~AbstractProductB() {
    std::cout << __func__  << std::endl;
}

ProductBLow::ProductBLow() {
    std::cout << __func__  << std::endl;
}

ProductBLow::~ProductBLow() {
    std::cout << __func__  << std::endl;
}

ProductBMiddle::ProductBMiddle()  {
    std::cout << __func__  << std::endl;
}

ProductBMiddle::~ProductBMiddle()  {
    std::cout << __func__  << std::endl;
}
