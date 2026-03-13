#include <d9servo.h>

d9servo wheel(9); // Колесо на 9 пине

void setup() {
  wheel.init();
}

void loop() {
  wheel.speed(100);  // Полный ход вперед
  delay(2000);
  
  wheel.speed(0);    // Остановка
  delay(1000);
  
  wheel.speed(-100); // Полный ход назад
  delay(2000);
  
  wheel.speed(0);    // Остановка
  delay(3000);
}
