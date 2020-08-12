//
// Created by mjzheng on 2020/8/11.
//

#include "AbstractionImp.h"
#include <iostream>
#include "WindowsAbstractionImp.h"
#include "LinuxAbstractionImp.h"

AbstractionImp::~AbstractionImp(){

}

AbstractionImp::AbstractionImp(){

}

AbstractionImp* GetImp(IMP_TYPE impType) {
    AbstractionImp* imp = nullptr;
    switch (impType) {
        case WINDOWS_IMPL:
            imp = new WindowsAbastractionImp();
            break;
        case LINUX_IMPL:
            imp = new LinuxAbstractionImp();
            break;
        default:
            break;
    }
    return imp;
}