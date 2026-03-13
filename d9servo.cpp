#include "d9servo.h"

// Реализация конструктора
d9servo::d9servo(int pin) {
    _pin = pin;
}

// Реализация инициализации
void d9servo::init() {
    _internalServo.attach(_pin);
}

// Метод для обычных серво (0-180 градусов)
void d9servo::rot(int angle) {
    if (angle < 0) angle = 0;
    if (angle > 180) angle = 180;
    _internalServo.write(angle);
}

// Метод для серво 360 (скорость от -100 до 100)
void d9servo::speed(int s) {
    if (s < -100) s = -100;
    if (s > 100) s = 100;
    // Преобразуем диапазон: -100...100 -> 0...180 градусов
    // 0 станет 90 (стоп для 360 серво)
    int val = map(s, -100, 100, 0, 180);
    _internalServo.write(val);
}

// Реализация отключения
void d9servo::detach() {
    _internalServo.detach();
}