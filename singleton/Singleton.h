//
// Created by mjzheng on 2020/8/10.
//

#ifndef DESIGN_PATTERN_SINGLETON_H
#define DESIGN_PATTERN_SINGLETON_H

#include <mutex>


class Singleton {
public:
    static Singleton* GetInstance();

    static Singleton* GetInstanceEx();

    Singleton(const Singleton& other) = delete ;

    Singleton& operator=(const Singleton& other) = delete ;

    ~Singleton();

protected:
    Singleton();

private:
    static  std::mutex m_mutex;

private:
    static Singleton* g_instace; // 声明
};


#endif //DESIGN_PATTERN_SINGLETON_H
