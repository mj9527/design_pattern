//
// Created by mjzheng on 2020/8/10.
//

#ifndef DESIGN_PATTERN_PROTOTYPE_H
#define DESIGN_PATTERN_PROTOTYPE_H


class Prototype {
public:
    virtual ~Prototype();
    virtual Prototype* Clone() const  = 0;

protected:
    Prototype();
};

class ConcretePrototype : public Prototype {
public:
    ConcretePrototype();

    ConcretePrototype(const ConcretePrototype& cp);

    ~ConcretePrototype();

    Prototype* Clone() const;
};


#endif //DESIGN_PATTERN_PROTOTYPE_H
