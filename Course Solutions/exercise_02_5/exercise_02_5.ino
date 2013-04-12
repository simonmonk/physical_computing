// exercise_02
// Sensors

const int lightPin = A1;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  int light = analogRead(lightPin);
  Serial.println(light);
  delay(500);
}

