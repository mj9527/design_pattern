cmake_minimum_required(VERSION 3.16)
project(design_pattern)

set(CMAKE_CXX_STANDARD 11)

add_executable(design_pattern main.cpp
        factory/Factory.cpp factory/Product.cpp
        abstract_factory/AbstractFactory.cpp abstract_factory/AbstractProduct.cpp
        singleton/Singleton.cpp
        prototype/Prototype.cpp
        bridge/Abstraction.cpp bridge/AbstractionImp.cpp bridge/LinuxAbstractionImp.cpp bridge/WindowsAbstractionImp.cpp
        adaptor/Adaptee.cpp adaptor/Adaptor.cpp adaptor/Target.cpp
        decorate/Decorate.cpp
        composite/Composite.cpp composite/Component.cpp composite/Leaf.cpp
        flyweight/Flyweight.cpp flyweight/FlyweightFactory.cpp
        )