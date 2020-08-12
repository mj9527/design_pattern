//
// Created by mjzheng on 2020/8/11.
//

#include "Composite.h"

Composite::Composite() {

}

Composite::~Composite()  {

}

void Composite::Add(Component* c) {
    m_vec.push_back(c);
}

void Composite::Remove(Component* c) {
    //m_vec.erase(&c);
    //m_vec.erase(c);
}

Component * Composite::GetChild(int index) {
    return m_vec[index];
}

void Composite::Operation() {
    for (auto& item : m_vec) {
        item->Operation();
    }
}