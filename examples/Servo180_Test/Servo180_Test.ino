#include <d9servo.h>

// Создаем объект на 9 пине
d9servo myservo(9);

void setup() {
  myservo.init(); // Инициализация библиотеки
}

void loop() {
  myservo.rot(0);   // Угол 0 градусов
  delay(1000);
  
  myservo.rot(90);  // Угол 90 градусов
  delay(1000);
  
  myservo.rot(180); // Угол 180 градусов
  delay(1000);
}
