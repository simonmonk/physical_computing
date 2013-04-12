// exercise_03
// Actuators

#include <Servo.h>

const int redPin = 11;
const int greenPin = 10;
const int bluePin = 9;
const int servoPin = 8;
const int buzzerPin = 2;
const int switch1Pin = 6;
const int switch2Pin = 5;

int color = 0;

void setup()
{
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  pinMode(switch1Pin, INPUT_PULLUP);
  pinMode(switch2Pin, INPUT_PULLUP);
}

void loop()
{
  if (digitalRead(switch1Pin) == LOW)
  {
    color++;
    delay(200);
  }
  if (color > 2)
  {
    color = 0;
  }
  if (color == 0)
  {
    setColor(1, 0, 0);
  }
  else if (color == 1)
  {
    setColor(0, 1, 0);
  }
  else if (color == 2)    
  {
    setColor(0, 0, 1);
  }
}

void setColor(int red, int green, int blue)
{
  digitalWrite(redPin, red);
  digitalWrite(greenPin, green);
  digitalWrite(bluePin, blue);  
}
