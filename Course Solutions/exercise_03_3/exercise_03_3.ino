// exercise_03
// Actuators

const int redPin = 11;
const int greenPin = 10;
const int bluePin = 9;
const int servoPin = 8;
const int buzzerPin = 2;

int brightness = 0;

void setup()
{
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop()
{
  analogWrite(redPin, brightness);
  analogWrite(greenPin, brightness);
  brightness++;
  if (brightness > 255)
  {
    brightness = 0;
  }
  delay(10);
}
