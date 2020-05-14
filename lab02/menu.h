#ifndef LAB2_MENU_H
#define LAB2_MENU_H

#include <iostream>
#include <string>
#include <map>

class Menu;
class Handler;

#include "FileWriter.h"
#include "Handlers.h"

class Menu{
private:
    FileWriter* file;
    bool isActive;
    std::map< std::string, Handler* > commands;
    void ShowTitle(std::string title);
    void ShowCommandList();
public:
    Menu();
    ~Menu();
    FileWriter* getFileWriter();
    void exit();
    void run();

};

#endif //LAB2_MENU_H
