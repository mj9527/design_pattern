//
// Created by mjzheng on 2020/8/13.
//

#include "Memento.h"
#include <iostream>

Originator::Originator() {
    _state = "";
    _mt = nullptr;
}

Originator::Originator(const std::string &state) {
    _state = state;
    _mt = nullptr;
}

Originator::~Originator() {

}

Memento * Originator::CreateMemento() {
    return new Memento(_state);
}

std::string Originator::GetState() {
    return _state;
}

void Originator::SetState(const std::string &state) {
    _state = state;
}

void Originator::RestoreMemento(Memento *mt) {
    _state = mt->GetState();
}

void Originator::PrintState() {
    std::cout << _state << std::endl;
}

Memento::Memento(const std::string &state) {
    _state = state;
}

void Memento::SetState(const std::string &state) {
    _state = state;
}

std::string Memento::GetState() {
    return _state;
}

void TestMemento() {
    Originator* o = new Originator();
    o->SetState("old");
    o->PrintState();

    Memento* m = o->CreateMemento();
    o->SetState("new");
    o->PrintState();

    o->RestoreMemento(m);
    o->PrintState();
}