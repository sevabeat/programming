#ifndef LAB2_MENU_H
#define LAB2_MENU_H

#include <iostream>
#include <string>
#include <map>
#include <vector>

class Menu;
class Handler;

#include "Handlers.h"
#include "Circle.h"

class Menu{
private:
    std::vector<IFigure*> figures;
    bool isActive;
    std::map< std::string, Handler* > commands;
    void ShowCommandList();
public:
    Menu();
    ~Menu();
    void exit();
    void run();

};

#endif //LAB2_MENU_H
