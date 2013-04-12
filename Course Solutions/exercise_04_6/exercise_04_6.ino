// exercise_04
// Advanced 

const int xPin = A4;
const int yPin = A3;
const int zPin = A2;
const int redPin = 9;
const int greenPin = 10;
const int bluePin = 11;

void setup()
{
  // A1 is the SL pin on accl module
  pinMode(A1, OUTPUT);
  digitalWrite(A1, HIGH);
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop()
{
  int x = analogRead(xPin);
  int y = analogRead(yPin);
  int z = analogRead(zPin);
  //scale 0-1024 down to 0-490
  analogWrite(redPin, x / 2);
  analogWrite(greenPin, y / 2);
  analogWrite(bluePin, z / 2);
}
