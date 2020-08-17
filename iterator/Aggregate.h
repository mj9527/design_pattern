//
// Created by mjzheng on 2020/8/17.
//

#ifndef DESIGN_PATTERN_AGGREGATE_H
#define DESIGN_PATTERN_AGGREGATE_H

#include "Iterator.h"
class Iterator;

class Aggregate {
public:
    virtual ~Aggregate() = default;

    virtual Iterator* CreateIterator() = 0;

    virtual Object GetItem(int index) = 0;

    virtual int GetSize() = 0;

protected:
    Aggregate() = default;
};

class ConcreteAggregate : public Aggregate {
public:
    Iterator* CreateIterator();

    Object GetItem(int index);

    int GetSize();

private:
    Object _objs[3];
};

void TestIterator();


#endif //DESIGN_PATTERN_AGGREGATE_H
