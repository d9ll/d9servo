#ifndef D9SERVO_H
#define D9SERVO_H

#include <Arduino.h>
#include <Servo.h>

class d9servo {
  private:
    Servo _internalServo;
    int _pin;

  public:
    // Конструктор: сохраняет пин
    d9servo(int pin);
    
    // Инициализация: подключает серво
    void init();
    
    // Для обычных серво (0-180 градусов)
    void rot(int angle);
    
    // Для серво 360 (скорость: -100...100)
    void speed(int s);
    
    // Полное отключение сигнала
    void detach();
};

#endif