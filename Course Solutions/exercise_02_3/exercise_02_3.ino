// exercise_02
// Sensors

const int switch1Pin = 8;
const int switch2Pin = 9;

void setup()
{
  pinMode(switch1Pin, INPUT_PULLUP);
  pinMode(switch2Pin, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop()
{
  if (digitalRead(switch1Pin) == LOW)
  {
    Serial.println("Hello Arduino");
    delay(500);
  }
  if (digitalRead(switch2Pin) == LOW)
  {
    Serial.println("Don't press this button again!");
    delay(500);
  }
}

