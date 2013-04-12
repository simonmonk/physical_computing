// exercise_02
// Accelerometer 

const int xPin = A4;
const int yPin = A3;
const int zPin = A2;


void setup()
{
  Serial.begin(9600); 
  // A1 is the SL pin on accl module
  pinMode(A1, OUTPUT);
  digitalWrite(A1, HIGH);
}

void loop()
{
  int x = analogRead(xPin);
  int y = analogRead(yPin);
  if (x > 400)
  {
    Serial.println("LEFT");
    delay(100);
  }
  else if (x < 200)
  {
    Serial.println("RIGHT");
    delay(100);
  }
  else if (y < 200)
  {
    Serial.println("FORWARD");
    delay(100);
  }
  else if (y > 400)
  {
    Serial.println("BACK");
    delay(100);
  }
}
