// exercise_03
// Comms

const int redPin = 11;
const int greenPin = 10;
const int bluePin = 9;
const int servoPin = 8;
const int buzzerPin = 2;

void setup()
{
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  if (Serial.available())
  {
    char ch = Serial.read();
    if (ch == 'R')
    {
      digitalWrite(redPin, HIGH);
    }
    else if (ch == 'r')
    {
      digitalWrite(redPin, LOW);
    }
  }
  
}
