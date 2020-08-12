//
// Created by mjzheng on 2020/8/10.
//

#ifndef DESIGN_PATTERN_FACTORY_H
#define DESIGN_PATTERN_FACTORY_H

class Product;

class Factory {
public:
    // 纯虚析构函数必须加上函数体，因为子类的析构函数默认调用了基类的析构函数
    virtual ~Factory() = 0;

    // 纯虚函数可以有函数体，但最好不要加
    virtual Product* CreateProduct() = 0;

protected:
    Factory();
};

class ConcreteFactory : public Factory {
public:
    ConcreteFactory();

    ~ConcreteFactory();

    Product* CreateProduct();
};

void GetProduct();


#endif //DESIGN_PATTERN_FACTORY_H
