//
// Created by mjzheng on 2020/8/11.
//

#ifndef DESIGN_PATTERN_DECORATE_H
#define DESIGN_PATTERN_DECORATE_H

namespace dp_decorate {

    class Component {
    public:
        virtual ~Component();

        virtual void Operation();

    protected:
        Component();
    };

    class ConcreteComponent : public Component {
    public:
        ConcreteComponent();

        ~ConcreteComponent();

        virtual void Operation();
    };


    class Decorate : public Component {
    public:
        Decorate(Component *com);

        virtual void Operation();

    private:
        void AddedBehavior();

    private:
        Component *m_com;
    };

};

void TestDecorate();


#endif //DESIGN_PATTERN_DECORATE_H
