//
// Created by mjzheng on 2020/8/17.
//

#ifndef DESIGN_PATTERN_ITERATOR_H
#define DESIGN_PATTERN_ITERATOR_H

typedef int Object;

class Aggregate;

class Iterator {
public:
    virtual ~Iterator() = default;

    virtual void First() = 0;

    virtual void Next() = 0;

    virtual bool IsDone() = 0;

    virtual Object CurrentItem() = 0;

protected:
    Iterator() = default;
};

class ConcreteIterator : public Iterator {

public:
    ConcreteIterator(Aggregate* ag, int index);

    ~ConcreteIterator() = default;
public:

    virtual void First();

    virtual void Next();

    virtual bool IsDone();

    virtual Object CurrentItem();

private:
    Aggregate* _ag;
    int _index;
};


#endif //DESIGN_PATTERN_ITERATOR_H
