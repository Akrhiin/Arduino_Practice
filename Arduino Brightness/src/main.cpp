#include <Arduino.h>

void setup() {
  pinMode(A0,INPUT);
}

void loop() {
  int value = analogRead(A0);
  analogWrite(9, value/4);
}