#ifndef LAB4_INTERFACES_H
#define LAB4_INTERFACES_H
#include <string>

// Интерфейс "Геометрическая фигура".
class IGeoFig {
public:
// Площадь.
    virtual double square() = 0;
// Периметр.
    virtual double perimeter() = 0;
};

// Вектор
class Vector2D {
public:
    double x, y;
};
// Интерфейс "Физический объект".
class IPhysObject {
public:
// Масса, кг.
    virtual double mass() = 0;
// Координаты центра масс, м.
    virtual Vector2D position() = 0;
// Сравнение по массе.
    virtual bool operator== ( const IPhysObject& ob ) const = 0;
// Сравнение по массе.
    virtual bool operator< ( const IPhysObject& ob ) const = 0;
};
// Интерфейс "Отображаемый"
class IPrintable {
public:
// Отобразить на экране
// (выводить в текстовом виде параметры фигуры).
    virtual void draw() = 0;
};
// Интерфейс для классов, которые можно задать через диалог с пользователем.
class IDialogInitiable {
// Задать параметры объекта с помощью диалога с пользователем.
    virtual void initFromDialog() = 0;
};
// Интерфейс "Класс"
class BaseCObject {
public:
// Имя класса (типа данных).
    virtual const std::string classname() = 0;
// Размер занимаемой памяти.
    virtual unsigned int size() = 0;
};

class IFigure : public IGeoFig, public IPhysObject, public IPrintable, public IDialogInitiable, public BaseCObject {

};

#endif //LAB4_INTERFACES_H
