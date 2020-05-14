#ifndef LAB2_FILEWRITER_H
#define LAB2_FILEWRITER_H

#include <fstream>
#include <iostream>

class FileWriter{
private:
    FILE* file;
    bool isOpen;
    std::string name;
    std::string lastError;
public:
    FileWriter();
    FileWriter(std::string& fileName);
    ~FileWriter();
    std::string getLastError();
    void setError(std::string error);
    bool open(std::string& fileName);
    bool isOpened();
    void close();
    std::string getName();

    FileWriter& operator<<(int& value);
    FileWriter& operator<<(float& value);
    FileWriter& operator<<(std::string& value);
};

#endif //LAB2_FILEWRITER_H
