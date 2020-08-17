//
// Created by mjzheng on 2020/8/17.
//

#include "Iterator.h"
#include "Aggregate.h"


ConcreteIterator::ConcreteIterator(Aggregate *ag, int index)
:_ag(ag),
_index(index)
{
}

void ConcreteIterator::First() {
    _index = 0;
}

void ConcreteIterator::Next() {
    if (_index < _ag->GetSize()) {
        _index++;
    }
}

bool ConcreteIterator::IsDone() {
    return (_index == _ag->GetSize());
}

Object ConcreteIterator::CurrentItem() {
    return _ag->GetItem(_index);
}