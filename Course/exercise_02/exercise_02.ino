// exercise_02
// Sensors

const int switch1Pin = 8;

void setup()
{
  pinMode(switch1Pin, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop()
{
  if (digitalRead(switch1Pin) == LOW)
  {
    Serial.println("Hello Arduino");
   delay(500);
  }
}

