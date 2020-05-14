
#include "Handlers.h"

Handler::Handler(): CommandDesc(""){}

std::string Handler::getDesc(){
    return this->CommandDesc;
}

//Exit Handler
ExitHandler::ExitHandler() {
    this->CommandDesc = "exit";
}
void ExitHandler::handle(Menu* menu) {
    menu->exit();
}
//Open Handler
OpenHandler::OpenHandler() {
    this->CommandDesc = "open <fileName>";
}
void OpenHandler::handle(Menu* menu) {
    std::string fileName;
    std::cin >> fileName;
    if(menu->getFileWriter()->open(fileName)){
        std::cout << "File was opened!" << std::endl;
    }else{
        std::cout << "Error: File open fail" << std::endl;
    }
}

//Append Handler
AppendHandler::AppendHandler() {
    this->CommandDesc = "append [int, string, float] <value>";
}
void AppendHandler::handle(Menu* menu) {
    std::string type;
    std::cin >> type;
    if(type == "int"){
        int value;
        std::cin >> value;
        *menu->getFileWriter() << value;
    }else if(type == "float"){
        float value;
        std::cin >> value;
        *menu->getFileWriter() << value;
    }else if(type == "string"){
        std::string value;
        std::cin >> value;
        *menu->getFileWriter() << value;
    }else{
        std::cout << "Error: Unknown type '" << type << "'" << std::endl;
    }
    std::string error = menu->getFileWriter()->getLastError();
    if(error != ""){
        std::cout << error << std::endl;
    }else{
        std::cout << "Success!" << std::endl;
    }
}

//isOpen Handler
isOpenHandler::isOpenHandler(){
    this->CommandDesc = "isOpen";
}
void isOpenHandler::handle(Menu *menu) {
   std::cout << (menu->getFileWriter()->isOpened() ? "File open!" : "File closed") << std::endl;
}

//Name Handler
NameHandler::NameHandler(){
    this->CommandDesc = "getName";
}
void NameHandler::handle(Menu* menu){
    std::cout << menu->getFileWriter()->getName() << std::endl;
}

//Close Handler
CloseHandler::CloseHandler(){
    this->CommandDesc = "close";
}
void CloseHandler::handle(Menu* menu) {
    menu->getFileWriter()->close();
    std::cout << "File was closed!" << std::endl;
}