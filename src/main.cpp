#include <Arduino.h>

void setup() {
}

void blinkNTimes(int n) {
  for (size_t i = 0; i < n; i++)
  {
    digitalWrite(LED_BUILTIN, LOW);
    delay(500);
    digitalWrite(LED_BUILTIN, HIGH);
    delay(500);
  }
}

void loop() {
  int n = 8;
  blinkNTimes(n);
  delay(2000);
}