//
// Created by mjzheng on 2020/8/10.
//

#include "Singleton.h"


Singleton* Singleton::g_instace;

std::mutex Singleton::m_mutex;

Singleton * Singleton::GetInstance() {
    static Singleton s;
    return &s;
}

Singleton* Singleton::GetInstanceEx() {
    if (g_instace == nullptr) {
        std::lock_guard<std::mutex> lk(m_mutex);
        if (g_instace == nullptr) {
           g_instace = new Singleton();
        }
    }
    return g_instace;
}

Singleton::~Singleton() {

}

Singleton::Singleton() {

}

