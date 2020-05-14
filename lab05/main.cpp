#include <iostream>
#include <string>
#include "max.h"
#include "Stack.h"

//Вариант 17
//Лаб 5

int main() {
    std::string arr[3] = {"aa", "ab", "bb"};
    std::cout << "Max string: " << max(arr, 3) << std::endl;

    try {
        Stack<2, std::string> stack;
        stack.push("hssggh");
        stack.push("hssgghkl");
        stack.push("hssgghkl");
        stack.push("hssgghkl");
        std::cout << stack.top() << std::endl;
        std::cout << stack.size();
    }catch (StackException& e){
        std::cout << "Error: " << e.what() << std::endl;
    }
    return 0;
}