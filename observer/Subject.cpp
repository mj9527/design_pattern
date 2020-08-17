//
// Created by mjzheng on 2020/8/13.
//

#include "Subject.h"
#include "Observer.h"

void ObSubject::Attach(Observer *ob) {
    _obs.push_back(ob);
}

void ObSubject::Detach(Observer *ob) {
    _obs.remove(ob);
}

void ObSubject::Notify() {
    for (auto& ob : _obs) {
        ob->Update(this);
    }
}

void TestObserver() {
    ObSubject* subject = new ConcreteObSubject();
    Observer* ob = new ConcreteObserver(subject);
    Observer* ob1 = new ConcreteObserverB(subject);
    subject->Notify();
}