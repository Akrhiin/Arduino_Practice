#include <Arduino.h>

const int buttonPin = 8;

void setup() {
  pinMode(buttonPin, INPUT);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  int currentPin = digitalRead(buttonPin);
  digitalWrite(LED_BUILTIN, currentPin);
}
