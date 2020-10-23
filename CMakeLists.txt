cmake_minimum_required(VERSION 3.16)
project(design_pattern)

set(CMAKE_CXX_STANDARD 11)

include_directories("/Users/mjzheng/Desktop/curl-7.72.0/include/curl/")

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
        facade/Facade.cpp
        proxy/Proxy.cpp
        template/Template.cpp
        strategy/Context.cpp strategy/Strategy.cpp
        state/State.cpp state/StateContext.cpp
        observer/Observer.cpp observer/Subject.cpp
        memento/Memento.cpp
        command/Command.cpp command/Invoker.cpp command/Reciever.cpp
        iterator/Aggregate.cpp iterator/Iterator.cpp
        mycurl/HttpImpl.cpp
        )

link_directories("/usr/local/lib")


#添加链接库
target_link_libraries(design_pattern libcurl.a)