//
// Created by mjzheng on 2020/8/12.
//

#ifndef DESIGN_PATTERN_FACADE_H
#define DESIGN_PATTERN_FACADE_H

class Subsystem1 {
public:
    void Operation();
};

class Subsystem2 {
public:
    void Operation();
};


class Facade {
public:
    Facade();

    ~Facade();

    void OperationWrapper();

private:
    Subsystem1* m_sys1;
    Subsystem2* m_sys2;
};

void TestFacade();


#endif //DESIGN_PATTERN_FACADE_H
