//
// Created by mjzheng on 2020/8/13.
//

#ifndef DESIGN_PATTERN_SUBJECT_H
#define DESIGN_PATTERN_SUBJECT_H

#include <list>

class Observer;

class ObSubject {
public:
    virtual void Attach(Observer* ob);

    virtual void Detach(Observer* ob);

    virtual void Notify();

private:
    std::list<Observer*> _obs;
};

class ConcreteObSubject : public ObSubject {

};

void TestObserver();




#endif //DESIGN_PATTERN_SUBJECT_H
