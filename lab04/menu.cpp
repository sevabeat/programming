#include "menu.h"

Menu::Menu(): isActive(false){
    this->commands["exit"] = new ExitHandler();
}
Menu::~Menu(){
    for(auto& it : this->commands){
        delete it.second;
    }
}

void Menu::ShowCommandList(){
    std::cout << std::string(30, '-') << std::endl;
    std::cout << "Commands list: " << std::endl;
    for(auto& it : this->commands){
        std::cout << "- " << it.second->getDesc() << std::endl;
    }
    std::cout << std::endl;
};
void Menu::run(){
    this->isActive = true;
    this->ShowCommandList();

    std::string command;
    while(this->isActive){
        std::cout << "> ";
        std::cin >> command;
        if(this->commands.find(command) != this->commands.end()){
            this->commands[command]->handle(this);
        }else{
            std::cout << "Command not found" << std::endl;
        }
    }
}
void Menu::exit(){
    this->isActive = false;
    std::cout << "Bye!" << std::endl;
}