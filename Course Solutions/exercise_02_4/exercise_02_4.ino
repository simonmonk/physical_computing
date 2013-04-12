// exercise_02
// Sensors

const int tmpPin = A2;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  int raw = analogRead(tmpPin);
  float volts = raw / 205.0;
  float tempC = 100.0 * volts - 50;
  Serial.println(tempC);
  delay(500);
}

