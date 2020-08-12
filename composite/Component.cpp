//
// Created by mjzheng on 2020/8/11.
//

#include "Component.h"
#include "Leaf.h"
#include "Composite.h"


Component::Component() {

}

Component::~Component() {

}

void Component::Add(Component* c) {

}

void Component::Remove(Component* c) {

}

Component * Component::GetChild(int) {
    return nullptr;
}

void TestComposite() {
    Leaf* l = new Leaf();
    Leaf* l1 = new Leaf();
    Composite* com = new Composite();
    com->Add(l);
    com->Add(l1);
    com->Operation();
}