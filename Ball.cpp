#include "Ball.hpp"
#include <cmath>
#include <corecrt_math_defines.h>
#define _USE_MATH_DEFINES

// описываем конструктор Ball для получения входных параметров для отрисовки шара
Ball::Ball (Point center, Velocity velocity, Color color, double radius) {
    ball_center = center;
    ball_velocity = velocity;
    ball_color = color;
    ball_radius = radius;
    double ball_volume = M_PI * pow (ball_radius, 3) * 4 / 3;
    ball_mass = ball_volume;
}


/**
 * Задает скорость объекта
 * @param velocity новое значение скорости
 */
void Ball::setVelocity(const Velocity& velocity) {
    // TODO: место для доработки
    ball_velocity = velocity;
}

/**
 * @return скорость объекта
 */
Velocity Ball::getVelocity() const {
    // TODO: место для доработки
    return  ball_velocity;
}

/**
 * @brief Выполняет отрисовку объекта
 * @details объект Ball абстрагирован от конкретного
 * способа отображения пикселей на экране. Он "знаком"
 * лишь с интерфейсом, который предоставляет Painter
 * Рисование выполняется путем вызова painter.draw(...)
 * @param painter контекст отрисовки
 */
void Ball::draw(Painter& painter) const {
    // TODO: место для доработки
    painter.draw (ball_center, ball_radius, ball_color); 

}

/**
 * Задает координаты центра объекта
 * @param center новый центр объекта
 */
void Ball::setCenter(const Point& center) {
    // TODO: место для доработки
    ball_center = center;
}

/**
 * @return центр объекта
 */
Point Ball::getCenter() const {
    // TODO: место для доработки
    return ball_center;
}

/**
 * @brief Возвращает радиус объекта
 * @details обратите внимание, что метод setRadius()
 * не требуется
 */
double Ball::getRadius() const {
    // TODO: место для доработки
    return ball_radius;
}

/**
 * @brief Возвращает массу объекта
 * @details В нашем приложении считаем, что все шары
 * состоят из одинакового материала с фиксированной
 * плотностью. В этом случае масса в условных единицах
 * эквивалентна объему: PI * radius^3 * 4. / 3.
 */
double Ball::getMass() const {
    // TODO: место для доработки
    // double ball_volume = M_PI * pow (ball_radius, 3) * 4 / 3;
    // double ball_mass = ball_volume;
    return ball_mass;
}
