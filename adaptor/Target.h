//
// Created by mjzheng on 2020/8/11.
//

#ifndef DESIGN_PATTERN_TARGET_H
#define DESIGN_PATTERN_TARGET_H


class Target {
public:
    Target();

    virtual ~Target();

    virtual void Request();
};

void UseAadptee();


#endif //DESIGN_PATTERN_TARGET_H
