//
// Created by mjzheng on 2020/8/11.
//

#ifndef DESIGN_PATTERN_FLYWEIGHTFACTORY_H
#define DESIGN_PATTERN_FLYWEIGHTFACTORY_H

#include <vector>
#include <string>

class Flyweight;

class FlyweightFactory {
public:
    FlyweightFactory();

    ~FlyweightFactory();

    Flyweight* GetFlyweight(const std::string& key);

private:
    std::vector<Flyweight*> _fly;
};

void TestFlyweight();


#endif //DESIGN_PATTERN_FLYWEIGHTFACTORY_H
