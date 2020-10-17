#include <Arduino.h>
#include "config.h"

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
  blinkNTimes(n);
  delay(2000);
}