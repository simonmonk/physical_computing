// exercise_06
// Keyboard

const int switchPin = 7;

void setup()
{
  pinMode(switchPin, INPUT_PULLUP);
  Keyboard.begin();
}

void loop()
{
  if (digitalRead(switchPin) == LOW)
  {
    Keyboard.print("PASSWORD");
    delay(500);
  }
}
