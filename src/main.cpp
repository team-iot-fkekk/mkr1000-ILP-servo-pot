#include <Arduino.h>
#include <Servo.h> // Include the Servo library

int servoPin = 3; // Declare the Servo pin
int angle = 0;
int pot = A0;

Servo Servo1; // Create a servo object

void setup()
{
  Servo1.attach(servoPin);
}

void loop()
{
  angle = analogRead(pot);
  angle = map(angle, 0, 1023, 0, 179); // scaling the pot value to angle value between 0-180
  Servo1.write(angle);                 // command to rotate the servo at the specified angle
  delay(5);
}