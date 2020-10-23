//
// Created by mjzheng on 2020/8/17.
//

#include "Aggregate.h"
#include "Iterator.h"
#include <iostream>
#include <vector>

ConcreteAggregate::ConcreteAggregate(int index) {
    _index = index;
    std::cout << _index << std::endl;
}

ConcreteAggregate::~ConcreteAggregate() {
    std::cout << "~ConcreteAggregate()" <<_index << std::endl;
}

Iterator * ConcreteAggregate::CreateIterator() {
    return new ConcreteIterator(this, 0);
}

int ConcreteAggregate::GetSize() {
    return sizeof(_objs) / sizeof(Object);
}

Object ConcreteAggregate::GetItem(int index) {
    int num = GetSize();
    if (index < num) {
        return _objs[index];
    }
    return -1;
}

void TestPointer() {
    std::vector<std::unique_ptr<Aggregate>> ls;
    for (int i=0; i<10; i++) {
        //Aggregate* ag = new ConcreteAggregate(i);
        std::unique_ptr<Aggregate> ag(new ConcreteAggregate(i));
        ls.push_back(std::move(ag));
    }
}

void TestIterator() {
    Aggregate* ag = new ConcreteAggregate();
    Iterator* iter = ag->CreateIterator();
    for (; !iter->IsDone(); iter->Next()) {
        std::cout << iter->CurrentItem() << std::endl;
    }

    TestPointer();
}

