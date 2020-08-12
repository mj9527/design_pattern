//
// Created by mjzheng on 2020/8/11.
//

#ifndef DESIGN_PATTERN_COMPONENT_H
#define DESIGN_PATTERN_COMPONENT_H



class Component {
public:
    Component();

    virtual ~Component();

public:
    virtual void Operation() = 0;

    virtual void Add(Component *c);

    virtual void Remove(Component *c);

    virtual Component *GetChild(int);
};

void TestComposite();




#endif //DESIGN_PATTERN_COMPONENT_H
