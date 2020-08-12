//
// Created by mjzheng on 2020/8/10.
//

#ifndef DESIGN_PATTERN_ABSTRACTPRODUCT_H
#define DESIGN_PATTERN_ABSTRACTPRODUCT_H


class AbstractProductA {
public:
    virtual ~AbstractProductA();

protected:
    AbstractProductA();
};


class ProductALow : public AbstractProductA{
public:
    ProductALow();
    ~ProductALow();
};

class ProductAMiddle : public AbstractProductA {
public:
    ProductAMiddle();
    ~ProductAMiddle();
};

class AbstractProductB {
public:
    virtual ~AbstractProductB();

protected:
    AbstractProductB();
};

class ProductBLow : public AbstractProductB {
public:
    ProductBLow();

    ~ProductBLow();
};

class ProductBMiddle : public AbstractProductB {
public:
    ProductBMiddle();

    ~ProductBMiddle();
};


#endif //DESIGN_PATTERN_ABSTRACTPRODUCT_H
