#include <Servo.h>
Servo myservo;
const int buttonPin1 = 12;
const int buttonPin2 = 7;
int buttonState1 = 0;
int buttonState2 = 0;
int pos = 0;

void setup() {
  myservo.attach(9);
  pinMode(buttonPin1, INPUT);
  pinMode(buttonPin2, INPUT);
}

void loop() {
  buttonState1 = digitalRead(buttonPin1);
  buttonState2 = digitalRead(buttonPin2);
  if (buttonState1 == HIGH) {
    pos += 3;
    myservo.write(pos);
    delay(15);
  } else if (buttonState2 == HIGH) {
    pos -= 3;
    myservo.write(pos);
    delay(15);
  } else {
    myservo.write(pos);
  }
}