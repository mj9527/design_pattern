//
// Created by mjzheng on 2020/8/10.
//

#include "Factory.h"
#include "Product.h"

Factory::Factory() {

}

Factory::~Factory()  {

}

ConcreteFactory::ConcreteFactory() {

}

ConcreteFactory::~ConcreteFactory(){

}

Product * ConcreteFactory::CreateProduct() {
    return new ConcreteProduct();
}

void GetProduct() {
    Factory* fac = new ConcreteFactory();
    Product* p = fac->CreateProduct();
}
