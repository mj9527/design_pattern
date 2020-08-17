//
// Created by mjzheng on 2020/8/12.
//

#ifndef DESIGN_PATTERN_PROXY_H
#define DESIGN_PATTERN_PROXY_H


class Subject {
public:
    virtual ~Subject();

    virtual void Request() = 0;

protected:
    Subject();
};

class ConcreteSubject : public Subject {
public:
    ConcreteSubject();

    ~ConcreteSubject();

    void Request();
};


class Proxy {
public:
    Proxy();

    ~Proxy();

    Proxy(Subject* sub);

    void Request();

protected:
    Subject* m_sub;
};

void TestProxy();


#endif //DESIGN_PATTERN_PROXY_H
