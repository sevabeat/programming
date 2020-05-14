#include "menu.h"
#include <cstdio>

Menu::Menu(): isActive(false){
    this->file = new FileWriter();

    this->commands["exit"] = new ExitHandler();
    this->commands["open"] = new OpenHandler();
    this->commands["append"] = new AppendHandler();
    this->commands["isOpen"] = new isOpenHandler();
    this->commands["getName"] = new NameHandler();
    this->commands["close"] = new CloseHandler();
}
Menu::~Menu(){
    delete this->file;
    for(auto& it : this->commands){
        delete it.second;
    }
}
FileWriter* Menu::getFileWriter(){
    return this->file;
}
void Menu::ShowTitle(std::string title){
    std::cout << std::string(title.size(), '-') << std::endl;
    std::cout << title << std::endl;
    std::cout << std::string(title.size(), '-') << std::endl;
}
void Menu::ShowCommandList(){
    this->ShowTitle("Commands list: ");
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