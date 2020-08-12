//
// Created by mjzheng on 2020/8/11.
//

#ifndef DESIGN_PATTERN_ABSTRACTIONIMP_H
#define DESIGN_PATTERN_ABSTRACTIONIMP_H

enum IMP_TYPE{
    WINDOWS_IMPL = 1,
    LINUX_IMPL = 2,
};

class AbstractionImp {
public:
    virtual ~AbstractionImp();

    virtual void Operation() = 0;

protected:
    AbstractionImp();
};

AbstractionImp* GetImp(IMP_TYPE impType);


#endif //DESIGN_PATTERN_ABSTRACTIONIMP_H
