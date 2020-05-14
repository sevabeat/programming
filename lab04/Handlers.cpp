
#include "Handlers.h"

Handler::Handler(): CommandDesc(""){}

std::string Handler::getDesc(){
    return this->CommandDesc;
}

//Exit Handler

ExitHandler::ExitHandler(){
    this->CommandDesc = "exit";
}
void ExitHandler::handle(Menu *menu){
    menu->exit();
}

//Add Handler

AddHandler::AddHandler(){
    this->CommandDesc = "add [circle, paral]";
}
void AddHandler::handle(Menu *menu){
    std::string type;
    std::cin >> type;
    if(type == "circle"){
        double radius, mass;
        Vector2D center;
        std::cout << "Enter radius:" << std::endl;
        std::cin >> radius;
        std::cout << "Enter mass:" << std::endl;
        std::cin >> mass;
        std::cout << "Enter center (x, y):" << std::endl;
        std::cin >> center.x >> center.y;
        auto circle = new Circle(radius, center, mass);
    }
}

