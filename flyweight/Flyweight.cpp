//
// Created by mjzheng on 2020/8/11.
//

#include "Flyweight.h"
#include <iostream>

Flyweight::~Flyweight() {

}

Flyweight::Flyweight(string intrinsicState)
:m_intrinsicState(intrinsicState)
{

}

void Flyweight::Operation(const string &extrinsicState)
{

}

string Flyweight::GetIntrinisicState() {
    return m_intrinsicState;
}

ConcreteFlyweight::ConcreteFlyweight(const std::string &intrinsicState)
:Flyweight(intrinsicState){

}

ConcreteFlyweight::~ConcreteFlyweight() {

}

void ConcreteFlyweight::Operation(const string &extrinsicState) {
    std::cout << GetIntrinisicState() << extrinsicState << std::endl;
}