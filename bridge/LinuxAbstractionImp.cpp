//
// Created by mjzheng on 2020/8/11.
//

#include "LinuxAbstractionImp.h"
#include <iostream>

LinuxAbstractionImp::LinuxAbstractionImp() {

}

LinuxAbstractionImp::~LinuxAbstractionImp() {

}

void LinuxAbstractionImp::Operation() {
    std::cout << __func__  << std::endl;
}
