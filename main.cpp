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

#include <set>
#include "mycurl/HttpIml.h"


void TestSet()
{
    std::set<std::string> s;
    s.insert("mj");
    s.insert("mj");
    s.insert("zheng");

    for (auto& item : s)
    {
        std::cout << item << std::endl;
    }

    std::set<std::string> s1;
    s1.insert("ok");
}

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
//    TestState1();
//    TestObserver();
//    TestMemento();
//    TestCommand();
//    TestIterator();

//   TestIterator();
//
//   std::string str = "mjzheng";
//   int i = atoi(str.c_str());
//   std::cout << "result" <<i << std::endl;

   std::string addr ;
   GetHttp(addr);

   //TestSet();
    return 0;
}
