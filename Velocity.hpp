#pragma once
#include "Point.hpp"
#include <cmath>

class Velocity {
  public:
    inline Velocity() = default;

    // TODO: комментарии
    // далее перегружаем конструкторы для класса Velocity

    // описываем конструктор, принимающий на вход абсолютное значение скорости и угол движения,
    // создающий вектор из начала координат с вершиной в точке (переменную типа Point), умноженной на значение абсолютной скорости (abs) 
    inline Velocity(double abs, double angle) {
        const double x = std::cos(angle);
        const double y = std::sin(angle);
        vec = Point{x, y} * abs;
    }

    // описываем конструктор, принимающий на вход координаты точки (объект типа Point) - он будет
    //  сразу делать из него вектор из начала координатных осей
    inline Velocity(const Point& vector) {
        setVector(vector);
    }

    // описываем функцию setVector, которая делает вектор из координат точки
    inline void setVector(const Point& vector) {
        vec = vector;
    }

    // возвращаем значение переменной vec (т.е. вектор) без возможности его изменения (сам вектор защищен в private)
    inline Point vector() const {
        return vec;
    }

  private:
    Point vec;
};
