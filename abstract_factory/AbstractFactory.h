//
// Created by mjzheng on 2020/8/10.
//

#ifndef DESIGN_PATTERN_ABSTRACTFACTORY_H
#define DESIGN_PATTERN_ABSTRACTFACTORY_H

class AbstractProductA;
class AbstractProductB;

class AbstractFactory {
public:
    virtual ~AbstractFactory();
    virtual AbstractProductA* CreateProductA() = 0;
    virtual AbstractProductB* CreateProductB() = 0;

protected:
    AbstractFactory();
};

class LowFactory : public AbstractFactory{
public:
    LowFactory();
    ~LowFactory();

    virtual AbstractProductA* CreateProductA();
    virtual AbstractProductB* CreateProductB();
};

class MiddleFactory : public AbstractFactory {
public:
    MiddleFactory();
    ~MiddleFactory();

    virtual AbstractProductA* CreateProductA();
    virtual AbstractProductB* CreateProductB();

};




#endif //DESIGN_PATTERN_ABSTRACTFACTORY_H
