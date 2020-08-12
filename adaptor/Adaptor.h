//
// Created by mjzheng on 2020/8/11.
//

#ifndef DESIGN_PATTERN_ADAPTOR_H
#define DESIGN_PATTERN_ADAPTOR_H

#include "Target.h"

class Adaptee;

class Adaptor : public Target {
public:
    Adaptor(Adaptee* adaptee);

    ~Adaptor();

    void Request();

private:
    Adaptee* m_adaptee;
};


#endif //DESIGN_PATTERN_ADAPTOR_H
