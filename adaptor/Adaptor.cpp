//
// Created by mjzheng on 2020/8/11.
//

#include "Adaptor.h"
#include "Adaptee.h"

Adaptor::Adaptor(Adaptee* adaptee) :
m_adaptee(adaptee)
{

}

Adaptor::~Adaptor() {

}

void Adaptor::Request() {
    if (nullptr != m_adaptee) {
        m_adaptee->SpecificRequest();
    }
}
