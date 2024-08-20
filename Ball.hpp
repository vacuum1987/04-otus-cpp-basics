#pragma once
#include "Painter.hpp"
#include "Point.hpp"
#include "Velocity.hpp"

class Ball {
public:
    Ball (Point center, Velocity velocity, Color color, double radius); // конструктор класса Ball принимает параметры 
    void setVelocity(const Velocity& velocity); // задать скорость шара
    Velocity getVelocity() const;               // получить скорость шара
    void draw(Painter& painter) const;          // нарисовать шар, используя painter
    void setCenter(const Point& center);        // задать координаты центра шара
    Point getCenter() const;                    // получить центр шара
    double getRadius() const;                   // получить радиус шара
    double getMass() const;                     // получить массу шара
private:
    Velocity ball_velocity;                         // текущая скорость шара - объект типа Velocity 
    Point ball_center;                              // текущее местоположение центра шара
    double ball_radius;                             // радиус шара
    Color ball_color;                             // радиус шара
    double ball_mass;                           // масса шара - она константна, поэтому можем хранить как член данных в private
};
