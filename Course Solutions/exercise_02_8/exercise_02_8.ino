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
  int z = analogRead(zPin);
  
  Serial.print("x="); Serial.print(x);
  Serial.print(" y="); Serial.print(y);
  Serial.print(" z="); Serial.println(z);
  delay(1000);
}
