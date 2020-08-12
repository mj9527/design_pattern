//
// Created by mjzheng on 2020/8/11.
//

#ifndef DESIGN_PATTERN_COMPOSITE_H
#define DESIGN_PATTERN_COMPOSITE_H

#include "Component.h"
#include <vector>

class Composite : public Component{
public:
    Composite();

    ~Composite();

public:
    virtual void Operation();

    virtual void Add(Component* c);

    virtual void Remove(Component* c);

    virtual Component* GetChild(int);

private:
    std::vector<Component*> m_vec;
};


#endif //DESIGN_PATTERN_COMPOSITE_H
