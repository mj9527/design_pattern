//
// Created by mjzheng on 2020/8/10.
//

#include "AbstractFactory.h"
#include "AbstractProduct.h"


AbstractFactory::AbstractFactory() {

}

AbstractFactory::~AbstractFactory() {

}

LowFactory::LowFactory() {

}

LowFactory::~LowFactory() {

}

AbstractProductA * LowFactory::CreateProductA() {
    return new ProductALow();
}

AbstractProductB * LowFactory::CreateProductB() {
    return new ProductBLow();
}

MiddleFactory::MiddleFactory() {

}

MiddleFactory::~MiddleFactory() {

}

AbstractProductA * MiddleFactory::CreateProductA() {
    return new ProductAMiddle();
}

AbstractProductB * MiddleFactory::CreateProductB() {
    return new ProductBMiddle();
}