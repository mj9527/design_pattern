//
// Created by mjzheng on 2020/8/13.
//

#ifndef DESIGN_PATTERN_MEMENTO_H
#define DESIGN_PATTERN_MEMENTO_H

#include <string>

class Memento;

class Originator
{
public:
    Originator();

    Originator(const std::string& state);

    ~Originator();

public:
    Memento* CreateMemento();

    void RestoreMemento(Memento* mt);

    void SetMemento(Memento* mt);

    std::string GetState();

    void SetState(const std::string& state);

    void PrintState();

private:
    std::string _state;
    Memento* _mt;
};


class Memento {
    friend class Originator;
private:
    Memento(const std::string& state);
    ~Memento();
    void SetState(const std::string& state);
    std::string GetState();

private:
    std::string _state;
};

void TestMemento();


#endif //DESIGN_PATTERN_MEMENTO_H
