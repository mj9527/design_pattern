//
// Created by mjzheng on 2020/8/17.
//

#include "Aggregate.h"
#include "Iterator.h"
#include <iostream>

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

void TestIterator() {
    Aggregate* ag = new ConcreteAggregate();
    Iterator* iter = ag->CreateIterator();
    for (; !iter->IsDone(); iter->Next()) {
        std::cout << iter->CurrentItem() << std::endl;
    }
}