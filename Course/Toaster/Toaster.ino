// Larson Scanner with Capsense

#include <CapSense.h>

const int THRESHOLD = 500;

CapSense  cs = CapSense(A1, A0);        
// 10M resistor between pins A1 & A0, pin A0 is sensor pin

int period = 100;


void setup()
{
  for (int pin = 3; pin < 14; pin++)
  {
    pinMode(pin, OUTPUT);
  } 
  Serial.begin(9600);
}

void loop()
{
  if (someoneNear())
  {
    for (int i = 0; i < 5; i++)
    {
      scan();
    }
  }
  delay(10);
}

void scan()
{
  for (int pin = 3; pin < 14; pin++)
  {
    digitalWrite(pin, HIGH);
    delay(period);
    digitalWrite(pin, LOW);
  }
  for (int pin = 13; pin > 2; pin--)
  {
    digitalWrite(pin, HIGH);
    delay(period);
    digitalWrite(pin, LOW);
  }
} 

boolean someoneNear()
{
  long reading = cs.capSense(50);
  Serial.println(reading); 
  return (reading > THRESHOLD);
}
