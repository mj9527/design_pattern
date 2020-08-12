//
// Created by mjzheng on 2020/8/11.
//

#ifndef DESIGN_PATTERN_LINUXABSTRACTIONIMP_H
#define DESIGN_PATTERN_LINUXABSTRACTIONIMP_H

#include "AbstractionImp.h"

class LinuxAbstractionImp : public AbstractionImp {
public:
    LinuxAbstractionImp();

    ~LinuxAbstractionImp();

    virtual void Operation();
};




#endif //DESIGN_PATTERN_LINUXABSTRACTIONIMP_H
