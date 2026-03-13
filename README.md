# d9servo 🚀
**A lightweight and intuitive Arduino library for seamless servo motor control.**

[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)
[![Arduino-Compatible](https://img.shields.io/badge/Arduino-Compatible-00979D.svg?style=flat&logo=arduino)](https://www.arduino.cc/)

[Read this in Russian (Читать на русском)](README_RU.md)

## 📖 Overview
Standard Arduino servo control often requires manual mapping and constant `write()` calls. **d9servo** simplifies this by providing dedicated methods for different types of servos, making your code cleaner and easier to read.

## ✨ Key Features
- **Simplified Interface:** Dedicated methods for 180° and 360° servos.
- **Auto-Mapping:** No need to use the `map()` function in your main sketch for speed control.
- **Safety:** Built-in constraints to prevent out-of-range values.
- **Power Saving:** Easy `detach()` method to stop buzzing and save energy.

## 🛠 Wiring
- **Signal (Orange/Yellow):** Digital Pin (e.g., D9)
- **VCC (Red):** 5V
- **GND (Brown/Black):** GND



## 🚀 Quick Start
```cpp
#include <d9servo.h>

d9servo myservo(9); 

void setup() {
  myservo.init();
}

void loop() {
  myservo.rot(90);    // Move to 90 degrees
  delay(1000);
  myservo.speed(100); // Full speed (for 360 servos)
  delay(1000);
}
