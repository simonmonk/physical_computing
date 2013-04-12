// Accelerometer Test

void setup()
{
  Serial.begin(9600); 
  pinMode(A1, OUTPUT);
  digitalWrite(A1, HIGH);
}

void loop()
{
  int x = analogRead(A4);
  int y = analogRead(A3);
  int z = analogRead(A2);
  
  Serial.print("x="); Serial.print(x);
  Serial.print(" y="); Serial.print(y);
  Serial.print(" z="); Serial.println(z);
  delay(1000);
  
}
