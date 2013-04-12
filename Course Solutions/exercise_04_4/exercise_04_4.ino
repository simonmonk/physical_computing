// exercise_04
// Actuators

#include <Servo.h>

const int servoPin = 8;
const int tmpPin = A0;

Servo servo;

void setup()
{
  Serial.begin(9600);
  servo.attach(servoPin);
}

void loop()
{
  int raw = analogRead(tmpPin);
  float volts = raw / 205.0;
  float tempC = 100.0 * volts - 50;
  // 0-180 for temperature 20-30
  int angle = (tempC - 20.0) * (180.0 / 10.0);
  if (angle < 0) angle = 0;
  if (angle > 180) angle = 180;
  Serial.println(angle);
  servo.write(angle);
  delay(100);
}

