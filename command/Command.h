//
// Created by mjzheng on 2020/8/17.
//

#ifndef DESIGN_PATTERN_COMMAND_H
#define DESIGN_PATTERN_COMMAND_H

class Reciever;

class Command {
public:
    virtual  ~Command();
    virtual  void Excute() = 0;

protected:
    Command();
};

class ConcreteCommand : public Command {
public:
    ConcreteCommand(Reciever* rev);

    ~ConcreteCommand();

    void Excute();

private:

    Reciever* _rev;
};



#endif //DESIGN_PATTERN_COMMAND_H
