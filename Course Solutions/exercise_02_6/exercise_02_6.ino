// exercise_02
// Sensors

const int lightPin = A1;

const int threshold = 800;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  int light = analogRead(lightPin);
  if (light > threshold)
  {
    Serial.println("Its dark");
  }
  delay(500);
}

