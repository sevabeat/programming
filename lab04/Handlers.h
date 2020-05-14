#ifndef LAB2_HANDLERS_H
#define LAB2_HANDLERS_H

#include "menu.h"

class Handler{
protected:
    std::string CommandDesc;
public:
    std::string getDesc();
    virtual void handle(Menu* menu){}
    Handler();
};

class ExitHandler : public Handler{
public:
    ExitHandler();
    void handle(Menu* menu);
};

class AddHandler : public Handler{
public:
    AddHandler();
    void handle(Menu* menu);
};

#endif //LAB2_HANDLERS_H
