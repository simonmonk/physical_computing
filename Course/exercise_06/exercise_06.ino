// exercise_06
// Accelerometer Mouse

const int xPin = A4;
const int yPin = A3;
const int zPin = A2;
const int switchPin = 7;

void setup()
{
  pinMode(switchPin, INPUT_PULLUP);
  // A1 is the SL pin on accl module
  pinMode(A1, OUTPUT);
  digitalWrite(A1, HIGH);
  Mouse.begin();
}

void loop()
{
  int x = analogRead(xPin) - 335;
  int y = analogRead(yPin) - 380;
  
  if (abs(x) > 10 || abs(y) > 10)
  {
    Mouse.move(x / 50, -y / 50, 0);
  }
  if (digitalRead(switchPin) == LOW)
  {
    Mouse.click();
    delay(100);
  }
}
