// Arduino 1
//
int sensorValue = 0;

void setup()
{
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  Serial.begin(9600);
  pinMode(13, INPUT);
  pinMode(13, OUTPUT);
  
  attachInterrupt(digitalPinToInterrupt(2),changeLED,CHANGE);
}

void loop()
{
}

void changeLED()
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
}


// Arduino 2
//
void setup()
{
  pinMode(A0, INPUT);
  pinMode(2, OUTPUT);
}

void loop()
{
  //Serial.println(analogRead(A0));
  if(analogRead(A0) >= 184) {
  	digitalWrite(2, HIGH);
  } else {
  	digitalWrite(2, LOW);
  }
}