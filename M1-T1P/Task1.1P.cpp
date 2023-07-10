// C++ code
//
int sensorValue = 0;

void setup()
{
  pinMode(2, INPUT);
  Serial.begin(9600);
  pinMode(13, INPUT);
  pinMode(13, OUTPUT);
}

void loop()
{
  sensorValue = digitalRead(2);
  Serial.print("sensor input: ");
  Serial.println(sensorValue);
  Serial.print("LED output: ");
  Serial.println(digitalRead(13));
  if (sensorValue == HIGH) {
    digitalWrite(13, HIGH);
  } else {
    digitalWrite(13, LOW);
  }
  delay(10); // Delay a little bit to improve simulation performance
}