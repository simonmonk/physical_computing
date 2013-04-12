// exercise_03
// Actuators

#include <Servo.h>

const int redPin = 11;
const int greenPin = 10;
const int bluePin = 9;
const int servoPin = 8;
const int buzzerPin = 2;

Servo servo;
int angle = 0;

void setup()
{
  servo.attach(servoPin);
}

void loop()
{
  servo.write(angle);
  angle = angle + 10;
  if (angle == 180)
  {
    angle = 0;
  }
  delay(1000);
}
