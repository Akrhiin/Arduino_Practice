#include <Arduino.h>

// put function declarations here:
int myFunction(int, int);

void setup() {
  pinMode(LED_BUILTIN, OUTPUT); // initialize LED digital pin as output
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH); // turn on LED
  delay(1000); // wait 1sec
  digitalWrite(LED_BUILTIN, LOW);  // turn off LED
  delay(1000); // wait 1sec
}