//
// Created by mjzheng on 2020/8/12.
//

#ifndef DESIGN_PATTERN_TEMPLATE_H
#define DESIGN_PATTERN_TEMPLATE_H



class AbstractClass
{
public:
    virtual  ~AbstractClass();
    void TemplateMethod();

protected:
    virtual void PrimitiveOperation1() = 0;
    virtual void PrimitiveOperation2() = 0;
    AbstractClass();
};

class ConcreteClass1 : public AbstractClass {
protected:
    void PrimitiveOperation1();
    void PrimitiveOperation2();
};

class ConcreteClass2 : public AbstractClass {
protected:
    void PrimitiveOperation1();
    void PrimitiveOperation2();
};

void TestTemplate();


#endif //DESIGN_PATTERN_TEMPLATE_H
