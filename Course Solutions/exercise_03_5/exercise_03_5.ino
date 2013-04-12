// exercise_03
// Actuators

const int redPin = 11;
const int greenPin = 10;
const int bluePin = 9;
const int servoPin = 8;
const int buzzerPin = 2;

int red = 0;

void setup()
{
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop()
{
  analogWrite(redPin, red);
  analogWrite(greenPin, 255-red);
  analogWrite(bluePin, (red + 127 % 255));
  red++;
  if (red > 255)
  {
    red = 0;
  }
  delay(10);
}
