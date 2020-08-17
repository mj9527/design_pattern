//
// Created by mjzheng on 2020/8/17.
//

#include "Command.h"
#include "Reciever.h"

Command::Command() {

}

Command::~Command() {

}

ConcreteCommand::ConcreteCommand(Reciever *rev)
:_rev(rev)
{
}

ConcreteCommand::~ConcreteCommand() {

}

void ConcreteCommand::Excute() {
    if (nullptr != _rev) {
        _rev->Action();
    }
}
