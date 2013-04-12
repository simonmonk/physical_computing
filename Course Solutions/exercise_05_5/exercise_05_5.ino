// exercise_03
// Comms

#include <Servo.h>

const int redPin = 11;
const int greenPin = 10;
const int bluePin = 9;
const int servoPin = 8;
const int buzzerPin = 2;

Servo servo;

void setup()
{
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  servo.attach(servoPin);
  Serial.begin(9600);
}

void loop()
{
  if (Serial.available())
  {
    char ch = Serial.read();
    if (ch == 'R')
    {
      digitalWrite(redPin, HIGH);
    }
    else if (ch == 'r')
    {
      digitalWrite(redPin, LOW);
    }
    else if (ch == 'G')
    {
      digitalWrite(greenPin, HIGH);
    }
    else if (ch == 'g')
    {
      digitalWrite(greenPin, LOW);
    }
    else if (ch == 'B')
    {
      digitalWrite(bluePin, HIGH);
    }
    else if (ch == 'b')
    {
      digitalWrite(bluePin, LOW);
    }
    else if (ch == 'z')
    {
      tone(buzzerPin, 330);
      delay(1000);
      noTone(buzzerPin);
    }
    else if (ch == 'a')
    {
      int angle = Serial.parseInt();
      servo.write(angle);
    }
  }
  
}
