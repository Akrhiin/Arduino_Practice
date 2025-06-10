#include <Arduino.h>

// stay green till button pressed
  // on button press, yellow for 3sec, then red for 7sec, then green
void setup() {
  pinMode(4,INPUT);
  pinMode(12,OUTPUT); // green
  pinMode(11,OUTPUT); // yellow
  pinMode(10,OUTPUT); // red
}

void loop() {
  digitalWrite(12, HIGH);
  int button_press = digitalRead(4);
  if (button_press) {
    digitalWrite(12, LOW);
    digitalWrite(11, HIGH);
    delay(3000);
    digitalWrite(11, LOW);
    digitalWrite(10, HIGH);
    delay(7000);
    digitalWrite(10, LOW);
  }
}