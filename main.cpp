#include <iostream>
#include "factory/Factory.h"
#include "bridge/Abstraction.h"
#include "adaptor/Target.h"
#include "decorate/Decorate.h"
#include "composite/Component.h"
#include "flyweight/FlyweightFactory.h"

int main() {
    std::cout << "Hello, World!" << std::endl;
    GetProduct();
    TestBridge();
    UseAadptee();
    TestDecorate();
    TestComposite();
    TestFlyweight();
    return 0;
}
