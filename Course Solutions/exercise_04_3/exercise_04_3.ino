// exercise_04
// Actuators

const int redPin = 11;
const int greenPin = 10;
const int bluePin = 9;
const int servoPin = 8;
const int buzzerPin = 2;
const int switch1Pin = 6;
const int switch2Pin = 5;
const int tmpPin = A0;


void setup()
{
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  int raw = analogRead(tmpPin);
  float volts = raw / 205.0;
  float tempC = 100.0 * volts - 50;
  // 0-255 for temperature 10-40
  int red = (tempC - 20.0) * (255.0 / 10.0);
  if (red < 0) red = 0;
  if (red > 255) red = 255;
  analogWrite(redPin, red);
  analogWrite(bluePin, 255-red);
  Serial.println(tempC);
  delay(100);
}

