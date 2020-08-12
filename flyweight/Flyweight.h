//
// Created by mjzheng on 2020/8/11.
//

#ifndef DESIGN_PATTERN_FLYWEIGHT_H
#define DESIGN_PATTERN_FLYWEIGHT_H

#include <string>
using namespace std;

class Flyweight {
public:
    virtual ~Flyweight();

    virtual void Operation(const string& extrinsicState);

    string GetIntrinisicState();

protected:
    Flyweight(string intrinsicState);

private:
    string m_intrinsicState;
};

class ConcreteFlyweight : public Flyweight {
public:
    ConcreteFlyweight(const string& intrinsicState);

    ~ConcreteFlyweight();

    void Operation(const string& extrinsicState);

};


#endif //DESIGN_PATTERN_FLYWEIGHT_H
