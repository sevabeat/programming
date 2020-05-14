#include "FileWriter.h"

FileWriter::FileWriter(){
    this->file = NULL;
    this->isOpen = false;
    this->name = "";
    this->lastError = "";
}
FileWriter::FileWriter(std::string& fileName){
    this->lastError = "";
    this->open(fileName);
}
FileWriter::~FileWriter(){
    fclose(this->file);
}
bool FileWriter::open(std::string& fileName){
    this->file = std::fopen(fileName.c_str(), "a");
    if(this->file != NULL){
        this->name = fileName;
        this->isOpen = true;
    }else{
        this->name = "";
        this->isOpen = false;
    }
    return this->isOpen;
}
bool FileWriter::isOpened(){
    return this->isOpen;
}
std::string FileWriter::getName(){
    if(this->isOpen){
        return this->name;
    }
    return "Error: File is not open!";
}
void FileWriter::close(){
    fclose(this->file);
}
std::string FileWriter::getLastError(){
    std::string tmp = this->lastError;
    this->lastError = "";
    return tmp;
}
void FileWriter::setError(std::string error){
    this->lastError = error;
}
FileWriter& FileWriter::operator<<(int& value){
    if(this->isOpen) {
        std::fprintf(this->file, "%d", value);
        std::fflush(this->file);
    }else this->setError("Error: File is not open!");
    return *this;
}
FileWriter& FileWriter::operator<<(float& value){
    if(this->isOpen) {
        std::fprintf(this->file, "%f", value);
        std::fflush(this->file);
    }else this->setError("Error: File is not open!");
    return *this;
}
FileWriter& FileWriter::operator<<(std::string& value){
    if(this->isOpen) {
        std::fprintf(this->file, "%s", value.c_str());
        std::fflush(this->file);
    }else this->setError("Error: File is not open!");
    return *this;
}
