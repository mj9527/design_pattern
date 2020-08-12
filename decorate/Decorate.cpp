//
// Created by mjzheng on 2020/8/11.
//

#include "Decorate.h"
#include <iostream>

namespace dp_decorate {
    Component::~Component() {

    }

    void Component::Operation() {

    }

    Component::Component() {

    }

    ConcreteComponent::ConcreteComponent() {

    }

    ConcreteComponent::~ConcreteComponent() {

    }

    void ConcreteComponent::Operation() {
        std::cout << "basic operation" << std::endl;
    }

    Decorate::Decorate(Component *com)
            :m_com(com)
    {

    }

    void Decorate::Operation() {
        if (nullptr != m_com) {
            m_com->Operation();
        }
        AddedBehavior();
    }

    void Decorate::AddedBehavior() {
        std::cout << "add operation" << std::endl;
    }
}

void TestDecorate()
{
    dp_decorate::Component* com = new dp_decorate::ConcreteComponent();
    dp_decorate::Decorate* de = new dp_decorate::Decorate(com);
    de->Operation();
}

