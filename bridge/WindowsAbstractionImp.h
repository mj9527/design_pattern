//
// Created by mjzheng on 2020/8/11.
//

#ifndef DESIGN_PATTERN_WINDOWSABSTRACTIONIMP_H
#define DESIGN_PATTERN_WINDOWSABSTRACTIONIMP_H

#include "AbstractionImp.h"

class WindowsAbastractionImp : public AbstractionImp {
public:
    WindowsAbastractionImp();

    ~WindowsAbastractionImp();

    virtual void Operation();
};

#endif //DESIGN_PATTERN_WINDOWSABSTRACTIONIMP_H
