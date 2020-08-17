#include <iostream>
#include "factory/Factory.h"
#include "bridge/Abstraction.h"
#include "adaptor/Target.h"
#include "decorate/Decorate.h"
#include "composite/Component.h"
#include "flyweight/FlyweightFactory.h"
#include "facade/Facade.h"
#include "proxy/Proxy.h"
#include "template/Template.h"
#include "strategy/Context.h"
#include "state/StateContext.h"
#include "observer/Subject.h"
#include "memento/Memento.h"
#include "command/Invoker.h"
#include "iterator/Aggregate.h"


int main() {
//    std::cout << "Hello, World!" << std::endl;
//    GetProduct();
//    TestBridge();
//    UseAadptee();
//    TestDecorate();
//    TestComposite();
//    TestFlyweight();
//    TestFacade();
//    TestProxy();
//    TestTemplate();
//    TestStrategy();
    //TestState1();
    TestState1();
    TestObserver();
    TestMemento();
    TestCommand();
    TestIterator();

    return 0;
}
