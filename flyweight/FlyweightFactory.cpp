//
// Created by mjzheng on 2020/8/11.
//

#include "FlyweightFactory.h"
#include "Flyweight.h"
#include <iostream>

FlyweightFactory::FlyweightFactory()
{

}

FlyweightFactory::~FlyweightFactory(){

}

Flyweight* FlyweightFactory::GetFlyweight(const std::string& key)
{
   for (auto& item : _fly) {
       if (item->GetIntrinisicState() == key) {
           return item;
       }
   }
   Flyweight* p = new ConcreteFlyweight(key);
   _fly.push_back(p);
   return p;
}

void TestFlyweight() {
    FlyweightFactory* fac = new FlyweightFactory();

    Flyweight* pHello1 = fac->GetFlyweight("hello");

    Flyweight* pWorld = fac->GetFlyweight("world");

    Flyweight* pHello2 = fac->GetFlyweight("hello");

    if (pHello1 == pHello2) {
        std::cout << "same object" << std::endl;
    } else {
        std::cout << "difficult object" << std::endl;
    }
}
