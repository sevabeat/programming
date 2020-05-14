#include "Triangle.h"
#include "Array.h"
//Лаб 3
//Вариант 17

int main() {
    Triangle t[2] = {
            Triangle(Vector(2, 0), Vector(0, 1), Vector(4, 5)),
            Triangle(Vector(8, 2), Vector(9, 4), Vector(10, 3))
    };
    bool result = t[0] != t[1];
    std::cout << std::string(30, '-') << std::endl;
    std::cout << "Areas:" << std::endl;
    std::cout << "[0] => " << t[0].getArea() << std::endl;
    std::cout << "[1] => " << t[1].getArea() << std::endl;
    std::cout << "Result: " << (result ? "true" : "false") << std::endl;
    std::cout << std::string(30, '-') << std::endl;

    std::cout << "Before adding:" << std::endl;
    t[0].print();
    t[0] += Vector(2, 4);
    std::cout << "After adding:" << std::endl;
    t[0].print();
    std::cout << std::string(30, '-') << std::endl;
    Array a1(10);
    for(int i = 0; i < 10; i++){
        a1[i] = i + 1;
    }
    Array a2(15);
    for(int i = 0; i < 15; i++){
        a2[i] = i + 1;
    }
    std::cout << "A1: ";
    a1.print();
    std::cout << "A2: ";
    a2.print();

    std::cout << "A1 > A2 : " << (a1.operator>(a2) ? "true" : "false") << std::endl;
    std::cout << "A1 < A2 : " << (a1 < a2 ? "true" : "false") << std::endl;
    std::cout << "A1 == A2 : " << (a1 == a2 ? "true" : "false") << std::endl;
    std::cout << "A1 != A2 : " << (a1 != a2 ? "true" : "false") << std::endl;

    Array a3 = a1 + a2;
    std::cout << "A3: ";
    a3.print();
    return 0;
}