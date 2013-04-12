// exercise_03
// Actuators

const int redPin = 11;
const int greenPin = 10;
const int bluePin = 9;
const int servoPin = 8;
const int buzzerPin = 2;


void setup()
{
  pinMode(buzzerPin, OUTPUT);
}

void loop()
{
  tone(buzzerPin, 220);
  delay(300);
  tone(buzzerPin, 300);
  delay(150);
  tone(buzzerPin, 310);
  delay(300);
  tone(buzzerPin, 200);
  delay(300);
  tone(buzzerPin, 225);
  delay(150);
  tone(buzzerPin, 330);
  delay(150);
}
