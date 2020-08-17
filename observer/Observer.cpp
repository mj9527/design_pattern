//
// Created by mjzheng on 2020/8/13.
//

#include "Observer.h"
#include <iostream>
#include "Subject.h"


Observer::Observer(ObSubject* subject)
:m_subject(subject)
{
    m_subject->Attach(this);
}

Observer::~Observer()
{
    m_subject->Detach(this);
}

void ConcreteObserver::Update(ObSubject *subject) {
    std::cout << "ConcreteObserver::Update(ObSubject *subject)" << std::endl;
}

void ConcreteObserverB::Update(ObSubject *subject) {
    std::cout << "ConcreteObserverB::Update(ObSubject *subject)" << std::endl;
}