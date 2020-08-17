//
// Created by mjzheng on 2020/8/13.
//

#ifndef DESIGN_PATTERN_OBSERVER_H
#define DESIGN_PATTERN_OBSERVER_H

class ObSubject;

class Observer {
public:
    Observer(ObSubject* subject);

    virtual ~Observer();

    virtual void Update(ObSubject* subject) = 0;

private:
    ObSubject* m_subject;
};

class ConcreteObserver : public Observer {
    using Observer::Observer;
public:
    virtual void Update(ObSubject* subject);
};


class ConcreteObserverB : public Observer {
    using Observer::Observer;
public:
    virtual void Update(ObSubject* subject);
};


#endif //DESIGN_PATTERN_OBSERVER_H
