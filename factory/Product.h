//
// Created by mjzheng on 2020/8/10.
//

#ifndef DESIGN_PATTERN_PRODUCT_H
#define DESIGN_PATTERN_PRODUCT_H


class Product {
public:
    virtual ~Product() = 0;

protected:
    Product();
};

class ConcreteProduct : public Product {
public:
    ConcreteProduct();

    ~ConcreteProduct();
};


#endif //DESIGN_PATTERN_PRODUCT_H
