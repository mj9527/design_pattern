//
// Created by mjzheng on 2020/8/10.
//

#include "Product.h"
#include <iostream>

Product::Product() {

}

Product::~Product() {

}

ConcreteProduct::ConcreteProduct() {
    std::cout << "Concreate Product" << std::endl;
}

ConcreteProduct::~ConcreteProduct() {

}
