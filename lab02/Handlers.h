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

class OpenHandler : public Handler{
public:
    OpenHandler();
    void handle(Menu* menu);
};

class AppendHandler : public Handler{
public:
    AppendHandler();
    void handle(Menu* menu);
};

class isOpenHandler : public Handler{
public:
    isOpenHandler();
    void handle(Menu* menu);
};

class NameHandler : public Handler{
public:
    NameHandler();
    void handle(Menu* menu);
};

class CloseHandler : public Handler{
public:
    CloseHandler();
    void handle(Menu* menu);
};
#endif //LAB2_HANDLERS_H
