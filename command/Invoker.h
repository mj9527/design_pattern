//
// Created by mjzheng on 2020/8/17.
//

#ifndef DESIGN_PATTERN_INVOKER_H
#define DESIGN_PATTERN_INVOKER_H

class Command;

class Invoker {
public:
    Invoker(Command* cmd);

    ~Invoker();

    void Invoke();

private:
    Command* _cmd;
};

void TestCommand();

#endif //DESIGN_PATTERN_INVOKER_H
