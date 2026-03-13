#include <d9servo.h>

d9servo myservo(9); // Серво на 9 пине
const int potPin = A0; // Потенциометр на A0

void setup() {
  myservo.init();
}

void loop() {
  // 1. Читаем значение с потенциометра (от 0 до 1023)
  int rawValue = analogRead(potPin);

  // 2. Масштабируем его в диапазон углов (от 0 до 180)
  // Это и есть та самая "база" через map
  int angle = map(rawValue, 0, 1023, 0, 180);

  // 3. Отправляем готовый угол в библиотеку
  myservo.rot(angle);

  // Небольшая задержка, чтобы серво не "сходила с ума" от шумов
  delay(15);
}
