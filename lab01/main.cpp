#include "procedures.h"

void task1(){
    int var_1, var_2, var_3, var_4;
    std::cout << "Задание 1: введите две переменные (int, int):" << std::endl;
    std::cin >> var_1 >> var_2;
    var_3 = var_1;
    var_4 = var_2;
    swap(&var_1, &var_2);
    std::cout << "Переменные после процедуры (по указателю): " << var_1 << " " << var_2 << std::endl;
    swap(var_3, var_4);
    std::cout << "Переменные после процедуры (по ссылке): " << var_3 << " " << var_4 << std::endl;
    std::cout << std::endl;
}

void task4(){
    float var_1, var_2;
    std::cout << "Задание 4: введите переменную (float):" << std::endl;
    std::cin >> var_1;
    var_2 = var_1;
    WholePart(&var_1);

    std::cout << "Переменная после процедуры (по указателю): " << var_1 << std::endl;
    WholePart(var_2);
    std::cout << "Переменная после процедуры (по ссылке): " << var_1 << std::endl;
    std::cout << std::endl;
}

void task9(){
    float real, im, scalar;
    std::cout << "Задание 9: введите вещественную и мнимую часть числа (float, float):" << std::endl;
    std::cin >> real >> im;
    std::cout << "Введите число на которое нужно умножить: " << std::endl;
    std::cin >> scalar;

    ComplexNumber num1(real, im);
    ComplexNumber num2(real, im);

    multiply(&num1, &scalar);

    std::cout << "Комплексное число после процедуры (по указателю): " << num1.a << (num1.b > 0 ? " + ": " - ") << abs(num1.b) << "i" <<std::endl;
    multiply(num2, scalar);
    std::cout << "Комплексное число после процедуры (по ссылке): " << num2.a << (num2.b > 0 ? " + ": " - ") << abs(num2.b) << "i" <<std::endl;
    std::cout << std::endl;
}
void task12(){
    float c_x, c_y, c_r, v_x, v_y;
    std::cout << "Задание 12: введите координаты центра (x, y) и радиус окружности (float, float, float):" << std::endl;
    std::cin >> c_x >> c_y >> c_r;
    std::cout << "Введите координаты вектора (x, y): " << std::endl;
    std::cin >> v_x >> v_y;

    Circle c1(c_x, c_y, c_r);
    Circle c2(c_x, c_y, c_r);
    Vector v(v_x, v_y);

    MoveCircleByVector(&c1, &v);
    std::cout << "Центр окружности после процедуры (по указателю): (" << c1.x << ", " << c1.y << ")" << std::endl;
    MoveCircleByVector(c2, v);
    std::cout << "Центр окружности после процедуры (по ссылке): (" << c2.x << ", " << c2.y << ")" << std::endl;
    std::cout << std::endl;
}

//Вариант 17
int main() {

    task1();
    task4();
    task9();
    task12();

    return 0;
}