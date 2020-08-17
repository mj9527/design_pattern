//
// Created by mjzheng on 2020/8/17.
//

#include "Invoker.h"
#include "Command.h"
#include "Reciever.h"

Invoker::Invoker(Command* cmd)
:_cmd(cmd)
{

}

Invoker::~Invoker()
{

}

void Invoker::Invoke()
{
    if (nullptr != _cmd) {
        _cmd->Excute();
    }
}

void TestCommand() {
    Reciever* rev = new Reciever();
    Command* cmd = new ConcreteCommand(rev);
    Invoker* inv = new Invoker(cmd);
    inv->Invoke();
}